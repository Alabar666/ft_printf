/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 21:15:19 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/05/12 18:31:54 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
/*
**                              HEADERS
*/
# include "libft/libft.h"
# include <stdarg.h> // library for args
/*
**                              BOOLEAN
*/
# define TRUE 1
# define FALSE 0
/*
**                              STRUCT DECLARATIONS
*/
/*typedef struct s_flags
{

}	t_flags;
*/

/*
**                              FUNCTION PROTOTYPES
*/

int	ft_printf(const char *format, ...);
int	ft_putchar(const char c);
int	ft_putstr(const char *s);
int	ft_format(const char *format, unsigned int *i, va_list args);

#endif