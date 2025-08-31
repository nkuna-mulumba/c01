/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:37:18 by jcongolo          #+#    #+#             */
/*   Updated: 2025/08/24 16:55:30 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
    Função que recebe um ponteiro de 9 níveis para int
    e atribui o valor 42 à variável apontada no fundo da cadeia
*/
void    ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42; //Desreferencia todos os níveis até chegar no x
}

/*
    int main(void)
    {
        int x = 10; //Valor inicial da variável
        printf("Valor orginal de X->%d\n", x); //Imprime valor inicial de x
        printf("Endereço de x: ->%p\n", (void *)&x); //Endereço de x na memória
        
        //Criar ponteiros encadeados
        int *p1 = &x;            //Nível 1: ponteiro direto para x
        int **p2 = &p1;          //nível 2:
        int ***p3 = &p2;         //nível 3:
        int ****p4 = &p3;        //nível 4:
        int *****p5 = &p4;       //nível 5:
        int ******p6 = &p5;      //nível 6:
        int *******p7 = &p6;     //nível 7:
        int ********p8 = &p7;    //nível 8:
        int *********p9 = &p8;   //nível 9: este sera passado para a funçao
        
        
        // Vamos imprimir cada nível antes da chamada
        printf("Níveis de ponteiro antes da chamada:\n");
        printf("p1  = %p → *p1  = %d\n", (void *)p1, *p1);
        printf("p2  = %p → **p2 = %d\n", (void *)p2, **p2);
        printf("p3  = %p → ***p3 = %d\n", (void *)p3, ***p3);
        printf("p4  = %p → ****p4 = %d\n", (void *)p4, ****p4);
        printf("p5  = %p → *****p5 = %d\n", (void *)p5, *****p5);
        printf("p6  = %p → ******p6 = %d\n", (void *)p6, ******p6);
        printf("p7  = %p → *******p7 = %d\n", (void *)p7, *******p7);
        printf("p8  = %p → ********p8 = %d\n", (void *)p8, ********p8);
        printf("p9  = %p → *********p9 = %d\n\n", (void *)p9, *********p9);
        
        //Chamada da função que altera x via ponteiros encadeados
        ft_ultimate_ft(p9);
        
        //Valor final de x apos modificaçao
        printf("%d\n", x);    
        return(0);
    }
*/


/*
    - Modifique uma variável via ponteiro simples:
        void ft_set_to_42(int *nbr);
*/
void ft_set_to_42(int *nbr)
{
    *nbr = 42;    
}
/*
    - Modifique um ponteiro via ponteiro para ponteiro:
        void ft_change_pointer(int **nbr);
*/
void    ft_change_pointer(int **nbr)
{
    static int  a;
    
    a = 42;
    *nbr = &a;
}

/*
    - Alocar memória dinamicamente e preencher valores:
        void ft_allocate_and_fill(int **array, int size);
*/
#include <stdlib.h>
void    ft_allocate_and_fill(int **array, int size)
{
    int i;
    int fill_value;

    if (size <= 0 || !array)
    {
        return;
    }
    
    *array = malloc(size * sizeof(int));
    if (!*array)
    {
        return;
    }

    i = 0;
    fill_value = 5;
    while (i < size)
    {
        (*array)[i] = fill_value;
        i++;
        fill_value += fill_value;
    }
}
/*
    int main(void)
    {
        int *my_array;
        int size_array;
        int i;
        int nbr;
        
        my_array = NULL;
        size_array = 3;

        printf("Antes de trocar o ponteiro\n");
        my_array = malloc(size_array * sizeof(int));
        if (!my_array)
        {
            return(1);
        }
        
        i = 0;
        nbr = 1;
        while (i < size_array)
        {
            my_array[i] = nbr;
            printf("Position[%d] value -> %d\n", i, my_array[i]);
            i++;
            nbr += 1;
        }
        free(my_array);

        printf("Depois de trocar o ponteiro\n");
        ft_allocate_and_fill(&my_array, size_array);
        
        i = 0;
        while (i < size_array)
        {
            printf("Posiçao[%d] value -> %d\n", i, my_array[i]);
            i++;
        }
        
        free(my_array);
        return(0);
    }
*/


/*
    - Manipular strings via pointers:
        void ft_str_uppercase(char *str);
*/
    /*
        void    ft_str_uppercase(char *str)
        {    
            if (!str)
            {
                return;
            }
            while (*str)
            {
                if (*str >= 'a' && *str <= 'z')
                {
                    *str -= ('a' - 'A');
                }
                str++;
            }
        }
    */

int ft_is_lowercase_char(char c)
{
    if (!c)
    {
        return(0);
    }
    if (!(c >= 'a' && c <= 'z'))
    {
        return(0);
    }
    return(1);
}

void    ft_toupper_char(char *c)
{
    if (!*c)
    {
        return;
    }
    if (*c >= 'a' && *c <= 'z')
    {
        *c -= 32;
    }    
}

void    ft_str_uppercase(char *str)
{    
    if (!str)
    {
        return;
    }
    while (*str)
    {
        if (ft_is_lowercase_char(*str) == 1)
        {
            ft_toupper_char(&*str);
        }
        str++;
    }
}

/*
    - Criar uma função que troca dois valores usando ponteiros
        void ft_swap(int *a, int *b);
*/
void    ft_swap(int *a, int *b)
{
    int tmp_value;

    tmp_value = *a;
    *a = *b;
    *b = tmp_value;
}

int main(void)
{
    int x = 5;
    int y = 10;
    
    printf("Value before -> X: %d and Y: %d\n", x, y);
    
    ft_swap(&x, &y);
    
    printf("Value after -> X: %d and Y: %d\n", x, y);
    return(0);
}
