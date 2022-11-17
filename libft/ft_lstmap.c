/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:07:20 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/21 20:41:11 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_loop(t_list *lstnext, t_list *nlst, void *(*f)(void *)
, void (*del)(void *))
{
	if (!lstnext)
		return ;
	nlst->next = ft_lstnew (f(lstnext->content));
	ft_loop (lstnext->next, nlst->next, f, del);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;

	if (!lst || !f)
		return (NULL);
	nlst = ft_lstnew (f(lst->content));
	ft_loop (lst->next, nlst, f, del);
	return (nlst);
}
