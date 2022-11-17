/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleflags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:52:08 by katchogl          #+#    #+#             */
/*   Updated: 2022/11/03 14:37:36 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handlenbrrwidth(t_args *args, char c)
{
	int	i;
	int	lim;

	i = -1;
	lim = ft_getrwidth (args->flags, c);
	lim -= ft_nodesize (args->m_buffer);
	if (args->sign < 0)
	{
		ft_noderift (&(args->m_buffer));
		lim++;
	}
	while (++i < lim)
		ft_nodeshift (&(args->m_buffer), ft_nodenew ('0'));
	if (args->sign < 0)
		ft_nodeshift (&(args->m_buffer), ft_nodenew ('-'));
}

void	ft_handlenbrflags(t_args *args, char c)
{
	if (ft_hasrwidth (args->flags, c))
	{
		if (ft_getrwidth (args->flags, c) == 0 && args->iszero == 1)
			ft_nodepop (&(args->m_buffer));
		else
			ft_handlenbrrwidth (args, c);
	}
	if (ft_isintdecnbrformat (c) && args->sign > 0)
	{
		if (ft_hasaddsign (args->flags))
			ft_nodeshift (&(args->m_buffer), ft_nodenew ('+'));
		else if (ft_hasaddspace (args->flags))
			ft_nodeshift (&(args->m_buffer), ft_nodenew (' '));
	}
	else if (ft_ishexnbrformat (c) && ft_hashexprecision (args->flags)
		&& !args->iszero)
	{
		ft_nodeshift (&(args->m_buffer), ft_nodenew (c));
		ft_nodeshift (&(args->m_buffer), ft_nodenew ('0'));
	}
}

void	ft_handlestrflags(t_args *args)
{
	int	rwidth;

	if (ft_hasrwidth (args->flags, 's'))
	{
		rwidth = ft_getrwidth (args->flags, 's');
		while (ft_nodesize (args->m_buffer) > rwidth)
			ft_nodepop (&(args->m_buffer));
	}
}

void	ft_handlelwidth(t_args *args, char c)
{
	char	chr;
	int		lim;

	chr = ' ';
	lim = ft_getlwidth (args->flags);
	if (ft_mustpadwithzeros (args->flags, c))
	{
		chr = '0';
		if (ft_isintdecnbrformat (c) && (args->sign < 0
				|| ft_hasaddsign (args->flags)))
		{
			ft_noderift (&(args->m_buffer));
			lim--;
		}
	}
	while (ft_nodesize (args->m_buffer) < lim)
		if (!ft_hasleftjustify (args->flags))
			ft_nodeshift (&(args->m_buffer), ft_nodenew (chr));
	else
		ft_nodepush (&(args->m_buffer), ft_nodenew (chr));
	if (ft_mustpadwithzeros (args->flags, c) && ft_isintdecnbrformat (c)
		&& (args->sign < 0 || ft_hasaddsign (args->flags)))
		ft_nodeshift (&(args->m_buffer), ft_nodenew ('-'));
}

void	ft_handleflags(t_args *args, char c)
{
	if (args == NULL || args->flags == NULL)
		return ;
	if (ft_isnbrformat (c))
		ft_handlenbrflags (args, c);
	else if (c == 's')
		ft_handlestrflags (args);
	if (ft_haslwidth (args->flags))
		ft_handlelwidth (args, c);
	ft_nodeprint (args, args->m_buffer);
}
