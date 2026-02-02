/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/15 10:43:56 by luconsta      #+#    #+#                 */
/*   Updated: 2025/10/21 12:45:57 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	q;
	size_t			i;

	p = (unsigned char *) s;
	q = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (p[i] == q)
			return ((void *) &p[i]);
		i++;
	}
	return (NULL);
}

//int	main(void)
//{
//	printf("%s\n", (char *)memchr("hell ea man", 'y', 7));
//	printf("%s\n", (char *)ft_memchr("hell ea man", 'y', 7));
//}
