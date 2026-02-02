/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/07 16:59:43 by luconsta      #+#    #+#                 */
/*   Updated: 2025/10/27 14:45:12 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest == (void *)0 && src == (void *)0)
		return (dest);
	while (n > 0)
	{
		*d = *s;
		n--;
		s++;
		d++;
	}
	return (dest);
}

// int	main(void)
//{
//	char src[50] = "yeet";
//	char dest[50] = "";
//	// memcpy(dest, src, 5);
//	// printf("%s\n", dest);
//	ft_memcpy(dest, src, 5);
//	printf("%s\n", dest);
//}
