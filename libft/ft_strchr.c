/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crice <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:56:02 by crice             #+#    #+#             */
/*   Updated: 2018/11/22 17:56:04 by crice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	s;

	s = (char)c;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == s)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	if (str[i] == s)
		return ((char *)&str[i]);
	else
		return (NULL);
}
