/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusaely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 16:27:13 by vmusaely          #+#    #+#             */
/*   Updated: 2021/07/31 16:27:15 by vmusaely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pipex.h"

int	main(int argc, char **argv)
{
	if (argc != 5)
		ft_exit("Please, run ./pipex file1 cmd1 cmd2 file2\n");
	ft_pipex(argc, argv);
	return (0);
}
