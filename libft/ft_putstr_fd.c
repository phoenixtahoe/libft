/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdavid <pdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 15:48:50 by pdavid            #+#    #+#             */
/*   Updated: 2017/10/05 15:49:36 by pdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putstr_fd(char const *s, int fd)
{
    while (*s)
        ft_putchar_fd(*s++, fd);
}