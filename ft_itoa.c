/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:53:36 by aen-naas          #+#    #+#             */
/*   Updated: 2022/10/29 02:47:39 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	cn;

	cn = 0;
	while (n != 0)
	{
		n = n / 10;
		cn++;
	}
	return (cn);
}

static char	*ng_int(int n, int cn)
{
	char	*s;
	int		i;

	i = 0;
	cn++;
	s = (char *)malloc(sizeof(char) * (cn + 1));
	n *= -1;
	if (s)
	{
		while (n != 0)
		{
			s[cn - 1 - i] = (n % 10) + '0';
			n /= 10;
			i++;
		}
		s[0] = '-';
		s[cn] = 0;
	}
	return (s);
}

static	char	*pos_int(int n, int cn)
{
	char	*s;
	int		i;

	i = 0;
	s = (char *)malloc(sizeof(char) * (cn + 1));
	if (s)
	{
		while (n != 0)
		{
			s[cn - 1 - i] = (n % 10) + '0';
			n /= 10;
			i++;
		}
		s[cn] = 0;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	int	cn;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	cn = ft_count(n);
	if (n < 0)
		return (ng_int(n, cn));
	return (pos_int(n, cn));
}
