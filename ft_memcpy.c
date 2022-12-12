/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:31:23 by aen-naas          #+#    #+#             */
/*   Updated: 2022/10/29 05:41:24 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ds;
	char	*sr;

	ds = (char *)dest;
	sr = (char *)src;
	i = 0;
	if (dest == src)
		return (dest);
	if (!src && !dest)
		return (0);
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (dest);
}
