/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/06 14:16:01 by luconsta      #+#    #+#                 */
/*   Updated: 2025/10/16 18:09:47 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalpha(int i)
{
	if (i == '\0')
		return (0);
	if ((i < 'a' || i > 'z') && (i < 'A' || i > 'Z'))
		return (0);
	else
		return (1);
}

//int	main(void)
//{
//	int	i;

//	i = '9';
//	printf("%d", ft_isalpha(i));
//}
