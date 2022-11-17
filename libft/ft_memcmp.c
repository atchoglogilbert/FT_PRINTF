/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:14:17 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/21 20:41:28 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{	
	size_t			i;
	unsigned char	*chr1;
	unsigned char	*chr2;

	if (!s1 || !s2)
		return (0);
	i = -1;
	chr1 = (unsigned char *) s1;
	chr2 = (unsigned char *) s2;
	while (++i < n)
		if (chr1[i] != chr2[i])
			return (chr1[i] - chr2[i]);
	return (0);
}
