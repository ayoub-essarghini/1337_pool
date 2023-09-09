/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:27:58 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/08/28 21:26:17 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*buff;

	i = 0;
	if (min >= max)
		return (0);
	range = max - min;
	buff = (int *) malloc(4 * range);
	if (!buff)
		return (0);
	while (i < range)
	{
		buff[i] = min + i;
		i++;
	}
	return (buff);
}
