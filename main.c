/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akacar <akacar@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 16:10:15 by akacar            #+#    #+#             */
/*   Updated: 2026/08/19 22:23:42 by akacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main (void)
{
	printf("%d\n", ft_isalpha('A'));
	
	printf("%d\n", ft_isdigit('5'));
	
	printf("%d\n", ft_isalnum('Z'));
	
	printf("%d\n", ft_isalnum('9'));
	
	printf("%d\n", ft_isascii('A'));
	
	printf("%d\n", ft_isprint('-'));
	
	char a[] = "Arda";
	printf("%zu\n", ft_strlen(a));
	
	char b[] = "42 Istanbul";
	ft_memset(b, '*', 6);
	printf("%s\n", b);
	
	char	c[] = "Murat";
	ft_bzero(c, 3);
	printf("%s\n", c + 3);
	
	char d[20];
	ft_memcpy(d, "Murat", 6);
	printf("%s\n", d);
	
	char e[20] = "Merhaba";
	ft_memmove(e + 5, e, 5);
	printf("%s\n" , e);
	
	char f[20];
	ft_strlcpy(f, "Ferhat", 4);
	printf("%s\n", f);

	char g[9] = "Arda";
	ft_strlcat(g, "Mete", 9);
	printf("%s\n", g);

	printf("%c\n", ft_toupper('a'));
	
	printf("%c\n", ft_tolower('A'));
	
	printf("%p\n", ft_strchr("Abdurrezzak", 'a'));
	
	printf("%p\n", ft_strrchr("Parlak", 'r'));

	printf("%d\n", ft_strncmp("Arda", "Mete" , 4));
	
	printf("%p\n" ,ft_memchr("Ardahan", 'h', 5));

	printf("%d\n" , ft_memcmp("Ferhat" , "Ayşe", 5));

	printf("%s\n", ft_strnstr("FERHATAYSEARDA", "ARDA", 14));
	return (0);
}

