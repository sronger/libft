/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juntakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:45:37 by juntakim          #+#    #+#             */
/*   Updated: 2022/05/17 21:50:56 by juntakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*string;

	i = 0;
	if (!s || n == 0)
		return (NULL);
	string = (char *)malloc(sizeof(char) * (n + 1));
	if (!string)
		return (NULL);
	while (i < n)
	{
		string[i] = s[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	listsize;
	size_t	i;

	i = 0;
	listsize = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c) || \
		(s[i] == c && s[i + 1] != '\0' && s[i + 1] != c))
			listsize++;
		i++;
	}
	return (listsize);
}

char	**ft_split(char const *s, char c)
{
	char	**strlist;
	size_t	i;
	size_t	k;
	size_t	save;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	strlist = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!strlist)
		return (NULL);
	while (i < ft_wordcount(s, c) && s[k] != '\0')
	{
		while (s[k] == c)
			k++;
		save = k;
		while (s[k] != c && s[k] != '\0')
			k++;
		strlist[i] = ft_strndup(&s[save], k - save);
		i++;
	}
	strlist[i] = NULL;
	return (strlist);
}
