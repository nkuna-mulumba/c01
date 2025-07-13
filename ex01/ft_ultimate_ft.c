/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:37:18 by jcongolo          #+#    #+#             */
/*   Updated: 2025/07/12 21:15:55 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Função que recebe um ponteiro de 9 níveis para int
    e atribui o valor 42 à variável apontada no fundo da cadeia
*/
void    ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42; //Desreferencia todos os níveis até chegar no x
}

/*
    #include <stdio.h>
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