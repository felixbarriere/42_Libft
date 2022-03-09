/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:58:51 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/23 13:58:51 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(dst);
	if (size <= len)
		return (size + ft_strlen(src));
	size -= (len + 1);
	while (*src && size-- > 0)
		dst[len++] = *(src++);
	dst[len] = 0;
	return (len + ft_strlen(src));
}
