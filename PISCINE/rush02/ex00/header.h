/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlacerda <mlacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/27 13:51:53 by mlacerda          #+#    #+#             */
/*   Updated: 2017/08/27 18:26:24 by mlacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define BUF_SIZE 32

# include <unistd.h>
# include <stdlib.h>

int		aux2rush(int x, int i, char *str);
int		is_rush00(int x, int y, char *str);
int		is_rush01(int x, int y, char *str);
int		is_rush02(int x, int y, char *str);
int		is_rush03(int x, int y, char *str);
int		is_rush04(int x, int y, char *str);
void	ft_putnbr(int nb);
char	*ft_strcat(char *dest, char *src);
char	*ft_strcpy(char *dest, char *src);
void	print_msg(int x, int y, int rush_no);
int		ft_strlen(char *str);
int		get_x(char *str);
int		get_y(char *str);

#endif
