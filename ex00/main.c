/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckonstan <KvardekDu@ckondo.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:41:46 by ckonstan          #+#    #+#             */
/*   Updated: 2021/10/09 20:11:17 by ckonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int		ft_check_input(int argc, char *argv[]);
void	ft_generate_playground(char *hints, int playground[6][6]);
int		ft_solve(int playground[6][6]);
void	ft_write_result(int playground[6][6]);

int	main(int argc, char *argv[])
{
	int	error_number;
	int	playground[6][6];

	error_number = ft_check_input(argc, argv);
	if (error_number != 0)
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	ft_generate_playground(argv[1], playground);
	error_number = ft_solve(playground);
	if (error_number != 0)
	{
		write(1, "Error\n", 6);
		return (-2);
	}
	ft_write_result(playground);
	return (0);
}
