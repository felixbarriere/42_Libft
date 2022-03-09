/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:53:17 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/23 11:53:17 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memset( void *pointer, int value, size_t count )
{
	unsigned int	i;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)pointer;
	while (i < count)
	{
		d[i] = value;
		i++;
	}
	pointer = (void *)d;
	return (pointer);
}

// int main() {

//     int array [] = { 54, 85, 20, 63, 21, 77};
//     size_t size = sizeof( int ) * 6;
//     int length;

//     /* Display the initial values */
//     for( length=0; length<6; length++) {
//         printf( "%d ", array[ length ] );
//     }
//     printf( "\n" );
// 	printf( "\n" );

//     /* Reset the memory bloc */
//     memset( array, 0, size );
// 	/* Display the new values */
// 	for( length=0; length<6; length++) {
//         printf( "%d ", array[ length ] );
//     }
// 	printf( "\n" );
// 	printf( "\n" );

//     /* Reset the memory bloc */
//     ft_memset( array, 0, size );
// 	/* Display the new values */
// 	for( length=0; length<6; length++) {
//         printf( "%d ", array[ length ] );
//     }
//     printf( "\n" );
// 	printf( "\n" );
//     return 0;
// }