/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 01:21:56 by jcongolo          #+#    #+#             */
/*   Updated: 2025/07/13 02:54:38 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    #include <stdio.h>
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
