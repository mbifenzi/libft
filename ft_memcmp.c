/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbifenzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 00:50:31 by mbifenzi          #+#    #+#             */
/*   Updated: 2019/11/07 11:20:58 by mbifenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *d1;
	unsigned char *d2;

	d1 = (unsigned char *)s1;
	d2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*d1 == *d2 && n - 1 > 0)
	{
		d1++;
		d2++;
		n--;
	}
	return (*d1 - *d2);
}
