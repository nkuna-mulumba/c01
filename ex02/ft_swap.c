/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 21:14:21 by jcongolo          #+#    #+#             */
/*   Updated: 2025/07/12 21:36:56 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    #include <stdio.h>
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