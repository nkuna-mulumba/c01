/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 00:49:25 by jcongolo          #+#    #+#             */
/*   Updated: 2025/07/13 01:20:07 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    #include <stdio.h>
    int main(void)
    {
        char    *str = "abcdef";
        int     length = ft_strlen(str);
        printf("Size de %s é de -> %d\n", str, length);
        return(0);
    }
*/