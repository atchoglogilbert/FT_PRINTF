/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 04:39:55 by katchogl          #+#    #+#             */
/*   Updated: 2022/11/03 14:31:20 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(t_args *args, char c)
{
	if (args->flags == NULL)
		ft_printchar (args, c);
	else
		if (args->m_buffer == NULL)
			args->m_buffer = ft_nodenew (c);
	else
		ft_nodepush (&(args->m_buffer), ft_nodenew (c));
}
