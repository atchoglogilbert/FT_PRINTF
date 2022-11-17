/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argsnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 00:47:18 by katchogl          #+#    #+#             */
/*   Updated: 2022/11/03 14:32:17 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_args	*ft_argsnew(void)
{
	t_args	*args;

	args = (t_args *) malloc (sizeof (t_args));
	if (args == NULL)
		return (NULL);
	args->count = 0;
	args->sign = 0;
	args->flags = NULL;
	args->m_buffer = NULL;
	args->buffer = NULL;
	args->iszero = 0;
	return (args);
}
