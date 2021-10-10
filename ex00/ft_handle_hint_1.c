/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_hint_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 00:15:31 by ckonstan          #+#    #+#             */
/*   Updated: 2021/10/10 20:43:26 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	set_col_for_hint_1(int row, int col, char playground[6][6])
{
	char	hint;

	hint = playground[row][col];
	if (hint == 1 && row == 0)
	{
		playground[1][col] = 4;
	}
	if (hint == 1 && row == 5)
	{
		playground[4][col] = 4;
	}
}

void	set_row_for_hint_1(int row, int col, char playground[6][6])
{
	char	hint;

	hint = playground[row][col];
	if (hint == 1 && col == 0)
	{
		playground[row][1] = 4;
	}
	if (hint == 1 && col == 5)
	{
		playground[row][4] = 4;
	}
}

void	handle_hint_1(char playground[6][6])
{
	int	row;
	int	col;

	row = 1;
	while (row < 5)
	{
		set_row_for_hint_1(row, 0, playground);
		set_row_for_hint_1(row, 5, playground);
		row++;
	}
	col = 1;
	while (col < 5)
	{
		set_col_for_hint_1(0, col, playground);
		set_col_for_hint_1(5, col, playground);
		col++;
	}
}
