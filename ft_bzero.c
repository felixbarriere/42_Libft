/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:26:28 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/23 11:26:28 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_bzero( void *pointer, size_t count )
{
	unsigned int	i;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)pointer;
	while (i < count)
	{
		d[i] = '\0';
		i++;
	}
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

//     /* Reset the memory bloc */
//     // ft_memset( array, 0, size );
//     // memset( array, 0, size );
//     ft_bzero( array, size );

//     /* Display the new values */
//     for( length=0; length<6; length++) {
//         printf( "%d ", array[ length ] );
//     }
//     printf( "\n" );
//     return 0;
// }