/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:36:48 by jcongolo          #+#    #+#             */
/*   Updated: 2025/07/12 15:55:22 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Função que recebe um ponteiro para inteiro e coloca valor 42 nesse inteiro
void    ft_ft(int *nbr)
{
    *nbr = 42;// altera o valor do inteiro apontado por nbr
}

/*
    #include <stdio.h>
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
