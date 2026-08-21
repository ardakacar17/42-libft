/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akacar <akacar@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 16:10:15 by akacar            #+#    #+#             */
/*   Updated: 2026/08/21 20:26:35 by akacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main (void)
{
	// int a = 5;
	// ft_memset(&a, 255, 4);
	// printf("%d\n", a);
	// ft_memset(&a, 91, 2);
	// ft_memset(&a, 240, 1);

	// printf("%d\n", a);
	// char d[] = "yahya";
	// ft_memcpy(d+2, d, 10);
	// printf("%s\n", d+2);
	// char s[] = "yahya";
	// ft_memmove(s+2, s, 10);
	//  printf("%s\n", s+2);
	
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
	
	printf("%s\n", ft_strchr("Abdurrezzak", 'a'));
	
	printf("%s\n", ft_strrchr("Parlak", 'r'));

	printf("%d\n", ft_strncmp("Arda", "Mete" , 4));
	
	printf("%p\n" ,ft_memchr("Ardahan", 'h', 5));

	printf("%d\n" , ft_memcmp("Ferhat" , "Ayşe", 5));

	printf("%s\n", ft_strnstr("FERHATAYSEARDA", "ARDA", 14));

	printf("%d\n", ft_atoi("-42Istanbul"));

	int *h = ft_calloc(3, sizeof(int));
	printf("%d\n", h[0]);
	printf("%d\n", h[1]);
	printf("%d\n", h[2]);
	free(h);

	char *i = "42 Istanbul";
	char *i2;
	i2 = ft_strdup(i);
	printf("%s\n", i2);

	printf("%s\n", ft_substr("42 Istanbul", 6, 5));

	printf("%s\n", ft_strjoin("Arda", "Mete"));

	printf("%s\n", ft_strtrim("----42 Istanbul---", "-"));

	char **j = ft_split("Arda---Mete---Ayse", '-');
	printf("%s%s%s\n", j[0], j[1], j[2]);

	printf("%s\n" ,ft_itoa(-13786));

	
	return (0);
}