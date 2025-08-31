/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:36:48 by jcongolo          #+#    #+#             */
/*   Updated: 2025/08/21 14:09:36 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Função que recebe um ponteiro para inteiro e coloca valor 42 nesse inteiro
#include <stdio.h>
void    ft_ft(int *nbr)
{
    *nbr = 42;// altera o valor do inteiro apontado por nbr
}

/*
    int main(void)
    {
        int x = 10;  //Variável inteira com valor inicial 0

        ft_ft(&x); //Chama função passando o endereço de x
                    //Dentro de ft_ft, x será atualizado para 42

        printf("%d\n", x);//Imprime valor de x → deve mostrar: 42
        
        return(0);//Termina programa com código de sucesso
    }

    O que é um ponteiro para inteiro (int *nbr)?
    É uma variável que guarda um endereço de 
    memória onde há um int.
*/


/*
    - Modifique o valor de dois inteiros usando dois ponteiros.
        void ft_swap_to_42_and_24(int *a, int *b);
*/
void    ft_swap_to_42_and_24(int *a, int *b)
{
        *a = 42;
        *b = 24;
}

/*
        - Crie uma função que troque os valores de dois inteiros.
        void ft_swap(int *a, int *b);
*/
void    ft_swap(int *a, int *b)
{
        int     tmp;

        tmp = *a;
        *a = *b;
        *b = tmp;
}

/*
  - Crie uma função que incremente o valor apontado por um ponteiro.
        void ft_increment(int *nbr);
*/
void    ft_increment(int *nbr)
{
        (*nbr)++;
}

/*
  - Crie uma função que zere o valor de um inteiro usando ponteiro.
        void ft_reset(int *nbr);
*/
void    ft_reset(int *nbr)
{
        *nbr = 0;
}

/*
 - Crie uma função que multiplique o valor apontado por um ponteiro por um fator.
        void ft_multiply(int *nbr, int factor);
*/
void ft_multiply(int *nbr, int factor)
{
        *nbr = *nbr * factor;
}

int     main(void)
{
        int     x = 9;
        printf("Antes: x ->%d\n", x);
        
        ft_multiply(&x, 5);
        
        printf("Depois x ->%d\n", x);
        return(0);
}