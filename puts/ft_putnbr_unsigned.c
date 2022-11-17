/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:33:34 by katchogl          #+#    #+#             */
/*   Updated: 2022/11/02 14:48:09 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(t_args *args, unsigned int nbr)
{
	if (nbr > 9)
	{
		ft_putnbr_unsigned (args, nbr / 10);
		nbr = nbr % 10;
	}
	ft_putchar (args, nbr + '0');
}
