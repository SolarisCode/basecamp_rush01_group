/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_hint3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:34:53 by coder             #+#    #+#             */
/*   Updated: 2021/10/10 19:29:50 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_add_row(int x, char *playground, char *hint3)
{
	int	col;

	if (x == 0)
	{
		col = x;
		while (col < 6)
		{
			playground[col] = hint3[col];
			col ++;
		}
	}
	else if (x == 5)
	{
		col = x;
		while (col >= 0)
		{
			playground[col] = hint3[col];
			col --;
		}
	}
}

void	ft_add_col(int x, int y, char playground[6][6], char hint3[6][6])
{
	int	count;

	count = 0;
	while (count < 6)
	{
		playground[count][x] = hint3[y][count];
		count ++;
	}
}

void	ft_rev_add_col(int x, int y, char playground[6][6], char hint3[6][6])
{
	int	count;

	count = 5;
	while (count >= 0)
	{
		playground[count][x] = hint3[y][count];
		count --;
	}
}
