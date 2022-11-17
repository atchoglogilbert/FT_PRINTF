/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:50:02 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/21 20:40:45 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	if (n < 0)
		return (1 + ft_numlen (-n));
	if (n / 10 != 0)
		return (1 + ft_numlen (n / 10));
	else
		return (1);
}

static void	ft_init(char *str, int n, int len, int end)
{
	int		i;

	i = len;
	while (i > end)
	{
		str[--i] = (n % 10) + '0';
		n = n / 10;
	}
	str[len] = '\0';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		end;

	if (n == -2147483648)
		return (ft_strdup ("-2147483648"));
	len = ft_numlen (n);
	str = malloc(len + 1 * sizeof (char));
	if (!str)
		return (NULL);
	end = 0;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		end = 1;
	}
	ft_init (str, n, len, end);
	return (str);
}
