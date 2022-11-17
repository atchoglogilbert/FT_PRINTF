/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:01:43 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/21 20:43:13 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		lenf;

	if (!s)
		return (NULL);
	if (start >= ft_strlen (s))
		return (ft_strdup (""));
	lenf = len;
	if (len >= ft_strlen (s) - start)
		lenf = ft_strlen (s) - start;
	substr = malloc (lenf + 1);
	ft_memcpy (substr, s + start, lenf + 1);
	if (substr[lenf] != '\0')
		substr[lenf] = '\0';
	return (substr);
}
