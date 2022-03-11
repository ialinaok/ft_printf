/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_std_out.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:53:50 by apielasz          #+#    #+#             */
/*   Updated: 2022/03/11 18:06:49 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putdec_std_out(int hex)
{
	char	hexprint;
	int		ret;

	ret = 0;
	if (hex < 0x0)
	{
		if (hex == -0x80000000)
		{
			write(1, "80000000", 8);
			return (8);
		}
		hex *= -1;
	}
	if (hex >= 0x10)
	{
		ret += ft_puthex_std_out(hex/16);
	}
	hexprint = hex % 10 + 0x0;
	write(1, &hexprint, 1);
	return (1 + ret);
}