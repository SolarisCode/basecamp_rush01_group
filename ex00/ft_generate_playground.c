/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate_playground.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckonstan <KvardekDu@ckondo.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 20:34:48 by ckonstan          #+#    #+#             */
/*   Updated: 2021/10/09 20:55:18 by ckonstan         ###   ########.fr       */
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
		*row = (i - 6) / 2;
		*col = 0;
	}
	if (i >= 16 && i < 24)
	{
		*row = 5;
		*col = (i - 14) / 2;
	}
	if (i >= 24 && i < 32)
	{
		*row = (i - 22) / 2;
		*col = 5;
	}
}

void	ft_generate_playground(char *hints, int playground[6][6])
{
	int		i;
	int		row;
	int		col;
	char	level;

	i = 0;
	while (*(hints + i) > 0)
	{
		level = hints[i];
		if (level != ' ')
		{
			set_row_and_col(i, &row, &col);
			playground[row][col] = level;
			i++;
		}
	}
	return ;
}
