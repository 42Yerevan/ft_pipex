/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipex.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusaely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 16:25:49 by vmusaely          #+#    #+#             */
/*   Updated: 2021/07/31 16:25:54 by vmusaely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PIPEX_H
# define FT_PIPEX_H

# include	<stdlib.h>
# include	<stdio.h>
# include	<stddef.h>
# include	<unistd.h>
# include	<math.h>
# include	<time.h>
# include	<unistd.h>
# include	<fcntl.h>
# include	<sys/wait.h>

extern char	**environ;

void		ft_exit(char *s);
void		ft_pipex(int argc, char **argv);
void		ft_pipein(int pipefd[2], int in, char *cmd1);
void		ft_pipeout(int pipefd[2], int out, char *cmd2);
void		ft_exec(char *cmd, char **args);
void		ft_testpaths(char *cmd, char **args, char **paths);
char		**ft_split(char const *s, char c);
char		*ft_strjoin(char const *s1, char const *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		ft_free(char **args);
void		ft_putstr_fd(char *s, int fd);

#endif
