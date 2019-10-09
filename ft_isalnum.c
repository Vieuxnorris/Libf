/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:02:36 by jwins             #+#    #+#             */
/*   Updated: 2019/10/07 18:16:42 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

int ft_isalnum(int character)
{
	if ((character >= 48 && character <= 57) ||
	    (character >= 65 && character <= 90) ||
	    (character >= 97 && character <= 122))
	    return (1);
	return (0);
}
