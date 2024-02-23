/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chutemp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:55:28 by chutemp           #+#    #+#             */
/*   Updated: 2024/02/21 16:56:52 by chutemp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_memcpy(char *src, char *dst, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	size_t	i;

	i = ft_strlen(src) + 1;
	dup = (char *)malloc(sizeof(i));
	if (dup)
		ft_memcpy(src, dup, i);
	return (dup);
}
