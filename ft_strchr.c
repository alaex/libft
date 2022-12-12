/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:20:06 by aen-naas          #+#    #+#             */
/*   Updated: 2022/10/29 01:00:53 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*st;
	char	ch;

	ch = (char)c;
	st = (char *)s;
	while (*st && *st != ch)
		st++;
	if (*st == ch)
		return (st);
	return (NULL);
}
