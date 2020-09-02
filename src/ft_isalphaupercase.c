/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalphaupercase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghusk <ghusk@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:17:29 by ghusk             #+#    #+#             */
/*   Updated: 2020/02/15 14:17:41 by ghusk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalphaupercase(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}