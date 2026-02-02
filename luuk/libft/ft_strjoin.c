/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/23 12:38:07 by luconsta      #+#    #+#                 */
/*   Updated: 2025/10/23 15:02:23 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*out;

	i = 0;
	j = 0;
	out = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!out)
		return (NULL);
	while (s1[j])
		out[i++] = s1[j++];
	j = 0;
	while (s2[j])
		out[i++] = s2[j++];
	out[i] = 0;
	return (out);
}

// int main (void)
//{
//	char *func;
//	func = ft_strjoin ("hallo", "mensen");
//	printf ("%s\n", func);
//	free (func);
//}
