/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casa <casa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 23:55:05 by jcongolo          #+#    #+#             */
/*   Updated: 2025/09/19 11:39:44 by casa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

/*
    ft_swap_values
    Escreva uma função que receba dois ponteiros para inteiros e troque os valores entre eles.
*/
void    ft_swap_values(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
/*
    int main(void)
    {
        int one = 10;
        int two = 20;
        
        printf("Before value: one -> %d, two -> %d\n", one, two);      
        ft_swap_values(&one, &two);
        printf("After value: one -> %d, two -> %d\n", one, two);        
        return(0);
    }
*/

/*
    ft_split_sum
    Crie uma função que receba dois inteiros e dois ponteiros. Armazene a soma dos inteiros em um ponteiro e a diferença no outro.
*/
void    ft_split_sum(int a, int b, int *sum, int *diff)
{
    *sum = a + b;
    if (a > b)
    {
        *diff = a - b;
    }
    else
    {
        *diff = b - a;
    }
}
/*
    int main(void)
    {
        int one = 10;
        int two = 20;
        int result_sum = 0;
        int result_diff = 0;

        printf("Before value: %d + %d -> sum: %d, -> diff: %d\n", one, two, result_sum, result_diff);
        
        ft_split_sum(one, two, &result_sum, &result_diff);
        
        printf("After value: %d + %d -> sum: %d, -> diff: %d\n", one, two, result_sum, result_diff);

        return(0);
    }
*/

/*
    ft_extract_digits
    Escreva uma função que receba um inteiro positivo e dois ponteiros. Armazene o último dígito em um ponteiro e o restante do número no outro.
*/
void    ft_extract_digits(int n, int *last_digit, int *rest)
{
    *last_digit = n % 10;
    *rest = n / 10;
}
/*
    int main(void)
    {
        int nbr = 123;
        int first_nbr = 0;
        int last_nbr = 0;
        
        printf("Before value: %d, -> %d first value, -> %d last value\n", nbr, first_nbr, last_nbr);
        
        ft_extract_digits(nbr, &last_nbr, &first_nbr);
        
        printf("Before value: %d, -> %d first value, -> %d last value\n", nbr, first_nbr, last_nbr);
        return(0);
    }
*/