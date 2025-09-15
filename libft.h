/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alehamad <alehamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 10:15:43 by alehamad          #+#    #+#             */
/*   Updated: 2025/09/15 08:20:46 by alehamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

/* first part */
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *nptr);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);


/* second part */
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);


/* bonus part struct */
typedef struct s_list
{
	void	*content;
	struct	s_list *next;
}	t_list;

/* bonus part */


#endif