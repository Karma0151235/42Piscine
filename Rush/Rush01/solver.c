/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkoothra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 18:36:53 by rkoothra          #+#    #+#             */
/*   Updated: 2025/08/16 22:18:29 by rkoothra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		left_visible(int seq[4]);
int		right_visible(int seq[4]);
void	print_grid(int grid[4][4]);
static int	g_perms[24][4] = {{1, 2, 3, 4}, {1, 2, 4, 3}, {1, 3, 2, 4},
{1, 3, 4, 2}, {1, 4, 2, 3}, {1, 4, 3, 2},
{2, 1, 3, 4}, {2, 1, 4, 3}, {2, 3, 1, 4},
{2, 3, 4, 1}, {2, 4, 1, 3}, {2, 4, 3, 1},
{3, 1, 2, 4}, {3, 1, 4, 2}, {3, 2, 1, 4},
{3, 2, 4, 1}, {3, 4, 1, 2}, {3, 4, 2, 1},
{4, 1, 2, 3}, {4, 1, 3, 2}, {4, 2, 1, 3},
{4, 2, 3, 1}, {4, 3, 1, 2}, {4, 3, 2, 1}};
static int	g_vals[16];
static int	g_top[4];
static int	g_bottom[4];
static int	g_left[4];
static int	g_right[4];
static int	g_grid[4][4];
static int	g_row_cands[4][24];
static int	g_row_cnt[4];

void	parse_clues(const char *str)
{
	int	j;
	int	i;

	j = 0;
	while (j < 16)
	{
		g_vals[j] = str[2 * j] - '0';
		j++;
	}
	i = 0;
	while (i < 4)
	{
		g_top[i] = g_vals[i];
		g_bottom[i] = g_vals[i + 4];
		g_left[i] = g_vals[i + 8];
		g_right[i] = g_vals[i + 12];
		i++;
	}
}

void	build_row_candidates(void)
{
	int	r;
	int	p;
	int	seq[4];

	r = 0;
	while (r < 4)
	{
		g_row_cnt[r] = 0;
		p = 0;
		while (p < 24)
		{
			seq[0] = g_perms[p][0];
			seq[1] = g_perms[p][1];
			seq[2] = g_perms[p][2];
			seq[3] = g_perms[p][3];
			if (left_visible(seq) == g_left[r]
				&& right_visible(seq) == g_right[r])
			{
				g_row_cands[r][g_row_cnt[r]] = p;
				g_row_cnt[r] += 1;
			}
			p++;
		}
		r++;
	}
}

int	cols_final_ok(void)
{
	int	c;
	int	col[4];

	c = 0;
	while (c < 4)
	{
		col[0] = g_grid[0][c];
		col[1] = g_grid[1][c];
		col[2] = g_grid[2][c];
		col[3] = g_grid[3][c];
		if (left_visible(col) != g_top[c]
			|| right_visible(col) != g_bottom[c])
			return (0);
		c++;
	}
	return (1);
}

int	col_dup_ok(int last_row)
{
	int	c;
	int	rr;

	c = 0;
	while (c < 4)
	{
		rr = 0;
		while (rr < last_row)
		{
			if (g_grid[rr][c] == g_grid[last_row][c])
				return (0);
			rr++;
		}
		c++;
	}
	return (1);
}

int	backtrack(int r)
{
	int	i;
	int	p;

	if (r == 4)
	{
		if (cols_final_ok())
		{
			print_grid(g_grid);
			return (1);
		}
		return (0);
	}
	i = 0;
	while (i < g_row_cnt[r])
	{
		p = g_row_cands[r][i];
		g_grid[r][0] = g_perms[p][0];
		g_grid[r][1] = g_perms[p][1];
		g_grid[r][2] = g_perms[p][2];
		g_grid[r][3] = g_perms[p][3];
		if (col_dup_ok(r) && backtrack(r + 1))
			return (1);
		i++;
	}
	return (0);
}
