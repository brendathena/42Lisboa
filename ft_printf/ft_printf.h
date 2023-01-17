/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsantann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:05:22 by bsantann          #+#    #+#             */
/*   Updated: 2022/07/29 12:09:49 by bsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c, int fd);
int		ft_putstr(char *str, int fd);
int		ft_putnbr(int nb, size_t len, int fd, int type);
int		ft_putunbr(size_t nb, size_t len, int fd, int type);
int		ft_putaddr(unsigned long addr, int fd);
void	ft_strcpy(char *dst, const char *src, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);

#endif
