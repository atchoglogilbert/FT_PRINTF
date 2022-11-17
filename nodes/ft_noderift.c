/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_noderift.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:35:08 by katchogl          #+#    #+#             */
/*   Updated: 2022/11/03 14:30:23 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_noderift(t_node **head)
{
	t_node	*node;
	int		size;
	t_node	*temp;

	if (head == NULL)
		return ;
	node = *head;
	size = ft_nodesize (node);
	if (size == 0)
		return ;
	if (size > 1)
		temp = node->next;
	free (node);
	if (size == 1)
		*head = NULL;
	else
		*head = temp;
}
