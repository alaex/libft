/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <aen-naas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:01:31 by aen-naas          #+#    #+#             */
/*   Updated: 2022/10/29 00:50:52 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ds;
	size_t	slen;

	slen = ft_strlen(s) + 1;
	ds = (char *)malloc(sizeof(char) * slen);
	if (ds)
		ft_memcpy(ds, s, slen);
	return (ds);
}
