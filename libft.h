#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;

typedef struct s_split_next
{
    size_t  start;
    size_t  length;
}           t_split_next;

void ft_putchar(char c);
void ft_print_alphabet(void);
void ft_print_numbers(void); 
void ft_is_negative(int n);
void ft_print_comb(void);
void fr_print_comb2(void);
void write_n(short n);

#endif
