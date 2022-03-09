/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:21:06 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/23 13:21:06 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

int		ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int		ft_strncmp(char *s1, char *s2, int n);
char	*ft_strnstr(char *str, char *toFind, int n);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(const char *src);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	*ft_calloc(size_t nmemb, size_t size);
char	**ft_split(char const *s, char c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_atoi(char *str);
char	*ft_itoa(int n);
void	ft_bzero( void *pointer, size_t count );
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(char c);
int		ft_isprint(char c);
void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset( void *pointer, int value, size_t count );

#endif