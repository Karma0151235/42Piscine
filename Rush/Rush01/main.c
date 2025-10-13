/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkoothra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 202
5/08/16 14:22:35 by rkoothra          #+#    #+#             */
/*   Updated: 2025/08/16 14:33:01 by rkoothra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstring(char *str);
int		input_checker(int argc, char **argv);
void	parse_clues(const char *str);
void	build_row_candidates(void);
int		backtrack(int r);

int	main(int argc, char **argv)
{
	if (input_checker(argc, argv) != 0)
	{
		ft_putstring("Error\n");
		return (0);
	}
	parse_clues(argv[1]);
	build_row_candidates();
	if (!backtrack(0))
		ft_putstring("Error\n");
	return (0);
}
