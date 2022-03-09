/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:30:08 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/23 13:30:08 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ELEMENT_COUNT 10

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*d;
	const char		*s;

	if (src == NULL || dest == NULL)
		return (NULL);
	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
		while (n-- > 0)
			d[n] = s[n];
	return (d);
}

// int main() {

//     // On crée une zone de mémoire de 10 entiers et contenant
//     // que neuf valeurs. La dixième est non utilisée (0).
//     int data[] = { 20, 30, 40, 50, 60, 70, 80, 90, 100, 0 };

//     // On affiche le contenu de la collection
//     for( int i=0; i<ELEMENT_COUNT; i++ ) {
//         printf( "%d ", data[i] );
//     }
//     puts( "" );  // Un retour à la ligne

//     // On décale les éléménts dans la collection ...
//     void * source = (void *) data;
//     void * destination = (void *) ( data + 1 );
//     size_t size = ELEMENT_COUNT * sizeof( int );
//     // memmove( destination, source, size );
//     ft_memmove( destination, source, size );

//     // ... pour y insérer une nouvelle valeur en tête
//     data[0] = 10;

//     // On affiche le contenu de la collection
//     for( int i=0; i<ELEMENT_COUNT; i++ ) {
//         printf( "%d ", data[i] );
//     }
//     puts( "" );  // Un retour à la ligne

//     return EXIT_SUCCESS;
// }