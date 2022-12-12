/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:32:03 by aen-naas          #+#    #+#             */
/*   Updated: 2022/10/29 00:23:26 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l_src;
	size_t	l_dest;

	if (!size)
		return (ft_strlen(src));
	l_src = ft_strlen(src);
	l_dest = ft_strlen(dst);
	if (size < l_dest + 1)
		return (l_src + size);
	i = 0;
	while (i < size - l_dest - 1 && src[i])
	{
		dst[l_dest + i] = src[i];
		i++;
	}
	dst[l_dest + i] = 0;
	return (l_dest + l_src);
}
