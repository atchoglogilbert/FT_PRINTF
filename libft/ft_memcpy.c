/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:28:48 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/21 20:41:32 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*chr;
	char	*chr2;
	size_t	i;

	if (!dst || !src)
		return (dst);
	chr = (char *) dst;
	chr2 = (char *) src;
	i = -1;
	while (++i < n)
		chr[i] = chr2[i];
	return (dst);
}
