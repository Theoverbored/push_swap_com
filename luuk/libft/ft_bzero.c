/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/07 10:13:34 by luconsta      #+#    #+#                 */
/*   Updated: 2025/10/29 13:10:19 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	char			c;

	c = '\0';
	p = s;
	while (n > 0)
	{
		*p = c;
		p++;
		n--;
	}
}

//int	main(void)
//{
//	char	str[] = "Hallo mensen";

//	bzero(str, 8);
//	printf("%s\n", str);
//	ft_bzero(str, 8);
//	printf("%s\n", str);
//}
