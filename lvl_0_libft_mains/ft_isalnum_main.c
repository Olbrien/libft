/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 18:38:32 by marvin            #+#    #+#             */
/*   Updated: 2021/02/20 14:57:52 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main()
{
	for (int i = 0; i < 500; putchar(++i % 8 ? ' ' : '\n'))
        printf("%3d '%c' %c ", i, isprint((char unsigned)i) ? i : '?', isalnum(i) ? 'X' : ' ');
    putchar('\n');
}
