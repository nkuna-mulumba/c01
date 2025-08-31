/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 21:14:21 by jcongolo          #+#    #+#             */
/*   Updated: 2025/08/31 21:08:22 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
 * Função para trocar o conteúdo de dois inteiros.
 * Recebe dois ponteiros como parâmetros e faz 
    a troca de valores entre eles.
*/
void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a; //Guardar valor de a
    *a = *b; //Colocar valor de b em a
    *b = tmp; //Colocar valor original de a em b
}

/*
    int main(void)
    {
        int a = 5;
        int b = 10;
        printf("Antes de trocar: a = %d e b = %d\n", a, b);
        
        ft_swap(&a, &b);
        
        printf("Depois de trocar: a = %d e b = %d\n", a, b);
        return(0);
    }
*/


/*
    - Crie uma função que permita trocar o conteúdo de duas variáveis de qualquer tipo, utilizando ponteiros genéricos e a função memcpy.
    void ft_swap_generic(void *a, void *b, size_t size);
*/
#include <stddef.h>
/*
    * ft_memcpy - Copia 'n' bytes de 'src' para 'dest'.

    * @dest: ponteiro de destino onde os dados serão copiados.
    * @src: ponteiro de origem dos dados.
    * @n: número de bytes a copiar.

    * Retorna o ponteiro original de 'dest'.
*/
void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t          i;
    unsigned char   *d;
    unsigned char   *s;
    
    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    i = 0;

    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return(dest);
}
/*
    * ft_swap_generic - Troca o conteúdo de dois ponteiros de mesmo tipo.

    * @a: ponteiro para o primeiro valor.
    * @b: ponteiro para o segundo valor.
    * @size: tamanho (em bytes) dos dados apontados.

    * Utiliza memcpy para copiar os dados de forma segura e genérica.
*/
void    ft_swap_generic(void *a, void *b, size_t size)
{
    unsigned char   tmp_value[size];
    
    ft_memcpy(tmp_value, a, size);
    ft_memcpy(a, b, size);
    ft_memcpy(b, tmp_value, size);
}

/*
    //Testar a ft_swap_generica com strings:
    int main(void)
    {
        char    *x = "Mulumba";
        char    *y = "Milolo";

        printf("Before strings: X->[%s] and Y->[%s]\n", x, y);
    
        ft_swap_generic(&x, &y, sizeof(char *));
    
        printf("After strings : X->[%s]  and Y->[%s]\n", x, y);
        return(0);
    }
    
    //Testar a ft_swap_generica com inteiros:
    int main(void)
    {
        int    x = 5;
        int    y = 10;

        printf("Before value: X->[%d] and Y->[%d]\n", x, y);
    
        ft_swap_generic(&x, &y, sizeof(int));
    
        printf("After value: X->[%d] and Y->[%d]\n", x, y);    
        return(0);
    }
    
    //Testar a ft_swap_generica com floats:
    int main(void)
    {
        float   x = 5.10f;
        float   y = 10.50f;

        printf("Before value: X->[%f] and Y->[%f]\n", x, y);
    
        ft_swap_generic(&x, &y, sizeof(float));
    
        printf("After value : X->[%f]  and Y->[%f]\n", x, y);
        return(0);
    }
*/

/*
    - Implemente uma função que só realiza a troca de valores se os ponteiros fornecidos forem válidos (não nulos).
        int ft_safe_swap(void *a, void *b, size_t size);
*/

