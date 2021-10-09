/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckonstan <KvardekDu@ckondo.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 20:27:06 by ckonstan          #+#    #+#             */
/*   Updated: 2021/10/10 00:44:49 by ckonstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void handle_hint_4(int playground[6][6]);
void handle_hint_1(int playground[6][6]);

int	ft_solve(int playground[6][6])
{
	handle_hint_4(playground);
	handle_hint_1(playground);
	//handle_hint_3(playground);

	return (0);
}
/* This is just a dummy function.
   I need it to compile and check the main structure. */
/* return: 0 = success, any other value = error */
