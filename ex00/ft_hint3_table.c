/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hint3_table.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:43:48 by coder             #+#    #+#             */
/*   Updated: 2021/10/10 18:50:02 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_check_row(char *playground, char hint3[6][6]);
void	ft_check_rev_row(char *playground, char hint3[6][6]);
void	ft_check_col(int x, char playground[6][6], char hint3[6][6]);
void	ft_check_rev_col(int x, char playground[6][6], char hint3[6][6]);

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

void	ft_hint3_comp(char playground[6][6])
{
	int	row;
	int	col;
	char	hint3[6][6];

	row = 1;
	col = 1;
	ft_hint3_table("313241312432313422323412321341323141", hint3);
	while (row < 5)
	{
		ft_check_row(playground[row], hint3);
		ft_check_rev_row(playground[row], hint3);
		row ++;
	}
	while (col < 5)
	{
		ft_check_col(col, playground, hint3);
		ft_check_rev_col(col, playground, hint3);
		col ++;
	}
}
