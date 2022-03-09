/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:01:13 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/23 14:01:13 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dest;

	dest = malloc((ft_strlen(src) + 1) * sizeof (char));
	if (!(dest))
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main() {

//     const char * original = "The original string.";

//     // On duplique la chaîne de caractères initiale.
//     char * copy = ft_strdup( original );

//     // On affiche la chaîne finale
//     printf( "%s\n", copy );

//     // Sans oublier de libérer l'espace mémoire au final.
//     free( copy );

//     return EXIT_SUCCESS;
// }