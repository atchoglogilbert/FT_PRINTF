/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 21:29:14 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/21 20:42:36 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	if (ft_strlen (src) + 1 < dstsize)
		ft_memcpy (dst, src, ft_strlen (src) + 1);
	else if (dstsize != 0)
	{
		ft_memcpy (dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (ft_strlen (src));
}