/*
    * ft_safe_swap - Troca segura de conteúdo entre dois ponteiros genéricos.
    
    * Esta função realiza a troca de dados entre os ponteiros `a` e `b`,
        utilizando um buffer temporário de tamanho `size`. A operação só é
        realizada se ambos os ponteiros forem válidos e o tamanho for maior que zero.
    
    * Requisitos:
        - Os ponteiros devem apontar para dados do MESMO tipo e tamanho.
        - A função `ft_memcpy2` deve copiar corretamente `size` bytes.
    
    * Retorna:
        - 0 se os ponteiros forem nulos ou o tamanho for inválido.
        - 1 em caso de sucesso.
*/
int ft_safe_swap(void *a, void *b, size_t size)
{
    unsigned char   tmp[size];
    
    if (!a || !b || size == 0)
    {
        return(0);
    }
    ft_memcpy(tmp, a, size);
    ft_memcpy(a, b, size);
    ft_memcpy(b, tmp, size);
    return(1);
}
/*
    int main(void)
    {
        int x = 42;
        int y = 99;
        
        if (ft_safe_swap(&x, &y, sizeof(int)) == 1)
        {
            printf("Swap feito : x = %d, y = %d\n", x, y);
        }
        else
        {
            printf("Swap de x= %d, y= %d falhou\n", x, y);
        }   
        return(0);
    }
*/

/*
    - Desenvolva uma função que troca dois elementos de um array genérico, dado o índice de cada elemento e o tamanho de cada item.
    void swap_array_elements(void *array, size_t elem_size, size_t index1, size_t index2);
*/

/*
    * ft_swap_array_elements - Troca dois elementos genéricos de um array.
    * @array: ponteiro para o início do array.
    * @elem_size: tamanho de cada elemento em bytes.
    * @index1: índice do primeiro elemento a ser trocado.
    * @index2: índice do segundo elemento a ser trocado.
    
    * Esta função realiza a troca de dois elementos de qualquer tipo em um array,
    * usando operações de memória. É útil para arrays de int, float, structs, etc.
*/
void    ft_swap_array_elements(void *array, size_t elem_size, size_t index1, size_t index2)
{
    unsigned char   *base;
    unsigned char   tmp[elem_size];//Buffer temporário para armazenar um dos elementos

    if (!array || elem_size == 0 || index1 == index2)
    {
        return;
    }
    base = (unsigned char *)array;//Converter para ponteiro de bytes para manipulação genérica
    
    ft_memcpy(tmp, base + index1 * elem_size, elem_size);
    ft_memcpy(base + index1 * elem_size, base + index2 * elem_size, elem_size);
    ft_memcpy(base + index2 * elem_size, tmp, elem_size);
}
  
/*
    //Testar com array de string;
    int main(void)
    {
        char    *arr_string[] = {"Milolo", "Bukumba", "Mbiya", "Mukadi"};
        int i = 0;
        int size = sizeof(arr_string) / sizeof(arr_string[0]);
        
        printf("Before arr:\n");
        while (i < size)
        {
            printf("%s;\n", arr_string[i]);
            i++;
        }
        printf("\n");
        ft_swap_array_elements(arr_string, sizeof(char *), 0, 3);
        
        printf("\nAfter arr:\n");
        i = 0;
        while (i < size)
        {
            printf("%s\n", arr_string[i]);
            i++;
        }
        printf("\n");
        return(0);
    }
*/

/*
    //Testar com array de inteiro;
    int main(void)
    {
        int arr_int[] = {10, 20, 30, 40};
        int i = 0;
        int size = sizeof(arr_int) / sizeof(arr_int[0]);
        
        printf("Before arr:\n");
        while (i < size)
        {
            printf("%d;\n", arr_int[i]);
            i++;
        }
        printf("\n");
        ft_swap_array_elements(arr_int, sizeof(int), 0, 3);
        
        printf("\nAfter arr:\n");
        i = 0;
        while (i < size)
        {
            printf("%d\n", arr_int[i]);
            i++;
        }
        printf("\n");
        return(0);
    }
*/

