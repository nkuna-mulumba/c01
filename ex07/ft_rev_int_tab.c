/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casa <casa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 01:21:56 by jcongolo          #+#    #+#             */
/*   Updated: 2025/09/21 18:04:30 by casa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
 * Inverte a ordem dos elementos de um array de inteiros.
 * Troca os valores das extremidades, começando do início e do fim.
 * As trocas são feitas até a metade do array (size / 2).
*/
void    ft_rev_int_tab(int *tab, int size)
{
   int  i;
   int  tmp;
   
   i = 0;
   while (i < (size / 2))
   {
        tmp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = tmp;
        i++;
   }
}

/*
    int main(void)
    {
        int tab[] = {1, 2, 3, 4, 5};
        
        int size = sizeof(tab) / sizeof(tab[0]);
        printf("Size de [tab] -> %d\n", size);
        
        ft_rev_int_tab(tab, size);
        
        int i = 0;
        while (i < size)
        {
            printf("%d", tab[i]);
            i++;
        }
        printf("\n");
        return(0);
    }
*/

/*
    Inverter uma string de caracteres
    Recebe uma string e inverte os caracteres in-place, sem usar funções externas.
*/
void    ft_rev_str(char *str)
{
    int     len_str;
    int     i;
    char    tmp;
    
    if (!str)
    {
        return;
    }
    
    len_str = 0;
    while (str[len_str])
    {
        len_str++;
    }
    
    i = 0;
    while (i < --len_str)
    {
        tmp = str[i];
        str[i] = str[len_str];
        str[len_str] = tmp;
        i++;
    }
}
/*
    int main(int argc, char **argv)
    {
        if (argc != 2)
        {
            fprintf(stderr, "Usage: %s <string>\n", argv[0]);
            return(1);
        }
        printf("Before string: %s\n", argv[1]);

        ft_rev_str(argv[1]);
        
        printf("After string: %s\n", argv[1]);
        return(0);
    }
*/
/*
    Inverter um array de floats
    Mesma lógica, mas com float. Ideal para treinar com tipos diferentes e precisão.
*/
void    ft_rev_float_tab(float *tab, int size)
{
    float   tmp;
    int     i;
    
    tmp = 0.f;
    i = 0;
    
    while (i < (size / 2))
    {
        tmp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = tmp;
        i++;
    }    
}
/*
    int main(void)
    {
        float   arr_float[] = {1.00, 2.00, 3.00, 4.00};
        int     size_arr = sizeof(arr_float) / sizeof(arr_float[0]);
        int     i = 0;
        
        printf("Before value array float:\n");
        while (i < size_arr)
        {
            printf(" %.2f,", arr_float[i]);
            i++;
        }

        ft_rev_float_tab(arr_float, size_arr);
        
        printf("\nAfter value array float:\n");
        i = 0;
        while (i < size_arr)
        {
            printf(" %.2f,", arr_float[i]);
            i++;
        }
        printf("\n");    
        return(0);
    }
*/

/*
    Inverter pares em um array
    Inverte os elementos de dois em dois: [1,2,3,4] → [2,1,4,3]. Exige controle de índices e lógica condicional.
*/
void    ft_rev_pairs(int *tab, int size)
{
    int i;
    int tmp;

    i = 0;
    tmp = 0;

    while ((i + 1) < size)
    {
        tmp = tab[i];
        tab[i] = tab[i + 1];
        tab[i + 1] = tmp;
        i = i + 2;
    }
}
/*
    int main(void)
    {
        int array_int[] = {1, 2, 3, 4, 5};
        int size_array = sizeof(array_int) / sizeof(array_int[0]);
        int i = 0;
        
        printf("Before value array int:\n");
        while (i < size_array)
        {
            printf(" %d,", array_int[i]);
            i++;
        }

        ft_rev_pairs(array_int, size_array);
        
        printf("\nAfter value array int:\n");
        i = 0;
        while (i < size_array)
        {
            printf(" %d,", array_int[i]);
            i++;
        }
        printf("\n");    
        
        return(0);
    }
*/