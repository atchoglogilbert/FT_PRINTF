/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodeclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:18:36 by katchogl          #+#    #+#             */
/*   Updated: 2022/11/03 00:20:06 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_nodeclear(t_node *node)
{
	t_node	*curr;
	t_node	*temp;

	if (node == NULL)
		return ;
	curr = node;
	while (curr != NULL)
	{
		temp = curr->next;
		free (curr);
		curr = temp;
	}
}
