/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpontici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:12:01 by rpontici          #+#    #+#             */
/*   Updated: 2024/11/24 15:23:41 by rpontici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	r;

	i = nb;
	r = 0;
	if (nb == 0 || nb == 1)
		return (0);
	while (i > 1)
	{
		if (nb % i == 0)
		{
			r++;
			i--;
		}
		else
			i--;
	}
	if (r == 1)
		return (1);
	else
		return (0);
}
