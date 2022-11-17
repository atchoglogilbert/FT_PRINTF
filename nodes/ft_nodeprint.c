/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodeprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:09:25 by katchogl          #+#    #+#             */
/*   Updated: 2022/11/03 00:14:36 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_nodeprint(t_args *args, t_node *node)
{
	if (args == NULL || node == NULL)
		return ;
	while (node)
	{
		ft_printchar (args, node->content);
		node = node->next;
	}
}
