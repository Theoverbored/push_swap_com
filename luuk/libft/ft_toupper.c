/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 14:44:46 by luconsta      #+#    #+#                 */
/*   Updated: 2025/10/21 08:56:49 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

//int	main(void)
//{
//	int	c;

//	c = 'a';
//	printf("%c", toupper(c));
//	printf("%c", ft_toupper(c));
//}
