/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:01:04 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/21 20:42:19 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	s = (char *) malloc (ft_strlen (s1) + ft_strlen (s2) + 1);
	if (!s)
		return (NULL);
	i = -1;
	while (++i < ft_strlen (s1))
		s[i] = s1[i];
	j = i - 1;
	i = -1;
	while (++i < ft_strlen (s2))
		s[++j] = s2[i];
	s[++j] = '\0';
	return (s);
}
