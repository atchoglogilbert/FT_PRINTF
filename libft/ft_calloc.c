/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:21:31 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/21 20:40:22 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	s = malloc (count * size);
	if (s != NULL)
		ft_bzero (s, count * size);
	return (s);
}