/*
    //Testar com array de float;
    int main(void)
    {
        float   arr_float[] = {10.10, 20.20, 30.30, 40.40};
        int i = 0;
        int size = sizeof(arr_float) / sizeof(arr_float[0]);
        
        printf("Before arr:\n");
        while (i < size)
        {
            printf("%f;\n", arr_float[i]);
            i++;
        }
        printf("\n");
        ft_swap_array_elements(arr_float, sizeof(float), 0, 3);
        
        printf("\nAfter arr:\n");
        i = 0;
        while (i < size)
        {
            printf("%f\n", arr_float[i]);
            i++;
        }
        printf("\n");
        return(0);
    }
*/


/*
    - Crie uma função que troca dois campos de uma mesma struct, usando ponteiros para os campos e o tamanho de cada campo.
    void ft_swap_struct_fields(void *field1, void *field2, size_t size);
*/


/*
    - Implemente uma função que só realiza a troca de valores se os dados forem diferentes, evitando operações desnecessárias.
        int ft_conditional_swap(void *a, void *b, size_t size);
*/
/*
    * ft_memcmp - Compara dois blocos de memória byte a byte.
    * @s1: ponteiro para o primeiro bloco de memória.
    * @s2: ponteiro para o segundo bloco de memória.
    * @n: número de bytes a serem comparados.
    
    * Esta função verifica se os primeiros 'n' bytes dos blocos de memória apontados por
    * 's1' e 's2' são iguais. A comparação é feita byte a byte.
    * Retorna 0 se todos os bytes forem iguais, ou 1 se houver qualquer diferença.
*/
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *s_one;
    unsigned char   *s_two;
    size_t          i;
    
    s_one = (unsigned char *)s1;
    s_two = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (s_one[i] != s_two[i])
        {
            return(1);
        }
        i++;
    }
    return(0);
}

/*
    * ft_conditional_swap - Troca dois blocos de memória se forem diferentes.
    * @a: ponteiro para o primeiro bloco de memória.
    * @b: ponteiro para o segundo bloco de memória.
    * @size: tamanho dos blocos em bytes.
    
    * Esta função compara os blocos de memória 'a' e 'b'. Se forem diferentes,
    * realiza a troca dos conteúdos usando uma área temporária.
    * Retorna 1 se a troca foi realizada, ou 0 se os blocos eram iguais ou inválidos.
*/
int ft_conditional_swap(void *a, void *b, size_t size)
{
    unsigned char   tmp[size];
    if (size == 0 || a == b || ft_memcmp(a, b, size) == 0)
    {
        return(0);
    }
    
    ft_memcpy(tmp, a, size);
    ft_memcpy(a, b, size);
    ft_memcpy(b, tmp, size);
    return(1);
}
/*
    //Testar com strings
    int main(void)
    {
        char    *str1 = "Mulumba";
        char    *str2 = "Mulumba";
        
        printf("Before strings: str1 -> %s and str2 -> %s\n", str1, str2);
        
        if (ft_conditional_swap(&str1, &str2, sizeof(char *)) == 1)
        {
            printf("\nAfter strings: str1 -> %s and str2 -> %s\n", str1, str2);
        }
        else
        {
            printf("Valores apontado sao iguais\n");
        }
        return(0);
    }


    //Testar com inteiros
    int main(void)
    {
        int v1 = 10;
        int v2 = 5;

        printf("Before value: v1 -> %d and v2 -> %d\n", v1, v2);
        
        if (ft_conditional_swap(&v1, &v2, sizeof(int)) == 1)
        {
            printf("After value: v1 -> %d and v2 -> %d\n", v1, v2);
        }
        else
        {
            printf("Valor apontado sao iguais");
        }    
        return(0);
    }

    //Testar com float
    int main(void)
    {
        float v1 = 10.10f;
        float v2 = 5.50f;

        printf("Before value: v1 -> %f and v2 -> %f\n", v1, v2);
        
        if (ft_conditional_swap(&v1, &v2, sizeof(float)) == 1)
        {
            printf("After value: v1 -> %.2f and v2 -> %.2f\n", v1, v2);
        }
        else
        {
            printf("Valor apontado sao iguais");
        }    
        return(0);
    }
*/