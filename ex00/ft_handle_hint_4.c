/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_hint_4.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 00:15:31 by ckonstan          #+#    #+#             */
/*   Updated: 2021/10/10 20:42:55 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	set_col_for_hint_4(int row, int col, char playground[6][6])
{
	char	hint;

	hint = playground[row][col];
	if (hint == 4 && row == 0)
	{
		playground[1][col] = 1;
		playground[2][col] = 2;
		playground[3][col] = 3;
		playground[4][col] = 4;
	}
	if (hint == 4 && row == 5)
	{
		playground[1][col] = 4;
		playground[2][col] = 3;
		playground[3][col] = 2;
		playground[4][col] = 1;
	}
}

void	set_row_for_hint_4(int row, int col, char playground[6][6])
{
	char	hint;

	hint = playground[row][col];
	if (hint == 4 && col == 0)
	{
		playground[row][1] = 1;
		playground[row][2] = 2;
		playground[row][3] = 3;
		playground[row][4] = 4;
	}
	if (hint == 4 && col == 5)
	{
		playground[row][1] = 4;
		playground[row][2] = 3;
		playground[row][3] = 2;
		playground[row][4] = 1;
	}
}

void	handle_hint_4(char playground[6][6])
{
	int	row;
	int	col;

	row = 1;
	while (row < 5)
	{
		set_row_for_hint_4(row, 0, playground);
		set_row_for_hint_4(row, 5, playground);
		row++;
	}
	col = 1;
	while (col < 5)
	{
		set_col_for_hint_4(0, col, playground);
		set_col_for_hint_4(5, col, playground);
		col++;
	}
}
