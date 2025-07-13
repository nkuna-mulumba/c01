/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 23:55:05 by jcongolo          #+#    #+#             */
/*   Updated: 2025/07/13 00:36:32 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Fuçao que divide valor apontado por a pelo valor apontado por b.
 * O resultado da divisão vai para *a; o resto da divisão vai para *b.
*/
void    ft_ultimate_div_mod(int *a, int *b)
{
    int div = *a / *b;
    int rest = *a % *b;
    
    *a = div;
    *b = rest;
}

/*
    #include <stdio.h>
    int main(void)
    {
        int a = 10;
        int b = 3;
        int orgi_a = a;
        int orgi_b = b;

        if (b != 0)
        {
            ft_ultimate_div_mod(&a, &b);
            printf("Quociente armazenado em [a] de %d por %d -> [%d]\n", orgi_a, b, a);
            printf("Resto armazenado em ____[b] de %d por %d -> [%d]\n", orgi_a, b, b);
        }
        
        return(0);
    }
*/