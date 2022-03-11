/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:59:00 by apielasz          #+#    #+#             */
/*   Updated: 2022/03/11 21:30:31 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar_std_out(char c);
int	ft_putstr_std_out(char *str);
int	ft_putdec_std_out(int n);
int	ft_puthex_lower_std_out(unsigned int hex);
int	ft_puthex_upper_std_out(unsigned int hex);
int	ft_putuint_std_out(unsigned int uint);
int	ft_putptr_std_out(void *ptr);

#endif