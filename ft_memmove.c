/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:56:44 by aen-naas          #+#    #+#             */
/*   Updated: 2022/10/29 01:42:38 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ds;
	char	*sr;

	if (dest == src)
		return (dest);
	ds = (char *)dest;
	sr = (char *)src;
	if (dest > src)
	{
		while (n-- > 0)
			ds[n] = sr[n];
		return (ds);
	}
	return (ft_memcpy(ds, sr, n));
}
