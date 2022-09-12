/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 21:23:52 by coder             #+#    #+#             */
/*   Updated: 2022/09/12 16:59:21 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *str, int c_fill, size_t n_bytes);
void	ft_bzero(void *str, size_t n_bytes);
void	*ft_memcpy(void *dest, const void *src, size_t n_bytes);
void	*ft_memmove(void *dest, const void *src, size_t n_bytes);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

#endif