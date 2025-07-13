/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 21:38:46 by jcongolo          #+#    #+#             */
/*   Updated: 2025/07/12 23:50:16 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    #include <stdio.h>
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