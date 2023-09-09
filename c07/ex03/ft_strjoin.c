/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:19:05 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/08/29 14:54:16 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_count_total_length(char **strings, int size, int sep_length)
{
	int	total_length;
	int	index;

	total_length = 0;
	index = 0;
	while (index < size)
	{
		total_length += ft_strlen(strings[index]);
		total_length += sep_length;
		index++;
	}
	total_length -= sep_length;
	return (total_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		f_length;
	int		index;
	char	*string;
	char	*buff;

	if (size == 0)
		return ((char *)malloc(1));
	f_length = ft_count_total_length(strs, size, ft_strlen(sep));
	string = (char *)malloc((f_length + 1) * 1);
	buff = string;
	if (!buff)
		return (0);
	index = 0;
	while (index < size)
	{
		ft_strcpy(buff, strs[index]);
		buff += ft_strlen(strs[index]);
		if (index < size - 1)
			ft_strcpy(buff, sep);
			buff += ft_strlen(sep);
		index++;
	}
	*buff = '\0';
	return (string);
}
