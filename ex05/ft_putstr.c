/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casa <casa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 00:44:55 by jcongolo          #+#    #+#             */
/*   Updated: 2025/09/19 22:31:02 by casa             ###   ########.fr       */
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

/*
    ft_putnbr
    Escreva uma função que receba um inteiro e o exiba no ecrã usando apenas write.
*/
void    ft_putnbr(int n)
{
    long    nbr;
    char    c;
    
    nbr = n;
    if (nbr < 0)
    {
        write(1, "-", 1);
        nbr = -nbr;
    }
    if (nbr >= 10)
    {
        ft_putnbr(nbr / 10);
    }
    c = (nbr % 10) + '0';
    write(1, &c, 1);
}
/*
    int main(void)
    {   
        ft_putnbr(-2147483648);
        write(1, "\n", 1);
        return(0);
    }
*/

/*   
    ft_putstr_fd
    Escreva uma função que receba uma string e um descritor de ficheiro, e escreva a string nesse descritor.
*/
void    ft_putstr_fd(char *str, int fd)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(fd, &str[i], 1);
        i++;
    }
}
/*
    #include <fcntl.h>
    int main(void)
    {
        int fd;
        
        fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
        ft_putstr_fd("Nkuna wa Mulumba\n", fd);
        close(fd);
        return(0);
    }
*/
/*
    ft_putendl
    Escreva uma função que exiba uma string seguida de uma quebra de linha (\n), usando apenas write.
*/
void    ft_putendl(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
    write(1, "\n", 1);
}
/*
int main(void)
{
    ft_putendl("Nkuna wa Mulumba");
    return(0);
    }
*/

/*
    ft_putstr_safe
    Escreva uma função que exiba uma string apenas se o ponteiro não for nulo, evitando falhas.
*/
void    ft_putstr_safe(char *str)
{
    if (!str)
    {
        write(1, "NULL\n", 5);
        return;
    }
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
    write(1, "\n", 1);
}
/*
    int main(void)
    {
        ft_putstr_safe("Nkuna wa Mulumba");
        return(0);
    }
*/