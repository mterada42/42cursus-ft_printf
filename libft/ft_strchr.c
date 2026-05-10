/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterada <mterada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:18:39 by mterada           #+#    #+#             */
/*   Updated: 2026/05/08 13:42:13 by mterada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	while (j <= i)
	{
		if (str[j] == (unsigned char)c)
			return ((char *)&str[j]);
		j++;
	}
	return (NULL);
}
