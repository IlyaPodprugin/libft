/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtinisha <rtinisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 20:00:30 by rtinisha          #+#    #+#             */
/*   Updated: 2021/11/06 16:31:52 by rtinisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

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
int			ft_strncmp(const char *str1, const char *str2, t_size_t n);
void		*ft_memchr(const void *arr, int c, t_size_t n);
int			ft_memcmp(const void *arr1, const void *arr2, t_size_t n);
char		*ft_strnstr(const char *big, const char *little, t_size_t len);
int			ft_atoi(const char *str);
void		*ft_calloc(t_size_t num, t_size_t size);
char		*ft_strdup(const char *str);
char		*ft_substr(char const *s, unsigned int start, t_size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);

#endif