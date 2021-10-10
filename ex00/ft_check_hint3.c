/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_hint3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:33:30 by coder             #+#    #+#             */
/*   Updated: 2021/10/10 20:44:25 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_add_row(int x, char *playground, char *hint3);
void	ft_add_col(int x, int y, char playground[6][6], char hint3[6][6]);
void	ft_rev_add_col(int x, int y, char playground[6][6], char hint3[6][6]);

void	ft_check_row(char *playground, char hint3[6][6])
{
	int	row;
	int	col;
	int	flag;

	row = 0;
	while (row < 6)
	{
		col = 0;
		flag = 0;
		while (col < 6)
		{
			if (playground[0] == 3 && playground[5] == hint3[row][5])
				if (playground[col] == hint3[row][col])
					flag ++;
			col ++;
		}
		if (flag > 2)
			ft_add_row(0, playground, hint3[row]);
		row ++;
	}
}

void	ft_check_rev_row(char *playground, char hint3[6][6])
{
	int	row;
	int	col;
	int	flag;
	int	count;

	row = 0;
	while (row < 6)
	{
		col = 5;
		flag = 0;
		count = 0;
		while (col >= 0)
		{
			if (playground[5] == 3 && playground[0] == hint3[row][0])
				if (playground[col] == hint3[row][count])
					flag ++;
			count ++;
			col --;
		}
		if (flag > 2)
			ft_add_row(5, playground, hint3[row]);
		row ++;
	}
}

void	ft_check_col(int x, char playground[6][6], char hint3[6][6])
{
	int	row;
	int	col;
	int	flag;

	row = 0;
	while (row < 6)
	{
		col = 0;
		flag = 0;
		while (col < 6)
		{
			if (playground[0][x] == 3 && playground[5][x] == hint3[row][5])
				if (playground[col][x] == hint3[row][col])
					flag ++;
			col ++;
		}
		if (flag > 2)
			ft_add_col(x, row, playground, hint3);
		row ++;
	}
}

void	ft_check_rev_col(int x, char playground[6][6], char hint3[6][6])
{
	int	row;
	int	col;
	int	flag;
	int	count;

	row = 0;
	while (row < 6)
	{
		count = 5;
		flag = 0;
		col = 0;
		while (count >= 0)
		{
			if (playground[5][x] == 3 && playground[0][x] == hint3[row][5])
				if (playground[count][x] == hint3[row][col])
					flag ++;
			col ++;
			count --;
		}
		if (flag > 2)
			ft_rev_add_col(x, row, playground, hint3);
		row ++;
	}
}
