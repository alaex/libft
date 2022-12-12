/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:14:48 by aen-naas          #+#    #+#             */
/*   Updated: 2022/10/29 05:36:41 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	ls1;

	if (!s1 || !set)
		return (0);
	while (s1[0] && ft_strchr(set, s1[0]))
		s1++;
	ls1 = ft_strlen(s1);
	while (ls1 > 0 && ft_strchr(set, s1[ls1 - 1]))
		ls1--;
	return (ft_substr(s1, 0, ls1));
}
