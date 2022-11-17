/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:45:52 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/24 00:32:22 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_posst(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && ft_strchr (set, s1[i]))
		i++;
	return (i);
}

static size_t	ft_posstnd(char const *s1, char const *set)
{
	int	i;

	i = (int) ft_strlen (s1) - 1;
	while (i >= 0 && ft_strchr (set, s1[i]))
		i--;
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count;
	char	*s2;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	if (ft_strlen (s1) == 0)
		return (ft_strdup (""));
	if (ft_strlen (set) == 0)
		return (ft_strdup (s1));
	count = ft_posst (s1, set) + ft_strlen (s1) - ft_posstnd (s1, set);
	if (count == 0)
		return (ft_strdup (s1));
	len = ft_strlen (s1) - count;
	if (len >= ft_strlen (s1))
		return (ft_strdup (""));
	s2 = (char *) malloc (len + 1);
	s2 = ft_memcpy (s2, s1 + ft_posst (s1, set), len);
	s2[len] = '\0';
	return (s2);
}
