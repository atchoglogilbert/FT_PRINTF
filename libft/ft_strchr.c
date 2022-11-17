/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:26:56 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/23 23:49:13 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	if (c == 0)
		return ((char *) s + ft_strlen (s));
	while (s[++i])
		if (s[i] == (const char) c)
			return ((char *) s + i);
	return (NULL);
}
