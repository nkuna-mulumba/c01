/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casa <casa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 02:57:00 by jcongolo          #+#    #+#             */
/*   Updated: 2025/09/28 22:12:29 by casa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
 * Ordena um array em ordem crescente usando bubble sort.
 * A cada ciclo, percorremos o array comparando pares vizinhos.
 * Se necessário, trocamos os valores. Repetimos até não precisar mais trocar.
 * Exemplo: {4,3,2,1} → {3,4,2,1} → {3,2,4,1} → ... → {1,2,3,4}
*/
void    ft_sort_int_tab(int *tab, int size)
{
    int swapped;
    int i;
    int tmp;
    
    //Enquanto ainda houver trocas, continua ordenando
    swapped = 1;
    while (swapped == 1)
    {
        swapped = 0; //Assume que nada será trocado nesta passagem
        i = 0;
        //Percorre array comparando pares de elementos vizinhos
        while (i < size - 1)
        {
            //Se elemento atual for maior que o próximo, troca de lugar
            if (tab[i] > tab[i + 1])
            {
                tmp = tab[i];       //Guarda valor atual 
                tab[i] = tab[i + 1];//Coloca valor seguinte na posição atual
                tab[i + 1] = tmp;   // Coloca valor guardado na próxima posição
                swapped = 1;        // Houve troca — precisa mais uma passagem
            }
            i++;
        }
    }
}


/*
    int main(void)
    {
        int tab[] = {4, 3, 2, 1};
        int size = sizeof(tab) / sizeof(tab[0]);
        int i = 0;
        
        printf("Valores de array[tab] decrescente:\n");
        while (i < size)
        {
            printf("%d, ", tab[i]);
            i++;
        }
        printf("\n");

        i = 0;
        ft_sort_int_tab(tab, size);
        printf("Valores de array[tab] crescente:\n");
        while (i < size)
        {
            printf("%d, ", tab[i]);
            i++;
        }
        printf("\n");
        return(0);
    }


    **OBS**:
    Dica para lembrar
    Bubble sort = comparar vizinhos + trocar + repetir até tudo ficar em ordem
*/

/*
    Ordenar um array de floats em ordem decrescente
    Exemplo: [1.2, 3.4, 2.1] → [3.4, 2.1, 1.2]
    Treinar adaptação de tipos e lógica inversa.
*/
    /*
        ft_sort_float_tab
        Ordena um array de números float em ordem decrescente usando o algoritmo Bubble Sort otimizado.
        A ordenação só ocorre se houver trocas, e o limite de verificação é ajustado dinamicamente com base na última troca.

        Parâmetros:
        - tab: ponteiro para o array de floats a ser ordenado.
        - size: número de elementos no array.

        Observações:
        - A ordenação é feita in-place (modifica diretamente o array original).
        - O algoritmo é otimizado com controle de última troca para reduzir iterações desnecessárias.
    */
void    ft_sort_float_tab(float *tab, int size)
{
    int     swap_last;
    int     i;
    float   tmp;
    int     new_last_swap;
    
    swap_last = size - 1;
    while (swap_last > 0)
    {
        i = 0;
        new_last_swap = 0;
        while (i < swap_last)
        {
            if (tab[i] < tab[i + 1])
            {
                tmp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = tmp;
                new_last_swap = i;
            }
            i++;
        }
        swap_last = new_last_swap;
    }
}
/*
    int main(void)
    {
        float   array_float[] = {1.2, 3.4, 2.1};
        int     size_array_float = sizeof(array_float)/sizeof(array_float[0]);
        int     i = 0;
        
        printf("Before value array float:\n");
        while (i < size_array_float)
        {
            printf("%.2f, ", array_float[i]);
            i++;
        }

        ft_sort_float_tab(array_float, size_array_float);
        
        printf("\nAfter value array float:\n");
        i = 0;
        while (i < size_array_float)
        {
            printf("%.2f, ", array_float[i]);
            i++;
        }
        printf("\n");
        return(0);
    }
*/

/*
    Ordenar apenas os elementos pares de um array, mantendo ímpares nas posições
    // Exemplo: [4, 3, 2, 1] → [2, 3, 4, 1]
    Exige controle condicional e manipulação seletiva.
*/
    /*
        ft_is_even_nbr
        Verifica se um número inteiro é par.

        Parâmetros:
        - nbr: número inteiro a ser testado.

        Retorno:
        - 1 se o número for par.
        - 0 se o número for ímpar.

        Utilidade:
        Essa função é usada como filtro para selecionar apenas os elementos pares do array original.
        Ela permite que a função principal identifique quais valores devem ser ordenados.
    */

int ft_is_even_nbr(int nbr)
{
    if ((nbr % 2) != 0)
    {
        return(0);
    }
    return(1);
}
    /*
        ft_bubble_sort_ints

        Ordena um array de inteiros em ordem crescente usando o algoritmo Bubble Sort otimizado.

        Parâmetros:
        - arr: ponteiro para o array de inteiros a ser ordenado.
        - size: número de elementos no array.

        Detalhes:
        - O algoritmo é otimizado com controle de última troca (last_swap), evitando iterações desnecessárias.
        - A ordenação é feita in-place, modificando diretamente o array recebido.

        Utilidade:
        Essa função é usada para ordenar apenas os elementos pares extraídos do array original.
        Ela garante que os pares fiquem em ordem crescente antes de serem reinseridos.
    */
