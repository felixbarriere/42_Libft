/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:50:38 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/23 13:50:38 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

// int main ()
// {
//     char d[] = "hello world";
//     char e[] = "0123456789";

//     printf("%d", ft_strlen(d));
//     printf("%d", ft_strlen(e));
//     // printf("%d", strlen(d));
// }