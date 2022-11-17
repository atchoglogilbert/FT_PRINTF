/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hasleftjustify.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:04:33 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/31 11:32:42 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_hasleftjustify(char *flags)
{
	char	*ptr;

	if (flags == NULL)
		return (0);
	ptr = ft_strchr (flags, '-');
	if (ptr == NULL)
		return (0);
	else
		return (1);
}
