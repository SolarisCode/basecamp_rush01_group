/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckonstan <KvardekDu@ckondo.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:50:29 by ckonstan          #+#    #+#             */
/*   Updated: 2021/10/09 21:49:46 by ckonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_input(int argc, char *args[])
{
	char	*parameter;
	int		i;

	if (argc != 2)
		return (-1);
	parameter = args[1];
	i = 0;
	if (parameter[i] < '1' && parameter[i] > '4')
		return (-2);
	i++;
	while (parameter[i] != 0)
	{
		if (parameter[i] == ' ')
			i++;
		if (parameter[i] < '1' && parameter[i] > '4')
			return (-2);
		i++;
	}
	if (i != 31)
		return (-3);
	return (0);
}
