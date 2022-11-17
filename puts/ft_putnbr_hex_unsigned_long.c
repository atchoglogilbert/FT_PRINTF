/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_unsigned_long.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:48:27 by katchogl          #+#    #+#             */
/*   Updated: 2022/11/17 04:09:27 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hex_unsigned_long(t_args *args, unsigned long nbr)
{
	args->buffer[args->pos] = (nbr % 16);
	if (nbr % 16 < 10)
		args->buffer[args->pos] += '0';
	else
	{
		if (args->uppercase)
			args->buffer[args->pos] += 55;
		else
			args->buffer[args->pos] += 87;
	}
	args->pos++;
	if (nbr / 16 > 0)
		ft_putnbr_hex_unsigned_long (args, nbr / 16);
	else
	{
		args->buffer[args->pos] = '\0';
		ft_memflip (args->buffer);
		ft_putstr (args, args->buffer);
	}
}
