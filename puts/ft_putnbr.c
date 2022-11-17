/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:57:32 by katchogl          #+#    #+#             */
/*   Updated: 2022/11/02 14:47:34 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(t_args *args, int nbr)
{
	if (nbr < 0)
	{
		ft_putchar (args, '-');
		if (nbr == -2147483648)
		{
			ft_putchar (args, '2');
			nbr = 147483648;
		}
		else
			nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr (args, nbr / 10);
		nbr = nbr % 10;
	}
	ft_putchar (args, nbr + '0');
}
