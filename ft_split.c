/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aen-naas <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 23:57:34 by aen-naas          #+#    #+#             */
/*   Updated: 2022/10/29 09:42:17 by aen-naas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_cnt(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static int	ft_cnt_words(char *str, char c)
{
	int	i;
	int	cn;

	cn = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			cn++;
		i++;
	}
	if (i == 0)
		return (0);
	if (ft_char_cnt(str, c) > 0 && cn == 0)
		return (1);
	return (cn + 1);
}

static void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static char	**ft_append(char *str, char **res, char sep, int cnt_w)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < cnt_w)
	{
		while (str[j] == sep)
			j++;
		res[i] = ft_substr(str, j, ft_char_cnt(str + j, sep));
		if (!res)
		{
			ft_free(res);
			return (0);
		}
		i++;
		j += ft_char_cnt(str + j, sep);
	}
	res[i] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	char	*str;
	int		cnt_w;

	i = 0;
	str = ft_strtrim(s, &c);
	if (!str)
		return (0);
	cnt_w = ft_cnt_words(str, c);
	res = (char **)ft_calloc(cnt_w + 1, sizeof(char *));
	if (!res)
		return (res);
	res = ft_append(str, res, c, cnt_w);
	free(str);
	if (!res)
		return (res);
	return (res);
}
