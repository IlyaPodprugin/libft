/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 20:00:30 by rtinisha          #+#    #+#             */
/*   Updated: 2021/10/27 23:54:33 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef unsigned long	t_size_t;

int			ft_isalpha(int num);
int			ft_isdigit(int arg);
int			ft_isalnum(int arg);
int			ft_isascii(int arg);
int			ft_isprint(int arg);
t_size_t	ft_strlen(char *str);
void		*ft_memset(void *destination, int c, t_size_t n);
void		ft_bzero(void *s, t_size_t n);
void		*ft_memcpy(void *destination, const void *source, t_size_t n);
void		*ft_memmove(void *destination, const void *source, t_size_t n);
t_size_t	ft_strlcpy(char *dst, const char *src, t_size_t dstsize);
t_size_t	ft_strlcat(char *dst, const char *src, t_size_t dstsize);
int			ft_toupper(int str);
int			ft_tolower(int str);
char		*ft_strchr(const char *str, int ch);
char		*ft_strrchr(const char *str, int ch);

#endif