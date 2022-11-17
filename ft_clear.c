/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:00:26 by katchogl          #+#    #+#             */
/*   Updated: 2022/11/03 00:59:02 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_clear(t_args *args)
{
	if (args == NULL)
		return ;
	if (args->flags != NULL)
	{
		free (args->flags);
		args->flags = NULL;
	}
	if (args->m_buffer != NULL)
	{
		ft_nodeclear (args->m_buffer);
		args->m_buffer = NULL;
	}
}
