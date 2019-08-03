/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crice <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 14:47:45 by crice             #+#    #+#             */
/*   Updated: 2018/12/01 14:47:49 by crice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	s;
	int		len;

	s = (char)c;
	len = ft_strlen(str);
	while (len != (-1))
	{
		if (str[len] == s)
			return ((char *)&str[len]);
		len--;
	}
	return (NULL);
}
