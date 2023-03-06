#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct	s_list
{
	void		*content;
	struct s_list	*next;
}		t_list;

void	ft_bzero(void *s, size_t n);

int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
