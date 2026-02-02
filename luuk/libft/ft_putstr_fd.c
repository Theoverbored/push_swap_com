/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/22 12:48:32 by luconsta      #+#    #+#                 */
/*   Updated: 2025/10/22 16:03:33 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = ft_strlen(s);
	write(fd, s, i);
}

//int	main(void)
//{
//	ft_putstr_fd("abc", 1);
//	return (0);
//}
