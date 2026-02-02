/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/10 14:42:42 by luconsta      #+#    #+#                 */
/*   Updated: 2025/11/06 10:14:54 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	out;

	i = 1;
	out = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			i *= -1;
		nptr++;
	}
	while (*nptr && *nptr >= 48 && *nptr <= 57)
	{
		out *= 10;
		out += (*nptr - 48);
		nptr++;
	}
	return (out * i);
}

//int	main(void)
//{
//	printf("%d\n", atoi("-2147483648"));
//	printf("%d\n", ft_atoi("-2147483648"));
//}
