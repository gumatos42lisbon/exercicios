/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:35:23 by gumatos           #+#    #+#             */
/*   Updated: 2021/04/16 15:47:37 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags	ft_flags(void)
{
	t_flags		flags;

	flags.ponto = -1;
	flags.negativo = 0;
	flags.estrela = 0;
	flags.tipo = 0;
	flags.largura = 0;
	flags.zero = 0;
	return (flags);
}

int	ft_check_flags(const char *string, int a,
								t_flags *flags, va_list args)
{
	while (string[++a])
	{
		if (!ft_isdigit(string[a])
			&& !ft_is_in_type_list(string[a])
			&& !ft_is_in_flags_list(string[a]))
			break ;
		if (string[a] == '0' && flags->largura == 0 && flags->negativo == 0)
			flags->zero = 1;
		if (string[a] == '.')
			a = ft_flags_ponto(string, a, flags, args);
		if (string[a] == '-')
			*flags = ft_flag_negativo(*flags);
		if (string[a] == '*')
			*flags = ft_flag_largura(args, *flags);
		if (ft_isdigit(string[a]))
			*flags = ft_flag_digit(string[a], *flags);
		if (string[a] == ' ')
			ft_putchar(' ');
		if (ft_is_in_type_list(string[a]))
		{
			flags->tipo = string[a];
			break ;
		}
	}
	return (a);
}

int	ft_tratamento(const char *string, va_list args)
{
	int		a;
	t_flags	flags;
	int		contador_char;

	a = 0;
	contador_char = 0;
	while (string[a])
	{
		flags = ft_flags();
		if (!string[a])
			break ;
		else if (string[a] == '%' && string[a + 1])
		{
			a = ft_check_flags(string, a, &flags, args);
			if (ft_is_in_type_list(string[a]))
				contador_char += ft_treatment((char)flags.tipo, flags, args);
			else if (string[a])
				contador_char += ft_putchar(string[a]);
		}
		else if (string[a] != '%')
			contador_char += ft_putchar(string[a]);
		a++;
	}
	return (contador_char);
}

int	ft_printf(const char *entrada, ...)
{
	const char	*string;
	va_list		args;
	int			contador;

	string = ft_strdup(entrada);
	if (!string)
		return (0);
	contador = 0;
	va_start(args, entrada);
	contador += ft_tratamento(string, args);
	va_end(args);
	free((char *)string);
	return (contador);
}
