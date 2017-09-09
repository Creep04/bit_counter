#ifndef COUNTER_H
# define COUNTER_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

# define DEFAULT 16
# define OCTSEN "\033[30m\033[47mNombre d'octet(s) : %d\033[40m\033[37m\n"
# define BITSEN "\033[30m\033[47mNombre de bit(s) : %d\033[40m\033[37m\n"

void	fill_binary(char *binary, long n, int bc);
long	ft_pow2(int e);
int		ft_atoi(char *str);
int		total_length(int bc);

#endif