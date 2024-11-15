/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabr <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 15:31:47 by msabr             #+#    #+#             */
/*   Updated: 2024/08/04 18:52:51 by msabr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int		n;

	n = 2;
	if (nb > 1)
	{
		while (n < (nb / 2))
		{
			if ((nb % n) == 0)
				return (0);
			n++;
		}
		return (1);
	}
	return (0);
}