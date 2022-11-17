/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:17:47 by katchogl          #+#    #+#             */
/*   Updated: 2022/11/02 14:47:09 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(t_args *args, char *s)
{
	int	wasnull;
	int	i;

	wasnull = 0;
	i = -1;
	if (s == NULL)
	{
		s = ft_strdup ("(null)");
		wasnull = 1;
	}
	while (s[++i])
		ft_putchar (args, s[i]);
	if (wasnull == 1)
	{
		free (s);
		s = NULL;
	}
}
