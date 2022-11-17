/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodepop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:44:11 by katchogl          #+#    #+#             */
/*   Updated: 2022/11/03 14:30:46 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_nodepop(t_node **head)
{
	t_node	*node;
	int		size;

	node = *head;
	if (node == NULL)
		return ;
	size = ft_nodesize (node);
	if (size == 1)
	{
		free (node);
		*head = NULL;
	}
	else if (size == 2)
	{
		free (node->next);
		node->next = NULL;
	}
	else if (size > 2)
	{
		while (node->next->next != NULL)
			node = node->next;
		free (node->next);
		node->next = NULL;
	}
}
