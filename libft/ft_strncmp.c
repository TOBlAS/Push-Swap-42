/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcaborde <tcaborde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:46:09 by tcaborde          #+#    #+#             */
/*   Updated: 2021/11/05 16:58:16 by tcaborde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	c = 0;
	while (c < n)
	{
		if (s1[c] != s2[c] || s1[c] == '\0' || s2[c] == '\0')
			return ((unsigned char)s1[c] - (unsigned char)s2[c]);
		c++;
	}
	return (0);
}
