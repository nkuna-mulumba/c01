/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casa <casa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 00:49:25 by jcongolo          #+#    #+#             */
/*   Updated: 2025/09/20 00:20:46 by casa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        i++;
    }
    return(i);
}

/*
    int main(void)
    {
        char    *str = "abcdef";
        int     length = ft_strlen(str);
        printf("Size de %s é de -> %d\n", str, length);
        return(0);
    }
*/

/*
    ft_strlen_safe
    Escreva uma função que conte os caracteres de uma string apenas se o ponteiro não for nulo, retornando 0 em caso contrário.
*/
int ft_strlen_safe(char *str)
{
    int i;
    
    if (!str)
    {
        return(0);
    }
    i = 0;
    while (str[i])
    {
        i++;
    }
    return(i);
}
/*
    int main(void)
    {
        printf("Size: %d\n", ft_strlen_safe("Juliao"));
        printf("Size: %d\n", ft_strlen_safe(NULL));
        return 0;
    }
*/

/*
    ft_strlen_until
    Escreva uma função que conte os caracteres de uma string até encontrar um caractere específico (ex: ',' ou '.').
*/
int ft_strlen_until(char *str, char stop)
{
    int i;

    if (!str)
    {
        return(0);
    }
    i = 0;
    while (str[i] && str[i] != stop)
    {
        i++;
    }
    return(i);
}
/*
    int main(void)
    {
        printf("Size: %d\n", ft_strlen_until("Juliao, test", ','));
        printf("Size: %d\n", ft_strlen_until("42Madrid. Telefonica", '.'));
        printf("Size: %d\n", ft_strlen_until("Sem ponto", '.'));
        printf("Size: %d\n", ft_strlen_until("-Com traço no inicio", '-'));
        printf("Size: %d\n", ft_strlen_until(NULL, '.'));
        return(0);
    }
*/

/*
    ft_strlen_range
    Escreva uma função que conte os caracteres entre dois índices (start e end) de uma string, sem ultrapassar o '\0'.
*/
int ft_strlen_range(char *str, int start, int end)
{
    int i;
    
    if (!str || start < 0 || end < start)
    {
        return(0);
    }
    i = start;
    while (str[i] && i <= end)
    {
        i++;
    }
    return(i - start);
}
/*
    int main(void)
    {
        printf("Size range is: %d\n", ft_strlen_range("Juliao", 0, 100));
        return(0);
    }
*/