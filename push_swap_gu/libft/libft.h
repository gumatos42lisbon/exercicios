/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumatos <gumatos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 16:20:32 by gumatos           #+#    #+#             */
/*   Updated: 2021/07/10 19:05:19 by gumatos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct s_flags
{
	int				already_print;
	int				tipo;
	int				largura;
	int				negativo;
	int				zero;
	int				ponto;
	int				estrela;
}	t_flags;

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *str, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src,
						size_t n);
void				*ft_memccpy(void *dest, const void *src,
						int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_calloc(size_t a, size_t n);
char				*ft_strnew(size_t size);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
size_t				ft_strlcat(char *dest, const char *src,
						size_t n);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *str, int ch);
char				*ft_strrchr(const char *str, int c);
char				*ft_strnstr(const char *big, const char *little,
						size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str, int *is_number);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);

/*
** printf
*/

int					ft_putchar(int c);
int					ft_putstrprec(char *str, int prec);
char				*ft_str_tolower(char *str);
int					ft_treat_char(char c, t_flags flags);
int					ft_treat_largura(int largura, int negativo, int has_zero);
int					ft_treat_percent(t_flags flags);
int					ft_treatment(int c, t_flags flags, va_list args);
int					ft_flags_ponto(const char *save, int start,
						t_flags *flags, va_list args);
int					ft_printf(const char *entrada, ...);
int					ft_is_in_type_list(int c);
int					ft_is_in_flags_list(int c);
int					ft_treat_string(char *str, t_flags flags);
int					ft_treat_pointer(unsigned long long ull, t_flags flags);
char				*ft_ull_base(unsigned long long ull, int base);
int					ft_treat_int(int i, t_flags flags);
int					ft_treat_unit(unsigned int unit, t_flags flags);
char				*ft_u_itoa(unsigned int n);
int					ft_treat_hexa(unsigned int ui, int lower,
						t_flags flags);
/*
**int					ft_printf(const char *entrada, ...);
*/

t_flags				ft_flag_negativo(t_flags flags);
t_flags				ft_flag_largura(va_list args, t_flags flags);
t_flags				ft_flag_digit(char c, t_flags flags);

/*
** second
*/
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				*ft_memalloc(size_t size);

/*
** bonus
*/
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
int					ft_printf(const char *entrada, ...);

void				ft_lstdelone(t_list *lst, void (*del)(void*));
void				ft_lstclear(t_list **lst, void (*del)(void*));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f) (void *),
						void (*del)(void *));
#endif
