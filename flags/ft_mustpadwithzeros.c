/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mustpadwithzeros.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:58:28 by katchogl          #+#    #+#             */
/*   Updated: 2022/11/01 01:34:45 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_mustpadwithzeros(char *flags, char c)
{
	if ((c != '%' || !ft_hasleftjustify (flags))
		&& ft_haspadwithzeros (flags)
		&& (!ft_isnbrformat (c)
			|| (ft_isnbrformat (c) && !ft_hasprecision (flags))))
		return (1);
	else
		return (0);
}
