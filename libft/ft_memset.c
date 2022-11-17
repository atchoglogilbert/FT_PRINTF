/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:04:10 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/21 20:41:40 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*chr;
	size_t	i;

	if (!b)
		return (b);
	chr = (char *) b;
	i = -1;
	while (++i < len)
		chr[i] = c;
	return (b);
}
