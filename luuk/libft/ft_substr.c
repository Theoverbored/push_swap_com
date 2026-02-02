/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 10:55:15 by luconsta      #+#    #+#                 */
/*   Updated: 2025/10/30 15:52:03 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l;
	char	*out;

	l = ft_strlen(s);
	i = 0;
	if (!s)
		return (NULL);
	if (start > l)
		return (ft_strdup(""));
	if (len > l + start)
		len = l + start;
	if (start + len > l)
		len = l - start;
	out = ft_calloc(len + 1, sizeof(char));
	if (!out)
		return (NULL);
	while (i < len)
	{
		out[i] = s[start + i];
		i++;
	}
	return (out);
}

//int	main(void)
//{
//	char *substr; 
//	substr = ft_substr("hola", 2, 3);
//	printf("%s\n", substr);
//	free(substr);
//}
