/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/07 15:49:40 by luconsta      #+#    #+#                 */
/*   Updated: 2025/10/21 11:23:42 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srcl;
	size_t	dstl;

	srcl = ft_strlen(src);
	dstl = ft_strlen(dst);
	if (dstl >= size)
		dstl = size;
	if (dstl == size)
		return (size + srcl);
	if (srcl < size - dstl)
		ft_memcpy(dst + dstl, src, srcl + 1);
	else
	{
		ft_memcpy(dst + dstl, src, size - dstl - 1);
		dst[size - 1] = 0;
	}
	return (dstl + srcl);
}

//  int	main(void)
// {
// 	int		i;
// 	char	s[20] = "AAAAAAAAA";
// 	char	d[30] = "reew";

// 	i = 3;
// 	//printf("%zu\n",ft_strlcat(d, s, i));
// 	//test function
// 	i =ft_strlcat(d, s, i);
// 	printf("%s\n %d\n",d, i);
// 	//printf("%zu\n",strlcat(d, s, i));
// }
