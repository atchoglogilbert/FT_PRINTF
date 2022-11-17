/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getlwidth.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:29:19 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/31 11:32:15 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_getlwidth(char *flags)
{
	int		i;
	char	*str;
	int		temp;
	char	*mem;

	if (flags == NULL)
		return (-1);
	str = ft_strchr (flags, '0') + 1;
	if (!ft_haspadwithzeros (flags))
		str = flags;
	i = -1;
	temp = -1;
	while (++i < (int) ft_strlen (str) + 1)
		if (ft_isdigit (str[i]) && temp == -1)
			temp = i;
	else if (!ft_isdigit (str[i]) && temp != -1)
	{
		mem = ft_memdup (str, temp, i);
		i = ft_atoi (mem);
		free (mem);
		return (i);
	}
	return (-1);
}
