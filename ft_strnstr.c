/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:00:45 by aen-naas          #+#    #+#             */
/*   Updated: 2022/10/29 05:44:18 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	s2_len;
	size_t	s1_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	if (s1 == s2)
		return ((char *)s1);
	if (s2_len == 0)
		return ((char *)s1);
	while (i < n && (i + s2_len) <= s1_len)
	{
		if ((i + s2_len) <= n && ft_memcmp(s1 + i, s2, s2_len) == 0)
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
