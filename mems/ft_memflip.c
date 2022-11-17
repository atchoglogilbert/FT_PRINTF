/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memflip.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:46:19 by katchogl          #+#    #+#             */
/*   Updated: 2022/11/01 05:10:13 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_memflip(char *s)
{
	char	temp;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen (s) - 1;
	while (i < ft_strlen (s) / 2)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
