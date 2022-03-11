/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:05:51 by apielasz          #+#    #+#             */
/*   Updated: 2022/03/11 20:46:04 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	int		ret_original = 0;
	int		ret_myprintf = 0;
	char	c = 'a';
	char	arr[] = "time flies like an arrow";
	int		d = 23;
	int		i = 42;
	int		hex = 0xabef1239;
	unsigned int uint = 2324;

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
	ret_original = printf("d given hex: %d\n", hex);
	printf("  returned: %d\n", ret_original);
	printf(".........................\n");
	printf("my printf:\n");
	ret_myprintf = ft_printf("d given hex: %d\n", hex);
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
	ret_original = printf("u: %u\n", uint);
	printf("  returned: %d\n", ret_original);
	printf(".........................\n");
	printf("my printf:\n");
	ret_myprintf = ft_printf("u: %u\n", uint);
	printf("  returned: %d\n", ret_myprintf);
}
