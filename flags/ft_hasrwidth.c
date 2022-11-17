/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hasrwidth.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:03:38 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/31 11:32:53 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_hasrwidth(char *flags, char c)
{
	char	*str;

	if (flags == NULL || c == 'c')
		return (0);
	str = ft_strchr (flags, '.');
	if (str == NULL)
		return (0);
	return (1);
}
