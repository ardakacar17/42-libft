/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akacar <akacar@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 13:05:38 by akacar            #+#    #+#             */
/*   Updated: 2026/08/10 18:46:51 by akacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*big_str;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	big_str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!big_str)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		big_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		big_str[i + j] = s2[j];
		j++;
	}
	big_str[i + j] = '\0';
	return (big_str);
}
