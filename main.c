/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akacar <akacar@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 16:10:15 by akacar            #+#    #+#             */
/*   Updated: 2026/08/10 18:46:12 by akacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	str[] = "Merhaba 42";
	char	str_memset[] = "Merhaba 42";
	char	str_bzero[] = "Merhaba 42";
	char	src[] = "42 Istanbul";
	char	dest[20] = "Merhaba";
	char	str_move[] = "Cprogramming";
	char	dst_str[20];

	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isdigit('5'));
	printf("%d\n", ft_isalnum('Z'));
	printf("%d\n", ft_isalnum('9'));
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isprint('-'));
	printf("%zu\n", ft_strlen(str));
	ft_memset(str_memset, '*', 5);
	printf("%s\n", str_memset);
	ft_bzero(str_bzero, 7);
	printf("%s\n", str_bzero + 7);
	printf("%zu\n", ft_strlcat(dest, "Arda", sizeof(dest)));
	printf("%s\n", dest);
	ft_memcpy(dest, src, sizeof(src));
	printf("%s\n", dest);
	ft_memmove(str_move + 2, str_move, 5);
	printf("%s\n", str_move);
	ft_strlcpy(dst_str, "Merhaba 42", sizeof(dst_str));
	printf("%s\n", dst_str);
	return (0);
}
