/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodesize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:02:05 by katchogl          #+#    #+#             */
/*   Updated: 2022/11/03 14:28:35 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nodesize(t_node *node)
{
	int	count;

	count = 0;
	while (node != NULL)
	{
		count++;
		node = node->next;
	}
	return (count);
}
