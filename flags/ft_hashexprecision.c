/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashexprecision.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:05:24 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/31 11:32:39 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_hashexprecision(char *flags)
{
	if (flags == NULL)
		return (0);
	if (ft_strchr (flags, '#') != NULL)
		return (1);
	return (0);
}
