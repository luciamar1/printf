#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	printf("%ld", write(1, "hola", 5));
}
