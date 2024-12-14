/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpontici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 22:30:03 by rpontici          #+#    #+#             */
/*   Updated: 2024/12/14 23:13:45 by rpontici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*little)
		return((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && little[j] && (i + j) < len)
		{
			if (big[i + j] != little[j])
				break;
			j++;
		}
		if (!little[j])
			return((char *)&big[i]);
		i++;
	}
	return(NULL);
}
/*
int main() {
    const char *haystack = "Helo is a simple test";
    const char *needle = "simple";

    // Cerca "simple" nei primi 20 caratteri di haystack
    char *result = ft_strnstr(haystack, needle, 20);

    if (result)
        printf("Trovato: '%s'\n", result); // Output atteso: "simple test"
    else
        printf("Sottostringa non trovata.\n");
    return 0;
}*/
