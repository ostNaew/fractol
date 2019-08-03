/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crice <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 15:07:16 by crice             #+#    #+#             */
/*   Updated: 2018/11/29 15:07:18 by crice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	s;
	char	*str;

	str = (char *)b;
	s = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		str[i] = s;
		i++;
	}
	return (str);
}
