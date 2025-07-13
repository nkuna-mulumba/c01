/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 02:57:00 by jcongolo          #+#    #+#             */
/*   Updated: 2025/07/13 14:09:28 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Ordena um array em ordem crescente usando bubble sort.
 * A cada ciclo, percorremos o array comparando pares vizinhos.
 * Se necessário, trocamos os valores. Repetimos até não precisar mais trocar.
 * Exemplo: {4,3,2,1} → {3,4,2,1} → {3,2,4,1} → ... → {1,2,3,4}
*/

void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int tmp;
    int swapped = 1;
    
    // Enquanto ainda houver trocas, continua ordenando
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
    #include <stdio.h>
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