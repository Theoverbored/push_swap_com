/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/07 10:58:19 by luconsta      #+#    #+#                 */
/*   Updated: 2025/10/21 11:02:20 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (i + 1 < size)
		ft_memcpy(dst, src, i + 1);
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = 0;
	}
	return (i);
}

//int	main(void)
//{
//	char	src[40] = "01234567890123456789";
//	char	dst[40] = "";

//	printf("%zu", strlcpy(dst, src, 21));
//	printf("%s", "\n");
//	printf("%zu", ft_strlcpy(dst, src, 21));
//}
