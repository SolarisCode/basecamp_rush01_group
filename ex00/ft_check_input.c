/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:50:29 by ckonstan          #+#    #+#             */
/*   Updated: 2021/10/10 18:52:26 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_input(int argc, char *args[])
{
	int		i;

	if (argc != 2)
		return (-1);
	i = 0;
	if (args[1][i] < '1' || args[1][i] > '4')
		return (-2);
	i++;
	while (args[1][i] != 0 || i > 31) // it could go to Infinite loop and 
	{									// it could be fooled by double digit number like 25.
		if (args[1][i] == ' ')
			i++;
		if (args[1][i] < '1' || args[1][i] > '4')
			return (-2);
		i++;
	}
	if (i != 31)
		return (-3);
	return (0);
}
