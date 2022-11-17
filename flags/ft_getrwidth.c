/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getrwidth.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:46:58 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/29 17:08:18 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_getrwidth(char *flags, char c)
{
	int		i;
	char	*str;
	int		temp;
	char	*mem;

	if (flags == NULL || c == 'c')
		return (-1);
	str = ft_strchr (flags, '.');
	if (str == NULL)
		return (-1);
	i = -1;
	temp = -1;
	while (++i < (int) ft_strlen (str) + 1)
		if (ft_isdigit (str[i]) && temp == -1)
			temp = i;
	else if (!ft_isdigit (str[i]) && temp > -1)
	{
		mem = ft_memdup (str, temp, i);
		i = ft_atoi (mem);
		free (mem);
		return (i);
	}
	return (0);
}
