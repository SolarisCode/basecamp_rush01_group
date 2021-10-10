/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hint3_table.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:43:48 by coder             #+#    #+#             */
/*   Updated: 2021/10/10 20:47:22 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_check_row(char *playground, char hint3[6][6]);
void	ft_check_rev_row(char *playground, char hint3[6][6]);
void	ft_check_col(int x, char playground[6][6], char hint3[6][6]);
void	ft_check_rev_col(int x, char playground[6][6], char hint3[6][6]);
void	ft_write_result(char playground[6][6]);

void	ft_hint3_comp(char playground[6][6])
{
	int			row;
	int			col;
	static char	hint3[6][6] = {{3, 1, 3, 2, 4, 1},
								{3, 1, 2, 4, 3, 2},
								{3, 1, 3, 4, 2, 2},
								{3, 2, 3, 4, 1, 2},
								{3, 2, 1, 3, 4, 1},
								{3, 2, 3, 1, 4, 1}};

	row = 1;
	col = 1;
	while (row < 5)
	{
		ft_check_row(playground[row], hint3);
		ft_check_rev_row(playground[row], hint3);
		row ++;
	}
	while (col < 5)
	{
		ft_check_col(col, playground, hint3);
		ft_check_rev_col(col, playground, hint3);
		col ++;
	}
}
