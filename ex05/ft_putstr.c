/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcongolo <jcongolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 00:44:55 by jcongolo          #+#    #+#             */
/*   Updated: 2025/07/13 00:47:34 by jcongolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Mostra os caracteres de uma string no ecrã, um por um.
 * Utiliza a função write para imprimir cada caractere.
 */

void    ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

/*
    int main(void)
    {
        ft_putstr("abcdef");
        write(1, "\n", 1);
        return(0);
    }
*/