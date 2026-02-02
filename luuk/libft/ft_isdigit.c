/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/06 16:16:34 by luconsta      #+#    #+#                 */
/*   Updated: 2025/10/16 18:10:02 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isdigit(int i)
{
	if (i == '\0')
		return (0);
	if (i < '0' || i > '9')
		return (0);
	else
		return (1);
}

//int	main(void)
//{
//	int	i;

//	i = 'a';
//	printf("%d", ft_isdigit(i));
//}
