/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:13:42 by mbifenzi          #+#    #+#             */
/*   Updated: 2019/10/19 21:54:03 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t j;
	size_t i;

	i = 0;
	j = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[j] != '\0' &&
			((unsigned char *)s1)[i] == ((unsigned char *)s2)[j] && i < n - 1)
	{
		i++;
		j++;
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[j]);
}
