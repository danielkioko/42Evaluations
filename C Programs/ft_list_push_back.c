/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnzioka <dnzioka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 21:19:20 by dnzioka           #+#    #+#             */
/*   Updated: 2019/07/23 21:19:21 by dnzioka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void        ft_list_push_back(t_list **begin_list, void *data)
{
    t_list *elem;

    elem = (t_list*)malloc(sizeof(t_list));
    elem->data = begin_list;
    
}