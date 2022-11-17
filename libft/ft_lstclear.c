/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:35:42 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/21 20:40:56 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*temp;

	if (!lst || !del)
		return ;
	curr = *lst;
	temp = curr->next;
	ft_lstdelone (curr, del);
	while (temp)
	{
		curr = temp;
		temp = curr->next;
		ft_lstdelone (curr, del);
	}
	*lst = NULL;
}
