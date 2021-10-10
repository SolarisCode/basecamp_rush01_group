/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hint3_table.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:43:48 by coder             #+#    #+#             */
/*   Updated: 2021/10/10 16:53:17 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_hint3_table(char *val, char arr[6][6])
{
	int	row;
	int	col;
	int	count;

	row = 0;
	count = 0;
	while (row < 6)
	{
		col = 0;
		while (col < 6)
		{
			arr[row][col] = val[count];
			count ++;
			col ++;
		}
		row ++;
	}
}

void	ft_hint3_add_row(int x, char *playground, char *hint3)
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

void	ft_hint3_row(char *playground, char hint3[6][6])
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
			if (playground[col] == hint3[row][col])
				flag ++;
			col ++;
		}
		if (flag > 2)
			ft_hint3_add_row(0, playground, hint3[row]);
		row ++;
	}
}

void	ft_hint3_rev_row(char *playground, char hint3[6][6])
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
			if (playground[col] == hint3[row][count])
				flag ++;
			count ++;
			col --;
		}
		if (flag > 2)
			ft_hint3_add_row(5, playground, hint3[row]);
		row ++;
	}
}

void	ft_hint3_add_col(int y, int x, playground[6][6], hint3[6][6])
{
	int	row;
	int	col;
	
	col = x;
	if (y == 0)
	{
		row = y;
		while (row < 6)
		{
			playground[row][col] = hint3[col][row];
			row ++;
		}
	}
	else if (y == 5)
	{
		
	}
}

void	ft_col_check(int x, char playground[6][6], hint3[6][6])
{
	int row;
	int col;
	int	flag;
	
	row = 0;
	while (row < 6)
	{
		col = 0;
		flag = 0;
		while (col < 6)
		{
			if (playground[col][x] == hint3[row][col])
				flag ++;
			col ++;
		}
		if (flag > 2)
			
		row ++;
	}
}

void	ft_hint3_test_col(char playground[6][6], hint3[6][6])
{
	int	col;

	col = 1;
	while (col < 5)
	{
		ft_col_check(int x, char playground[6][6], hint3[6][6])
	}
}

void	ft_hint3_rev_col(char playground[6][6], hint3[6][6])
{
	int	row;
	int	col;
	int	flag;
	int	count;

	col = 1;
	while (col < 5)
	{
		row = 5;
		flag = 0;
		count = 0;
		while (row >= 0)
		{
			if (playground[row][col] == hint3[col][row])
				flag ++;
			row --;
		}
		if (flag > 2)
			ft_hint3_add_col(0, col, playground, hint3);
		col ++;
	}
}

void	ft_hint3_comp(char playground[6][6])
{
	char	hint3[6][6];
	int	row;
	int	col;
	
	row = 1;
	col = 1;
	ft_hint3_table("313241312432313422323412321341323141", hint3);
	while (row < 5)
	{
		ft_hint3_row(playground[row], hint3);
		ft_hint3_rev_row(playground[row], hint3);
		row ++;
	}
	while (col < 5)
	{
		ft_col_check(col, playground, hint3);
		col ++;
	}
}

int	main(void)
{
	char	playground[6][6];
	ft_hint3_comp(playground);
	return (0);
}