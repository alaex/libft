/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:20:54 by aen-naas          #+#    #+#             */
/*   Updated: 2022/10/28 11:00:12 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*st;

	i = 0;
	st = (unsigned char *)str;
	while (i < n)
	{
		st[i] = (unsigned char)c;
		i++;
	}
	return (st);
}
