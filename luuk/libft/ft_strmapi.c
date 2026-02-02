/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/22 08:59:48 by luconsta      #+#    #+#                 */
/*   Updated: 2025/10/29 14:23:01 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*out;
	size_t			sl;

	sl = ft_strlen(s);
	i = 0;
	out = malloc((sl + 1) * sizeof(char));
	if (!out)
		return (NULL);
	while (i < sl)
	{
		out[i] = (*f)(i, s[i]);
		i++;
	}
	out[i] = '\0';
	return (out);
}

//char	my_func(unsigned int i, char c)
//{
//	return (c + i);
//}

//int	main(void)
//{
//	void	*f;
//	char	*res;

//	f = &my_func;
//	res = ft_strmapi("111111111", f);
//	printf("%s\n", res);
//	free(res);
//	return (0);
//}
