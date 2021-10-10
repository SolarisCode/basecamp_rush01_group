/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:41:46 by ckonstan          #+#    #+#             */
/*   Updated: 2021/10/10 18:50:11 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_input(int argc, char *argv[]);
void	ft_generate_playground(char *hints, int playground[6][6]);
int		ft_solve(int playground[6][6]);
void	ft_write_error(void);
void	ft_write_result(int playground[6][6]);

int	main(int argc, char *argv[])
{
	int	error_number;
	int	playground[6][6];

	error_number = ft_check_input(argc, argv);
	if (error_number != 0)
	{
		ft_write_error();
		return (-1);
	}
	ft_generate_playground(argv[1], playground);
	error_number = ft_solve(playground);
	if (error_number != 0)
	{
		ft_write_error();
		return (-2);
	}
	ft_write_result(playground);
	return (0);
}
