/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casa <casa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 17:45:30 by casa              #+#    #+#             */
/*   Updated: 2025/09/18 20:30:32 by casa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
/*
 * Função que calcula a divisão inteira e o resto (módulo)
 * de dois números inteiros, e os guarda nos ponteiros fornecidos.
*/
void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}


/*
    int main(void)
    {
        int a = 10;
        int b = 2;
        int div;
        int mod;
        
        if (b != 0)
        {    
            ft_div_mod(a, b, &div, &mod);
            printf("Divisao inteira de %d por %d -> %d\n", a, b, div);
            printf("Resto da divisao de %d por %d -> %d\n", a, b, mod);
        }
        
        return(0);
    }
*/


/*
    * ft_convert_segunds - Converte um valor total de segundos em minutos e segundos.
    * @total_segunds: valor total de tempo em segundos.
    * @minutes: ponteiro onde será armazenado o número de minutos.
    * @segunds: ponteiro onde será armazenado o número de segundos restantes.
    
    * Esta função utiliza ft_div_mod para calcular quantos minutos completos existem
    * em um determinado número de segundos, e quantos segundos sobram após essa divisão.
    * É útil para representar tempo de forma mais legível (minutos:segundos).
*/
void    ft_convert_segunds(int total_segunds, int *minutes, int *segunds)
{
    ft_div_mod(total_segunds, 60, minutes, segunds);
}
/*
    int main(void)
    {
        int t_segunds = 60;
        int min = 0;
        int seg = 0;

        printf("Before -> %d total segunds = %d minutes and %d segunds\n", t_segunds, min, seg);

        ft_convert_segunds(t_segunds, &min, &seg);

        printf("After -> %d segunds = %d minutes and %d segunds\n", t_segunds, min, seg);
        return(0);
    }
*/

/*
    * ft_distribute_items - Distribui itens igualmente entre grupos.
    * @n: número total de itens a serem distribuídos.
    * @k: número de grupos.
    * @items_per_group: ponteiro para armazenar a quantidade de itens por grupo.
    * @leftover: ponteiro para armazenar a quantidade de itens restantes após a divisão.

    * Esta função calcula quantos itens podem ser distribuídos igualmente entre 'k' grupos
    * e quantos sobram após essa divisão. É útil para organizar dados, tarefas ou recursos
    * de forma equilibrada.
*/
void    ft_distibute_items(int n, int k, int *items_per_group, int *leftover)
{
    *items_per_group = n / k;
    *leftover = n % k;
}
/*
    int main(void)
    {
        int items = 10;
        int groups = 3;
            int value_per_group = 0;
            int value_remaining = 0;

            printf("Before: %d items, %d groups → %d/group, %d leftover\n", items, groups, value_per_group, value_remaining);
        
        ft_distibute_items(items, groups, &value_per_group, &value_remaining);
        
        printf("After: %d items, %d groups → %d/group, %d leftover\n", items, groups, value_per_group, value_remaining);
        return(0);
    }
*/
    
/*
    * ft_is_divisible_nbr - Verifica se um número é divisível por outro.
    * @nbr_1: número que será testado como dividendo.
    * @nbr_2: número que será testado como divisor.
    
    * Esta função utiliza ft_div_mod para calcular o módulo da divisão entre 'nbr_1' e 'nbr_2'.
    * Retorna 1 se 'nbr_1' for divisível por 'nbr_2' (ou seja, resto igual a zero),
    * ou 0 caso contrário.
*/
int ft_is_divisible_nbr(int nbr_1, int nbr_2)
{
    int div;
    int mod;
    
    ft_div_mod(nbr_1, nbr_2, &div, &mod);
    
    if (mod != 0)
    {
        return (0);
    }
    return (1);
}
/*
    int main(void)
    {
        int one = 10;
        int two = 5;
                
        if (ft_is_divisible_nbr(one, two) == 1)
        {
            printf("Number %d is divisible by number %d\n", one, two);
        }
        else
        {
            printf("Number %d is not divisible by number %d\n", one, two);
        }
        return(0);
    }
*/

/*
    * ft_digital_clock - Converte um valor total de segundos em horas, minutos e segundos.
    * @segunds: tempo total em segundos.
    * @hours: ponteiro para armazenar o número de horas calculadas.
    * @minutes: ponteiro para armazenar os minutos restantes após calcular as horas.
    * @leftover_segunds: ponteiro para armazenar os segundos restantes após calcular os minutos.

    * Esta função simula um relógio digital, utilizando ft_div_mod para dividir o tempo total
    * em unidades de horas, minutos e segundos. Primeiro converte os segundos em minutos e segundos restantes,
    * depois converte os minutos em horas e minutos restantes.
*/
void    ft_digital_clock(int segunds, int *hours, int *minutes, int *leftover_segunds)
{
    int total_minutes;
    
    ft_div_mod(segunds, 60, &total_minutes, leftover_segunds);// segundos → minutos + resto
    ft_div_mod(total_minutes, 60, hours, minutes);// minutos → horas + resto
}
/*
    int main(void)
    {
        int segunds = 60;
        int minutes = 0;
        int hours = 0;
        int leftove_seg = 0;
        
        printf("Before: %d segunds → %d hours, %d minutes, %d leftover seconds\n", segunds, hours, minutes, leftove_seg);

        ft_digital_clock(segunds, &hours, &minutes, &leftove_seg);
        
        printf("After: %d segunds → %d hours, %d minutes, %d leftover seconds\n", segunds, hours, minutes, leftove_seg);
        
        return(0);
    }
*/


/*
    ft_split_nbr:
    Esta função recebe um número inteiro (positivo ou negativo) e imprime cada um de seus dígitos separadamente, um por linha.
    - Se o número for negativo, imprime primeiro o sinal '-' em linha separada.
    - Usa exclusivamente operações de divisão (/) e módulo (%) para extrair os dígitos, conforme exigido pelo enunciado.
    - Os dígitos são armazenados em um array de caracteres e impressos na ordem original.
    - Caso o número seja zero, imprime apenas '0'.
*/
int ft_get_len_nbr(int nbr)
{
    int len_nbr;
    
    len_nbr = 0;
    if (nbr < 0)
    {
        len_nbr++;
        nbr = -nbr;
    }
    else if (nbr == 0)
    {
        len_nbr++;
    }
    
    while (nbr != 0)
    {
        len_nbr++;
        nbr = nbr / 10;
    }
    return(len_nbr);
}

#include <stdlib.h>
void    ft_split_nbr(int num)
{
    int     len;
    char    *digit;
    int     i;
    long    nbr;
    
    nbr = num;
    len = ft_get_len_nbr(nbr);
    digit = malloc((len + 1) * sizeof(char));
    if (!digit)
    {
        return;
    }
    
    if (nbr == 0)
    {
        printf("%ld\n", nbr);
        return;
    }
    else if (nbr < 0)
    {
        printf("-\n");
        nbr = -nbr;
    }
    
    i = 0;
    while (nbr != 0)
    {
        digit[i++] = (nbr % 10) + '0';// Usar Modulo
        nbr = nbr / 10;// Usar divisao
    }

    while (i > 0)
    {
        printf("%c\n", digit[--i]);
    }
    free(digit);
}

int main(void)
{
    int num = -12;

    printf("Digits de %d:\n", num);
    ft_split_nbr(num);
    return(0);
}
