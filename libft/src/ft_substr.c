/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juntakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:44:49 by juntakim          #+#    #+#             */
/*   Updated: 2022/05/17 16:45:17 by juntakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
			sub[j++] = s[i];
		i++;
	}
	sub[j] = '\0';
	return (sub);
}
