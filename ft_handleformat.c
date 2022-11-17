/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleformat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 04:37:18 by katchogl          #+#    #+#             */
/*   Updated: 2022/11/03 14:38:31 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_handleformatplpl(t_args *args, va_list ptr, char format)
{
	int	nbr;

	if (format == 'c')
		ft_putchar (args, va_arg (ptr, int));
	else if (format == 's')
		ft_putstr (args, va_arg (ptr, char *));
	else if (format == 'd' || format == 'i')
	{
		nbr = va_arg (ptr, int);
		if (nbr < 0)
			args->sign = -1;
		else
			args->sign = 1;
		if (nbr == 0)
			args->iszero = 1;
		ft_putnbr (args, nbr);
	}
	else if (format == '%')
		ft_putchar (args, '%');
}

static void	ft_handleformatpl(t_args *args, va_list ptr, char format)
{
	unsigned int	nbr;

	nbr = va_arg (ptr, unsigned int);
	args->sign = 1;
	if (nbr == 0)
		args->iszero = 1;
	if (format == 'u')
		ft_putnbr_unsigned (args, nbr);
	else
	{
		if (format == 'X')
			args->uppercase = 1;
		ft_putnbr_hex_unsigned (args, nbr);
	}
}

void	ft_handleformat(t_args *args, va_list ptr, char format)
{
	char	buffer[100];

	args->uppercase = 0;
	args->pos = 0;
	args->iszero = 0;
	args->buffer = buffer;
	if (format == 'p')
	{
		ft_putstr (args, "0x");
		ft_putnbr_hex_unsigned_long (args, va_arg (ptr, unsigned long));
	}
	else if (format == 'X' || format == 'x' || format == 'u')
		ft_handleformatpl (args, ptr, format);
	else
		ft_handleformatplpl (args, ptr, format);
}
