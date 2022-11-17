/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katchogl <katchogl@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 04:45:32 by katchogl          #+#    #+#             */
/*   Updated: 2022/11/03 14:46:05 by katchogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include "libft/libft.h"

typedef struct s_node
{
	char			content;
	struct s_node	*next;
}	t_node;
typedef struct s_args
{
	int		count;
	t_node	*m_buffer;
	char	*flags;
	char	*buffer;
	int		pos;
	int		uppercase;
	int		sign;
	int		iszero;
}	t_args;
void	ft_putchar(t_args *args, char c);
void	ft_putstr(t_args *args, char *s);
void	ft_handleformat(t_args *args, va_list ptr, char format);
void	ft_memflip(char *s);
int		ft_printf(const char *str, ...);
void	ft_putnbr_hex_unsigned_long(t_args *args, unsigned long nbr);
void	ft_putnbr_hex_unsigned(t_args *args, unsigned int nbr);
void	ft_putnbr_hex(t_args *args, int nbr);
void	ft_putnbr_unsigned(t_args *args, unsigned int nbr);
void	ft_putnbr(t_args *args, int nbr);
void	ft_putstr(t_args *args, char *s);
int		ft_free(t_args *args, va_list ptr);
void	ft_setflags(t_args *args, const char *str, int *i);
char	*ft_memdup(char const *s, size_t a, size_t b);
void	ft_handleflags(t_args *args, char c);
void	ft_clear(t_args *args);
void	ft_nodeprint(t_args *args, t_node *node);
void	ft_printchar(t_args *args, char c);
void	ft_nodepush(t_node **head, t_node *new);
t_node	*ft_nodelast(t_node *node);
t_node	*ft_nodenew(char c);
void	ft_nodeshift(t_node **head, t_node *new);
void	ft_nodeclear(t_node *node);
void	ft_nodepop(t_node **head);
int		ft_nodesize(t_node *node);
void	ft_noderift(t_node **head);
t_args	*ft_argsnew(void);
int		ft_getlwidth(char *flags);
int		ft_getrwidth(char *flags, char c);
int		ft_hasaddsign(char *flags);
int		ft_hasaddspace(char *flags);
int		ft_hashexprecision(char *flags);
int		ft_hasleftjustify(char *flags);
int		ft_haslwidth(char *flags);
int		ft_haspadwithzeros(char *flags);
int		ft_hasprecision(char *flags);
int		ft_hasrwidth(char *flags, char c);
int		ft_isdecnbrformat(char c);
int		ft_isnbrformat(char c);
int		ft_isintdecnbrformat(char c);
int		ft_isstrformat(char c);
int		ft_ishexnbrformat(char c);
int		ft_mustpadwithzeros(char *flags, char c);
#endif
