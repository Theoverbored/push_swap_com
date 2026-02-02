/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/22 13:03:56 by luconsta      #+#    #+#                 */
/*   Updated: 2025/10/27 15:28:56 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = ft_strlen(s);
	write(fd, s, i);
	write(fd, "\n", 1);
}

//int	main(void)
//{
//	ft_putendl_fd("abc", 1);
//	return (0);
//}
