/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hasaddspace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:07:04 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/31 11:32:37 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_hasaddspace(char *flags)
{
	if (flags == NULL)
		return (0);
	if (ft_strchr (flags, ' ') != NULL)
		return (1);
	else
		return (0);
	return (0);
}
