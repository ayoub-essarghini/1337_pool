/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:27:21 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/08/29 18:53:31 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max, int *size)
{
	int	*tab;
	int	count;
	int	i;

	*size = max - min;
	if (*size <= 0)
		return (NULL);
	tab = (int *)malloc(*size * sizeof(int));
	if (tab == NULL)
		return (NULL);
	count = min;
	i = 0;
	while (i < *size)
	{
		tab[i] = count;
		count++;
		i++;
	}
	return (tab);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max, &size);
	if (*range == NULL)
		return (-1);
	return (size);
}
