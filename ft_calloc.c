/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akacar <akacar@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 23:59:56 by akacar            #+#    #+#             */
/*   Updated: 2026/08/08 14:05:32 by akacar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	sum;
	void	*ptr;

	if (size != 0 && nmemb > ((size_t) - 1) / size)
		return (NULL);
	sum = nmemb * size;
	ptr = malloc(sum);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, sum);
	return (ptr);
}
