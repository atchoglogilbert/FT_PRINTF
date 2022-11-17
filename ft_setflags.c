/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setflags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:24:18 by katchogl          #+#    #+#             */
/*   Updated: 2022/11/03 13:04:35 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_setflags(t_args *args, const char *str, int *i)
{
	int		j;

	if (str == NULL)
		return ;
	j = 1;
	while (str[*i + j] == '-' || str[*i + j] == '0'
		|| str[*i + j] == '.' || str[*i + j] == '#'
		|| str[*i + j] == ' ' || str[*i + j] == '+'
		|| ft_isdigit (str[*i + j]))
		j++;
	if (j == 1)
		return ;
	args->flags = ft_memdup (str, *i + 1, *i + j);
	*i = *i + (j - 1);
}
