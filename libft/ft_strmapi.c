/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:20:49 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/21 20:42:53 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*sf;
	size_t	i;

	if (!s || !f)
		return (NULL);
	sf = (char *) malloc ((ft_strlen (s) + 1) * sizeof (char));
	if (!sf)
		return (NULL);
	i = -1;
	while (++i < ft_strlen (s))
		sf[i] = f(i, s[i]);
	sf[i] = '\0';
	return (sf);
}
