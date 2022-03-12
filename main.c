/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:05:51 by apielasz          #+#    #+#             */
/*   Updated: 2022/03/12 11:58:03 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int		ret_original = 0;
	int		ret_myprintf = 0;
	char	c = 'a';
	char	arr[] = "time flies like an arrow";
	int		d = 23;
	int		i = 42;
	int		hex = 0xabef1239;
	unsigned int intu = 2324;
	char *p = &c;

	// check no convserions
	printf("-------------------------\n");

	printf("original:\n");
	ret_original = printf("my warmest greetings to moulinette\n");
	printf("  returned: %d\n", ret_original);
	printf(".........................\n");
	printf("my printf:\n");
	ret_myprintf = ft_printf("my warmest greetings to moulinette\n");
	printf("  returned: %d\n", ret_myprintf);

	// check c conversion
	printf("-------------------------\n");
	
	printf("original:\n");
	ret_original = printf("c: %c\n", c);
	printf("  returned: %d\n", ret_original);
	printf(".........................\n");
	printf("my printf:\n");
	ret_myprintf = ft_printf("c: %c\n", c);
	printf("  returned: %d\n", ret_myprintf);

	// check s conversion
	printf("-------------------------\n");


	printf("original:\n");
	ret_original = printf("s: %s\n", arr);
	printf("  returned: %d\n", ret_original);
	printf(".........................\n");
	printf("my printf:\n");
	ret_myprintf = ft_printf("s: %s\n", arr);
	printf("  returned: %d\n", ret_myprintf);
	printf(":::::::::::::::::::::::::\n");
	printf("original:\n");
	ret_original = printf("empty s: %s\n", NULL);
	printf("  returned: %d\n", ret_original);
	printf(".........................\n");
	printf("my printf:\n");
	ret_myprintf = ft_printf("empty s: %s\n", NULL);
	printf("  returned: %d\n", ret_myprintf);

	// check %%
	printf("-------------------------\n");

	printf("original:\n");
	ret_original = printf("percent: %%\n");
	printf("  returned: %d\n", ret_original);
	printf(".........................\n");
	printf("my printf:\n");
	ret_myprintf = ft_printf("percent: %%\n");
	printf("  returned: %d\n", ret_myprintf);
	
	// check d and i conversions
	printf("-------------------------\n");

	printf("original:\n");
	ret_original = printf("d: %d\ni: %i", d, i);
	printf("  returned: %d\n", ret_original);
	printf(".........................\n");
	printf("my printf:\n");
	ret_myprintf = ft_printf("d: %d\ni: %i", d, i);
	printf("  returned: %d\n\n", ret_myprintf);
	printf(":::::::::::::::::::::::::\n");
	ret_original = printf("d given hex: %d\n", hex);
	printf("  returned: %d\n", ret_original);
	printf(".........................\n");
	printf("my printf:\n");
	ret_myprintf = ft_printf("d given hex: %d\n", hex);
	printf("  returned: %d\n", ret_myprintf);
	printf(":::::::::::::::::::::::::\n");
	// ret_original = printf("smallest int: %d\n", -2147483647);
	// printf("  returned: %d\n", ret_original);
	// printf(".........................\n");
	// printf("my printf:\n");
	// ret_myprintf = ft_printf("smallest int: %d\n", -2147483648);
	// printf("  returned: %d\n", ret_myprintf);
	// printf(":::::::::::::::::::::::::\n");
	int min = -2147483648;
	ret_original = printf("smallest int: %i\n", min);
	printf("  returned: %d\n", ret_original);
	printf(".........................\n");
	printf("my printf:\n");
	ret_myprintf = ft_printf("smallest int: %i\n", INT_MIN);
	printf("  returned: %d\n", ret_myprintf);


	// check x conversion
	printf("-------------------------\n");

	printf("original:\n");
	ret_original = printf("x: %x\n", hex);
	printf("  returned: %d\n", ret_original);
	printf(".........................\n");
	printf("my printf:\n");
	ret_myprintf = ft_printf("x: %x\n", hex);
	printf("  returned: %d\n", ret_myprintf);
	
	// check X conversion
	printf("-------------------------\n");

	printf("original:\n");
	ret_original = printf("X: %X\n", hex);
	printf("  returned: %d\n", ret_original);
	printf(".........................\n");
	printf("my printf:\n");
	ret_myprintf = ft_printf("X: %X\n", hex);
	printf("  returned: %d\n", ret_myprintf);

	// check u conversion
	printf("-------------------------\n");
	
	printf("original:\n");
	ret_original = printf("u: %u\n", intu);
	printf("  returned: %d\n", ret_original);
	printf(".........................\n");
	printf("my printf:\n");
	ret_myprintf = ft_printf("u: %u\n", intu);
	printf("  returned: %d\n", ret_myprintf);

	// check p conversion
	printf("-------------------------\n");
	
	printf("original:\n");
	ret_original = printf("p: %p\n", (void *) p);
	printf("  returned: %d\n", ret_original);
	printf(".........................\n");
	printf("my printf:\n");
	ret_myprintf = ft_printf("p: %p\n", (void *) p);
	printf("  returned: %d\n", ret_myprintf);
	printf(":::::::::::::::::::::::::\n");
	printf("original:\n");
	ret_original = printf("null p: %p\n", NULL);
	printf("  returned: %d\n", ret_original);
	printf(".........................\n");
	printf("my printf:\n");
	ret_myprintf = ft_printf("null p: %p\n", NULL);
	printf("  returned: %d\n", ret_myprintf);

	// check multiple argument conversions
	printf("-------------------------\n");

	printf("original:\n");
	ret_original = printf("cspdiuxX%%: %c, %s, %p, %d, %i, %u, %x, %X, %%\n", c, arr, p, d, i, intu, hex, intu);
	printf("  returned: %d\n", ret_original);
	printf(".........................\n");
	printf("my printf:\n");
	ret_myprintf = ft_printf("cspdiuxX%%: %c, %s, %p, %d, %i, %u, %x, %X, %%\n", c, arr, p, d, i, intu, hex, intu);
	printf("  returned: %d\n", ret_myprintf);
	printf(":::::::::::::::::::::::::\n");
	printf("original:\n");
	ret_original = printf("it's a beautiful day and %c, but %s and %p is not %d or %i or %u this is hex %x and one more %X, %%\n", c, arr, p, d, i, intu, hex, intu);
	printf("  returned: %d\n", ret_original);
	printf(".........................\n");
	printf("my printf:\n");
	ret_myprintf = ft_printf("it's a beautiful day and %c, but %s and %p is not %d or %i or %u this is hex %x and one more %X, %%\n", c, arr, p, d, i, intu, hex, intu);
	printf("  returned: %d\n", ret_myprintf);
	printf(":::::::::::::::::::::::::\n");
	printf("original:\n");
	ret_original = printf("same conversions: %s %s\n%d %d %d\n%x %x", arr, arr, d, d, d, hex, hex);
	printf("  returned: %d\n", ret_original);
	printf(".........................\n");
	printf("my printf:\n");
	ret_myprintf = ft_printf("same conversions: %s %s\n%d %d %d\n%x %x", arr, arr, d, d, d, hex, hex);
	printf("  returned: %d\n", ret_myprintf);
	printf(":::::::::::::::::::::::::\n");
}
