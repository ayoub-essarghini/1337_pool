/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-sarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:04:29 by aes-sarg          #+#    #+#             */
/*   Updated: 2023/08/22 20:21:37 by aes-sarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

nsigned int ft_strlcat(char *dest, char *src, unsigned int size);
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	slen;
	unsigned int	dlen;

	
	i = 0;
	j = 0;
	slen = ft_strlen(src);
	while (dest[j])
	{
		j++;
	}
	dlen = j;
		while (src[i] != '\0' && i < size - 1)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		dest[i] = '\0';	
	return (dlen + slen);
}
