/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juntakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 20:35:29 by juntakim          #+#    #+#             */
/*   Updated: 2022/05/17 19:30:43 by juntakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	find;

	i = 0;
	find = (const char)c;
	while (s[i])
	{
		if (s[i] == find)
			return ((char *)&s[i]);
		i++;
	}
	if (!find)
		return ((char *)&s[i]);
	return (NULL);
}
