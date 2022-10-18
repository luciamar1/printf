#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	printf("%d", write(1, "0x", 3));
}
