/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serv_create_tcp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/06 19:14:47 by vpailhe           #+#    #+#             */
/*   Updated: 2015/06/06 19:14:48 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libnetwork.h"

int		serv_create_tcp(int port)
{
	int					sock;
	struct protoent		*prot;
	struct sockaddr_in	sin;

	prot = getprotobyname("tcp");
	if (!prot)
		return (-1);
	sock = socket(PF_INET, SOCK_STREAM, prot->p_proto);
	sin.sin_family = AF_INET;
	sin.sin_port = htons(port);
	sin.sin_addr.s_addr = htonl(INADDR_ANY);
	if (bind(sock, (const struct sockaddr *)&sin, sizeof(sin)) == -1)
	{
		ft_putstr("Bind error\n");
		exit (2);
	}
	listen(sock, 42);
	return (sock);
}
