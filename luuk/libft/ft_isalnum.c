/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/06 16:20:52 by luconsta      #+#    #+#                 */
/*   Updated: 2025/10/21 08:53:37 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int i)
{
	if (ft_isalpha(i) || ft_isdigit(i))
		return (i);
	return (0);
}

// int	main(void)
//{
//	int	i;

//	i = "";
//	printf("%d", ft_isalnum(i));
//}
