/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:30:06 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/23 13:30:06 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*d;
	const char		*s;

	if (src == NULL || dest == NULL)
		return (NULL);
	i = 0;
	d = dest;
	s = src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int main() {

//     int array [] = { 54, 85, 20, 63, 21 };
//     int * copy = NULL;
//     int length = sizeof( int ) * 5;
// aa   
//     /* Memory allocation and copy */
//     copy = (int *) malloc( length );
//     // memcpy( copy, array, length );
//     ft_memcpy( copy, array, length );
// a   
//     /* Display the copied values */
//     for( length=0; length<5; length++ ) {
//         printf( "%d", array[ length ] );
//         printf( "%d ", copy[ length ] );
//     }
//     printf( "\n" );
// aa
//     free( copy );
// aa
//     return EXIT_SUCCESS;
// }