/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_haspadwithzeros.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:02:48 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/31 11:32:46 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_haspadwithzeros(char *flags)
{
	int	i;

	if (flags == NULL)
		return (0);
	i = -1;
	while (flags[++i] && flags[i] != '.')
	{
		if (ft_isdigit (flags[i]))
		{
			if (flags[i] == '0')
				return (1);
			else
				return (0);
		}
	}
	return (0);
}
