/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckonstan <KvardekDu@ckondo.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 20:27:06 by ckonstan          #+#    #+#             */
/*   Updated: 2021/10/09 20:33:28 by ckonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_solve(int playground[6][6])
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
			level = 0;
			playground[row][col] = level;
		}
	}
	return (-4);
}
/* This is just a dummy function.
   I need it to compile and check the main structure. */
/* return: 0 = success, any other value = error */