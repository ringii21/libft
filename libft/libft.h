/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonard <abonard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:42:42 by abonard           #+#    #+#             */
/*   Updated: 2021/10/22 16:21:36 by abonard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT 
#define LIBFT
#include <unistd.h>
#include <stdlib.h>

int		ft_isalnum(int val);
int		ft_atoi(const char *nptr);
int		ft_isalpha(int val);
int		ft_isascii(int val);
int		ft_isdigit(int val);
int		ft_isprint(int val);
int		ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_tolower(int c);
void	ft_bzero(void * s, size_t n);
void	*calloc(size_t nmemb, size_t size);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	ft_memcpy(void *dest, void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	**ft_split(char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strnstr(const char *s1 , const char *s2 , size_t len);
char	*ft_strrchr(const char *str, int ch);
char	*ft_substr(char const *s, unsigned int start,size_t len);
size_t	ft_strlcat(char *dest, char *src, size_t size);
size_t	ft_strlcpy(char *dest, char *src, size_t size);

#endif 
