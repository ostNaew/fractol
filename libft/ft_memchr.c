/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crice <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 11:33:09 by crice             #+#    #+#             */
/*   Updated: 2018/11/30 11:33:10 by crice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		symbol;
	unsigned const char	*str;

	i = 0;
	str = (unsigned const char *)s;
	symbol = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == symbol)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
