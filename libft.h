/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 20:00:30 by rtinisha          #+#    #+#             */
/*   Updated: 2021/10/25 22:18:27 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <ctype.h>
# include <string.h>

typedef unsigned long long	t_size_t;

int			ft_isalpha(int num);
int			ft_isdigit(int arg);
int			ft_isalnum(int arg);
int			ft_isascii(int arg);
int			ft_isprint(int arg);
t_size_t	ft_strlen(char *str);
void		*ft_memset(void *destination, int c, size_t n);
void		ft_bzero(void *s, t_size_t n);
void		*ft_memcpy(void *destination, const void *source, t_size_t n);

#endif