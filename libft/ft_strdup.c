/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:23:47 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/21 20:42:13 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	n;

	n = ft_strlen ((char *) s1) + 1;
	s2 = (char *) malloc(n);
	ft_memcpy (s2, s1, n);
	return (s2);
}
