/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: luconsta <luconsta@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/23 09:51:55 by luconsta      #+#    #+#                 */
/*   Updated: 2025/10/29 14:11:58 by luconsta      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nbrlen(long long nbr)
{
	size_t	count;

	count = 1;
	if (nbr < 0)
	{
		nbr *= -1;
		count++;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

static void	putnbrs(long n, char *out, int *i)
{
	if (n > 9)
	{
		putnbrs(n / 10, out, i);
		putnbrs(n % 10, out, i);
	}
	else
		out[(*i)++] = n + '0';
}

char	*ft_itoa(int n)
{
	char	*out;
	long	nbr;
	int		i;

	nbr = n;
	out = malloc(sizeof(char) * (nbrlen(nbr) + 1));
	if (out == NULL)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		out[i++] = '-';
		nbr *= -1;
	}
	putnbrs(nbr, out, &i);
	out[i] = '\0';
	return (out);
}

//int	main(void)
//{
//	char *itoa;
//	itoa = ft_itoa(90094);
//	printf("%s\n", itoa);
//	free (itoa);
//}
