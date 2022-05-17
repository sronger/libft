/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juntakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:35:34 by juntakim          #+#    #+#             */
/*   Updated: 2022/05/17 18:01:24 by juntakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	rear;
	char	*string;

	string = 0;
	if (s1 != 0 && set != 0)
	{
		front = 0;
		rear = ft_strlen(s1);
		while (s1[front] && ft_strchr(set, s1[front]))
			front++;
		while (s1[rear - 1] && ft_strchr(set, s1[rear - 1]) && rear > front)
			rear--;
		string = (char *)malloc(sizeof(char) * (rear - front + 1));
		if (!string)
			return (NULL);
		ft_strlcpy(string, &s1[front], rear - front + 1);
	}
	return (string);
}
