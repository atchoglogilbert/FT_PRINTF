/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nodenew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:50:49 by katchogl          #+#    #+#             */
/*   Updated: 2022/11/03 00:17:19 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_node	*ft_nodenew(char c)
{
	t_node	*node;

	node = (t_node *) malloc (sizeof (t_node));
	if (node == NULL)
		return (NULL);
	node->content = c;
	node->next = NULL;
	return (node);
}
