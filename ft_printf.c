/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 04:32:56 by katchogl          #+#    #+#             */
/*   Updated: 2022/11/03 14:38:51 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ptr;
	t_args	*args;

	args = ft_argsnew ();
	i = -1;
	va_start (ptr, str);
	while (str[++i])
	{
		if (str[i] != '%')
			ft_printchar (args, str[i]);
		else
		{
			ft_setflags (args, str, &i);
			ft_handleformat (args, ptr, str[i + 1]);
			ft_handleflags (args, str[i + 1]);
			ft_clear (args);
			++i;
		}
	}
	return (ft_free (args, ptr));
}
