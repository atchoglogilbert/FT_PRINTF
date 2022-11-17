/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:39:52 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/21 20:41:37 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_overlaps(char *chr, char *chr2, size_t len)
{
	if (chr2 < chr)
	{
		if (chr2 + len < chr)
			return (0);
		else
			return (-1);
	}
	else if (chr2 > chr)
	{
		if (chr2 - len > chr)
			return (0);
		else
			return (1);
	}
	return (-2);
}

static void	ft_overlapmemcpy(char *chr, char *chr2, size_t len, int overlaps)
{
	size_t	i;

	if (overlaps == 1)
	{
		i = -1;
		while (++i < len)
			chr[i] = chr2[i];
	}
	else if (overlaps == -1)
	{
		i = len;
		while (i > 0)
		{
			chr[i - 1] = chr2[i - 1];
			i--;
		}
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*chr;
	char	*chr2;
	int		overlaps;

	if (!dst || !src || src == dst)
		return (dst);
	chr = (char *) dst;
	chr2 = (char *) src;
	overlaps = ft_overlaps (chr, chr2, len);
	if (!overlaps)
		ft_memcpy (chr, chr2, len);
	else
		ft_overlapmemcpy (chr, chr2, len, overlaps);
	return (dst);
}
