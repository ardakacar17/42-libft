/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akacar <akacar@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 16:10:15 by akacar            #+#    #+#             */
/*   Updated: 2026/08/04 13:30:28 by akacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	str[] = "Merhaba 42";
	char	src_memcpy[] = "42 Istanbul";
	char	dest_memcpy[20];

	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isdigit('5'));
	printf("%d\n", ft_isalnum('Z'));
	printf("%d\n", ft_isalnum('9'));
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isprint('-'));
	printf("%ld\n", ft_strlen("Merhaba 42"));
	char	str_memset[] = "Merhaba 42";

	ft_memset(str_memset, '*', 5);
	printf("%s\n", str_memset);
	char	str_bzero[] = "Merhaba 42";

	ft_bzero(str_bzero, 7);
	printf("%s\n", str_bzero + 7);
	char	src[] = "42 Istanbul";
	char	dest[20];

	ft_memcpy(dest, src, 12);
	printf("%s\n", dest);
	char	str_move[] = "Cprogramming";

	ft_memmove(str_move + 2, str_move, 5);
	printf("%s\n", str_move);
	return (0);
}
