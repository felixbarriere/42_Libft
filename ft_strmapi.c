/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:19:22 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/23 18:19:22 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	str = ft_strdup(s);
	if (!(str))
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	return (str);
}

//avec quelle fonction faire fonctionner (char en paramètre)? 
// int main()
// {
//     char *str;

//     str = "hello";
//     printf("%s", ft_strmapi(str, ft_toupper));
//     printf("%s", ft_strmapi(str, ft_itoa));

// }