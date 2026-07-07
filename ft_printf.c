/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterada <mterada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 23:33:55 by mterada           #+#    #+#             */
/*   Updated: 2026/07/08 01:23:08 by mterada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	printf(const char *fmt, ...)
{
	va_list ap;
	int reval;

	if (!fmt)
		return (-1);
	va_start(ap, fmt);
	reval = ft_vprintf(fmt, ap);
	va_end(ap);
	if (reval == ERROR)
		return (-1);
	return (reval);
}