/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chutemp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:25:53 by chutemp           #+#    #+#             */
/*   Updated: 2024/02/21 15:57:23 by chutemp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	idx;
	int	val;
	int	*range;

	if (min >= max)
		return (NULL);
	i = max - min + 1;
	val = min;
	range = (int *)malloc(sizeof(int) * i);
	idx = 0;
	while (val < max)
		range[idx++] = val++;
	return (range);
}
