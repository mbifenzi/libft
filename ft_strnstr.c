/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:54:38 by mbifenzi          #+#    #+#             */
/*   Updated: 2019/11/07 11:07:22 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	char		*deb;
	char		*fin;
	size_t		k;

	if (!(*to_find))
		return ((char *)str);
	if (len == 0)
		return (0);
	while (*str && len > 0)
	{
		deb = (char *)str;
		fin = (char *)to_find;
		k = len;
		while (*fin && *str && *fin == *str && k > 0)
		{
			str++;
			fin++;
			k--;
		}
		if (*fin == '\0')
			return ((char *)deb);
		str = deb + 1;
		len--;
	}
	return (0);
}
