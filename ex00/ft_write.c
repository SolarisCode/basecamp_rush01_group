/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckonstan <KvardekDu@ckondo.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 20:15:44 by ckonstan          #+#    #+#             */
/*   Updated: 2021/10/09 20:31:54 by ckonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_write_error(void)
{
	write(1, "Error\n", 6);
}

void	ft_write_result(int playground[6][6])
{
	int	row;
	int	col;
	int	level;

	row = 1;
	col = 1;
	while (row <= 4)
	{
		while (col <= 4)
		{
			level = playground[row][col] + '0';
			write(1, &level, 1);
			if (col < 4)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}
