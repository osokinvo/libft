/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghusk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:26:56 by ghusk             #+#    #+#             */
/*   Updated: 2019/09/21 17:53:09 by ghusk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	if (s == (void *)0 || f == (void *)0)
		return ;
	while (*s)
	{
		(*f)(s);
		s++;
	}
}