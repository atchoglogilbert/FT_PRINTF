/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_haslwidth.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:03:38 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/29 15:41:44 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_haslwidth(char *flags)
{
	char	*str;
	int		i;

	if (flags == NULL)
		return (0);
	if (ft_haspadwithzeros (flags))
		str = ft_strchr (flags, '0') + 1;
	else
		str = flags;
	i = -1;
	while (str[++i] && str[i] != '.')
		if (ft_isdigit (str[i]))
			return (1);
	return (0);
}
