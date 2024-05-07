/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dll_printers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:53:46 by antgalan          #+#    #+#             */
/*   Updated: 2024/05/07 20:27:45 by martirod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

void	dll_print(t_dlist *list)
{
	t_dlist	*aux;

	aux = dll_first(list);
	ft_putstr_fd("[ ", 1);
	while (aux)
	{
		ft_putstr_fd((char *) aux->data, 1);
		if (aux->next)
			ft_putstr_fd(" <--> ", 1);
		aux = aux->next;
	}
	ft_putstr_fd(" ]", 1);
}
