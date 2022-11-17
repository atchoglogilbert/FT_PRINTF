/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:50:08 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/21 20:42:27 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(char *str, size_t n)
{
	size_t	len;

	len = 0;
	while (str[len] && len < n)
		len++;
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	len2;

	len = ft_strnlen (dst, dstsize);
	len2 = ft_strlen (src);
	if (dstsize == len)
		return (len + len2);
	if (len2 < dstsize - len)
		ft_memcpy (dst + len, src, len2 + 1);
	else
	{
		ft_memcpy (dst + len, src, dstsize - len - 1);
		dst[dstsize - 1] = '\0';
	}
	return (len + len2);
}
