/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:33:04 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/21 20:43:01 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strcmp(char *subhaystack, char *needle)
{
	int	i;

	i = -1;
	while (needle[++i])
		if (subhaystack[i] != needle[i])
			return (-1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = -1;
	if (ft_strlen ((char *) needle) == 0)
		return ((char *) haystack);
	while (++i < len && haystack[i])
		if (ft_strcmp ((char *) &haystack[i], (char *) needle) == 0)
			if (i + ft_strlen (needle) <= len)
				return ((char *) &haystack[i]);
	return (NULL);
}
