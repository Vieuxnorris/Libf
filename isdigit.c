/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:18:08 by jwins             #+#    #+#             */
/*   Updated: 2019/10/07 10:20:59 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int arg)
{
	if (arg >= 0 || arg <= 9)
		return (1);
	return (0);
}
