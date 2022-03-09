/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:50:31 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/23 13:50:31 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(char *str, char *toFind, int n)
{
	int	i;
	int	y;

	if (*toFind == '\0')
		return (str);
	i = 0;
	while (str[i] && i <= n)
	{
		y = 0;
		while ((str[i + y] == toFind[y]) && (i + y <= n))
		{
			if (toFind[y + 1] == '\0')
			{
				return (str + i);
			}
			y++;
		}
		i++;
	}
	return (0);
}
