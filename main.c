/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akacar <akacar@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 16:10:15 by akacar            #+#    #+#             */
/*   Updated: 2026/08/24 22:54:10 by akacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "libft.h"

char to_upper(unsigned int i, char c)
{
	if(i % 2 == 0)
		return(ft_toupper(c));
	return (c);
}

void to_lower(unsigned int i, char *c)
{
	(void)i;
	*c = ft_tolower(*c);
}

void print_content(void *content)
{
	printf("[%s] -> ", (char *)content);
}

void func(void *content)
{
	char *metin = (char *)content;
	int ag;
	
	ag = 0;
	while(metin[ag] != '\0')
	{
		if (metin[ag] >= 'a' && metin[ag] <= 'd')
			metin[ag] -= 32;
		ag++;
	}
}
void *mapa(void *content)
{
	char *new = ft_strdup((char *)content);
	int i;
	
	i = 0;

	if (!new)
		return (NULL);
	while (new[i] != '\0')
	{
		if (new[i] >= 'a' && new[i] <= 'z')
			new[i] -= 32;
	i++;
	}
	return (new);
}

void del_content(void *content)
{
	free(content);
}

int main (void)
{
	int a1 = 5;
	ft_memset(&a1, 255, 4);
	printf("%d\n", a1);
	ft_memset(&a1, 91, 2);
	ft_memset(&a1, 240, 1);
	printf("%d\n", a1);
	
	
	
	
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
	
	// char b[] = "42 Istanbul";
	// ft_memset(b, '*', 6);
	// printf("%s\n", b);
	
	char	c[] = "Murat";
	ft_bzero(c, 3);
	printf("%s\n", c + 3);
	
	char d[] = "Murat";
	ft_memcpy(d + 2, d, 3);
	printf("%s\n", d);
	
	char e[] = "Merhaba";
	ft_memmove(e + 5, e, 6);
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

	char *k = ft_strmapi("Hello World", to_upper);
	printf("%s\n", k);
	free(k);

	char l[] = "ISTANBUL";
	ft_striteri(l , to_lower);
	printf("%s\n" , l);

	// int dosya_fd = open("test.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);

	// if (dosya_fd == -1)
	// 	return (1);
	// ft_putstr_fd("Bu cümle ekranda görünmeyecek", dosya_fd);
	// ft_putstr_fd("test.txt dosyasının içine basıldı.\n", dosya_fd);
	// ft_putendl_fd("Bunu da alt satıra geçerek yazdı.", dosya_fd);
	// ft_putnbr_fd(-2147483648, dosya_fd);
	// close(dosya_fd);
	t_list *head = ft_lstnew(ft_strdup("orta vagon"));
	ft_lstadd_front(&head, ft_lstnew(ft_strdup("ilk vagon")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("son vagon")));

	printf("%d\n", ft_lstsize(head));
	ft_lstiter(head, print_content);
	printf("NULL\n\n");
	
	t_list *new_list = ft_lstmap(head, mapa, del_content);
	ft_lstiter(new_list, print_content);
	printf("NULL\n\n");

	// t_list *ghost_node = ft_lstnew(ft_strdup("Silinecek Vagon"));
	// ft_lstdelone(ghost_node, del_content);

	ft_lstclear(&head, del_content);
	ft_lstclear(&new_list, del_content);
	if(head == NULL && new_list == NULL)
		printf("Bütün temizlik yapildi.\n");

	// t_list *node = ft_lstnew(ft_strdup("eren"));
	// ft_lstadd_back(&node, ft_lstnew(ft_strdup("beren")));
	// ft_lstadd_back(&node, ft_lstnew(ft_strdup("ceren")));
	// ft_lstadd_back(&node, ft_lstnew(ft_strdup("kadir")));
	
	// ft_lstiter(node, func);
	// ft_lstiter(node, print_content);
	// printf("NULL\n\n");
	// ft_lstclear(&node , del_content);

	// t_list *dugum = ft_lstnew(ft_strdup("serdar"));
	// ft_lstadd_front(&dugum, ft_lstnew(ft_strdup("eren")));
	// ft_lstadd_back(&dugum, ft_lstnew(ft_strdup("basar")));
	// print_content(dugum->next->next->content);
	// printf("NULL\n\n");
	return (0);
}