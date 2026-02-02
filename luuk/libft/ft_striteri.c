/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/22 10:49:50 by luconsta      #+#    #+#                 */
/*   Updated: 2025/10/28 12:13:19 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	size_t			sl;

	sl = ft_strlen(s);
	i = 0;
	while (i < sl)
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void	my_func(unsigned int i, char *c)
//{
//	*c = (char)(*c + (char)i);
//}

// int	main(void)
//{
//	char	s[] = "111111111";

//	ft_striteri(s, my_func);
//	printf("%s\n", s);
//	return (0);
//}
