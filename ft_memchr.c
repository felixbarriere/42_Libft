/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:30:00 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/23 13:30:00 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size )
{
	unsigned char	*str;

	str = (unsigned char *) memoryBlock;
	while (size)
	{
		if (*str == (unsigned char) searchedChar)
		{
			return (str);
		}
		str++;
		size--;
	}
	return (NULL);
}

// int main() {

//     char data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
//     const unsigned int size = 10;

//     // On recherche une valeur inhéxistante :
//     // void * found = memchr( data, 57, size );
//     void * found = ft_memchr( data, 57, size );
//     printf( "57 is %s\n", ( found != NULL ? "found" : "not found" ) );

//     // On recherche une valeur existante :
//     // found = memchr( data, 50, size );
//     found = ft_memchr( data, 50, size );
//     printf( "50 is %s\n", ( found != NULL ? "found" : "not found" ) );
//     if ( found != NULL ) {
//         printf( "La valeur est %d\n", *((char *) found) );
//     }

//     return EXIT_SUCCESS;
// }