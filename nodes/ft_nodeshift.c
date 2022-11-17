/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodeshift.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:37:51 by katchogl          #+#    #+#             */
/*   Updated: 2022/11/03 09:55:16 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_nodeshift(t_node **head, t_node *new)
{
	if (head == NULL || new == NULL)
		return ;
	new->next = *head;
	*head = new;
}
