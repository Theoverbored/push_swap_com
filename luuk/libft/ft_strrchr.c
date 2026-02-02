/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/20 10:12:53 by luconsta      #+#    #+#                 */
/*   Updated: 2025/10/21 12:17:18 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*out;

	out = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			out = (char *)&s[i];
		i++;
	}
	if (s[i] == (char)c)
		out = (char *)&s[i];
	return (out);
}

//int	main(void)
//{
//	printf("%s\n", strrchr("yeet mensen", 'm'));
//	printf("%s\n", ft_strrchr("yeet mensen", 'm'));
//}
