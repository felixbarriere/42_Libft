/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:00:33 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/23 15:00:33 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			ptr = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (ptr);
}

// int main() {

//     // Le nom du fichier d'origine
//     const char * originalFilename = "bonjourno";

//     // On prépare le nom du fichier de destination
//     size_t size = strlen( originalFilename ) + 1;   

//     char * destinationFilename = (char *) malloc( size );
//     strcpy( destinationFilename, originalFilename );

//     // Et on y remplace l'extension du fichier par l'extension .png
//     // char * lastDotPos = strrchr( destinationFilename, '.' );
//     char * lastDotPos = ft_strrchr( destinationFilename, '.' );
//     // strcpy( lastDotPos, ".png" );

//     // On affiche les deux noms de fichiers
//     puts( originalFilename );
//     puts( lastDotPos );

//     return EXIT_SUCCESS;
// }