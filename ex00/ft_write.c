/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 20:15:44 by ckonstan          #+#    #+#             */
/*   Updated: 2021/10/10 20:49:48 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_write_error(void)
{
	write(1, "Error\n", 6);
}

void	ft_write_result(char playground[6][6])
{
	int	row;
	int	col;
	int	level;

	row = 1;
	while (row < 5)
	{
		col = 1;
		while (col < 5)
		{
			level = playground[row][col] + '0';
			write(1, &level, 1);
			if (col < 4)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}
