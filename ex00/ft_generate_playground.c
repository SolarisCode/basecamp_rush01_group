/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate_playground.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 20:34:48 by ckonstan          #+#    #+#             */
/*   Updated: 2021/10/10 19:29:54 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	set_row_and_col(int i, int *row, int *col)
{
	if (i >= 0 && i < 8)
	{
		*row = 0;
		*col = (i + 2) / 2;
	}
	if (i >= 8 && i < 16)
	{
		*row = 5;
		*col = (i - 6) / 2;
	}
	if (i >= 16 && i < 24)
	{
		*row = (i - 14) / 2;
		*col = 0;
	}
	if (i >= 24 && i < 32)
	{
		*row = (i - 22) / 2;
		*col = 5;
	}
}

void	clear_playground(char playground[6][6])
{
	int	row;
	int	col;

	row = 0;
	while (row < 6)
	{
		col = 0;
		while (col < 6)
		{
			playground[row][col] = 0;
			col++;
		}
		row++;
	}
}

void	ft_generate_playground(char *hints, char playground[6][6])
{
	int		i;
	int		row;
	int		col;
	char	level;

	clear_playground(playground);
	i = 0;
	while (hints[i] > 0)
	{
		level = hints[i];
		if (level != ' ')
		{
			set_row_and_col(i, &row, &col);
			playground[row][col] = level - '0';
		}
		i++;
	}
	return ;
}