void    ft_bubble_sort_ints(int *arr, int size)
{
    int last_swap;
    int i;
    int tmp;
    int new_last;

    last_swap = size - 1;
    while (last_swap > 0)
    {
        new_last = 0;
        i = 0;
        while (i < last_swap)
        {
            if (arr[i] > arr[i + 1])
            {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                new_last = i;
            }
            i++;
        }
        last_swap = new_last;
    }
}
    /*
        ft_sort_even_elements

        Ordena apenas os elementos pares de um array de inteiros, mantendo os ímpares fixos em suas posições originais.

        Parâmetros:
        - arr: ponteiro para o array original de inteiros.
        - size: número de elementos no array.

        Etapas:
        1. Aloca um array auxiliar para armazenar os elementos pares.
        2. Usa ft_is_even_nbr para filtrar e copiar os pares.
        3. Ordena os pares com ft_bubble_sort_ints.
        4. Reinsere os pares ordenados nas posições originais.
        5. Libera a memória alocada.

        Justificativa:
        Essa função cumpre o enunciado de forma modular e segura, separando responsabilidades em funções auxiliares reutilizáveis.
        A lógica preserva a posição dos ímpares e aplica ordenação seletiva apenas sobre os pares.
    */
#include <stdlib.h>
void    ft_sort_even_elements(int *arr, int size)
{
    int *new_arr;
    int i;
    int j;

    new_arr = malloc(size * sizeof(int));
    if (!new_arr)
    {
        return;
    }
    
    i = 0;
    j = 0;
    while (i < size)
    {
        if (ft_is_even_nbr(arr[i]) == 1)
        {
            new_arr[j] = arr[i];
            j++;
        }
        i++;
    }
    
    ft_bubble_sort_ints(new_arr, j);
    
    j = 0;
    i = 0;
    while (i < size)
    {
        if (ft_is_even_nbr(arr[i]) == 1)
        {
            arr[i] = new_arr[j];
            j++;
        }
        i++;
    }
    free(new_arr);
}
/*
    int main(void)
    {
        int sort_array_pare[] = {21, 40 , 11, 30};
        int size_arr_int = sizeof(sort_array_pare) / sizeof(sort_array_pare[0]);
        int i = 0;
        
        printf("Before value array:\n");
        while (i < size_arr_int)
        {
            printf("%d, ", sort_array_pare[i]);
            i++;
        }

        ft_sort_even_elements(sort_array_pare, size_arr_int);
        
        printf("\nAfter value:\n");
        i = 0;
        while (i < size_arr_int)
        {
            printf("%d, ", sort_array_pare[i]);
            i++;
        }
        printf("\n");

        return(0);
    }
*/

/*
    Detectar se um array já está ordenado antes de aplicar Bubble Sort. Se estiver ordenado, não faz nada.
*/
    /*
    ft_is_sorted_arr_int

    Verifica se um array de inteiros está ordenado em ordem crescente.

    Parâmetros:
    - arr: ponteiro para o array de inteiros.
    - size: número de elementos no array.

    Retorno:
    - 1 se o array estiver ordenado.
    - 0 se houver pelo menos um par de elementos fora de ordem.

    Utilidade:
    Essa função serve como verificação prévia antes de aplicar Bubble Sort.
    Evita processamento desnecessário se o array já estiver ordenado.
*/
int    ft_is_sorted_arr_int(int *arr, int size)
{
    int i;

    i = 0;
    while (i < size - 1)
    {
        if (arr[i] > arr[i + 1])
        {
            return(0);
        }
        i++;
    }
    return(1);
}
/*
    ft_sort_arr_int

    Ordena um array de inteiros em ordem crescente usando Bubble Sort otimizado,
    mas apenas se o array não estiver previamente ordenado.

    Parâmetros:
    - arr: ponteiro para o array de inteiros.
    - size: número de elementos no array.

    Detalhes:
    - Antes de ordenar, chama ft_is_sorted_arr_int para verificar se o array já está em ordem.
    - Se estiver desordenado, aplica Bubble Sort com controle de última troca (new_last),
      reduzindo o número de comparações em cada passagem.

    Justificativa:
    Essa abordagem evita trabalho desnecessário e melhora a eficiência em casos onde o array já está ordenado.
    A separação entre verificação e ordenação torna o código mais modular e reutilizável.
*/
void    ft_sort_arr_int(int *arr, int size)
{
    int last_swap;
    int i;
    int new_last;
    int tmp;
    
    if (ft_check_sort_arr_int(arr, size) == 0)
    {
        last_swap = size - 1;
        while (last_swap > 0)
        {
            i = 0;
            new_last = 0;
            while (i < last_swap)
            {
                if (arr[i] > arr[i + 1])
                {
                    tmp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = tmp;
                    new_last = i;
                }
                i++;
            }
            last_swap = new_last;
        }
    }
}
/*
    int main(void)
    {
        // int array_int[] = {21, 40 , 11, 30};
        int array_int[] = {10, 20 , 30, 40};
        int size_arr = sizeof(array_int) / sizeof(array_int[0]);
        int i = 0;
        
        printf("Before value array:\n");
        while (i < size_arr)
        {
            printf("%d, ", array_int[i]);
            i++;
        }

        ft_sort_arr_int(array_int, size_arr);
        
        printf("\nAfter value:\n");
        i = 0;
        while (i < size_arr)
        {
            printf("%d, ", array_int[i]);
            i++;
        }
        printf("\n");

        return(0);
    }
*/
