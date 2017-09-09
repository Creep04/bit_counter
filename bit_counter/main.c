#include "counter.h"

int		main(int argc, char **argv)
{
	long i;
	int bit_count;
	long limit;
	char *binary;
	
	bit_count = (argc > 1) ? ft_atoi(argv[1]) : DEFAULT;
	if (bit_count % 8 == 0)
		printf(OCTSEN, bit_count / 8);
	else
		printf(BITSEN, bit_count);
	limit = ft_pow2(bit_count) - 1;
	binary = (char*)malloc(sizeof(char) * (total_length(bit_count) + 1));	
	i = 0;
	while (i <= limit)
	{
		fill_binary(binary, i++, total_length(bit_count));
		printf("%s\n", binary);
		sleep(1);
		printf("\033[A\033[2K");
	}
	return (0);
}