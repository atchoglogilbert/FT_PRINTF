/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodepush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:34:28 by katchogl          #+#    #+#             */
/*   Updated: 2022/11/03 12:23:11 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_nodepush(t_node **head, t_node *new)
{
	t_node	*node;
	t_node	*node_last;

	if (new == NULL)
		return ;
	node = *head;
	if (ft_nodesize (node) == 0)
		*head = new;
	else
	{
		node_last = ft_nodelast (node);
		if (node_last == NULL)
			return ;
		node_last->next = new;
	}
}
