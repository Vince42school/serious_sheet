/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_report.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/06 19:17:48 by vpailhe           #+#    #+#             */
/*   Updated: 2015/06/06 19:17:49 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"

int			server_report(int n, int cs)
{
	if (n == 0)
		send(cs, "ERROR cd: No such file or directory", 36, 0);
	if (n == 1)
		send(cs, "ERROR put: file doesn't exists", 30, 0);
	if (n == 2)
		send(cs, "ERROR put: too few arguments", 28, 0);
	if (n == 3)
		send(cs, "ERROR Command not found", 23, 0);
	if (n == 4)
		send(cs, "ERROR cd: Can't go further than server root dir", 48, 0);
	return (-1);
}
