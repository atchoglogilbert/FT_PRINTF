/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:11:14 by katchogl          #+#    #+#             */
/*   Updated: 2022/10/21 20:42:06 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_memdup(char const *s, size_t a, size_t b)
{
	char	*ptr;
	int		i;

	if (b - a <= 0)
		return (NULL);
	ptr = (char *) malloc ((b - a + 1) * sizeof (char));
	i = -1;
	while (a < b)
	{
		ptr[++i] = s[a];
		a++;
	}
	ptr[++i] = '\0';
	return (ptr);
}

static int	ft_count(char const *str, int c)
{
	int	count;
	int	i;
	int	status;

	status = 0;
	i = -1;
	count = 0;
	while (str[++i])
	{
		if (str[i] != c && !status)
		{
			status = 1;
			count++;
		}
		else if (str[i] == c)
			status = 0;
	}
	return (count);
}

static void	ft_init(size_t *i, int *temp, size_t *pos)
{
	*i = -1;
	*pos = 0;
	*temp = -1;
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	int		temp;
	size_t	pos;

	if (!s)
		return (0);
	arr = (char **) malloc ((ft_count (s, c) + 1) * sizeof (char *));
	if (!arr)
		return (0);
	ft_init (&i, &temp, &pos);
	while (++i <= ft_strlen (s))
	{
		if (s[i] != c && temp < 0)
			temp = i;
		else if ((s[i] == c || !s[i]) && temp >= 0)
		{
			arr[pos++] = ft_memdup (s, temp, i);
			temp = -1;
		}
	}
	arr[pos] = 0;
	return (arr);
}
