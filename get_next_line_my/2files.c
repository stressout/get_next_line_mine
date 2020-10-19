#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int fd1;
	int fd2;
	int ret1;
	int ret2;
	char *line1;
	char *line2;
	fd1 = open("02", O_RDONLY);
	fd2 = open("01", O_RDONLY);
	while ((ret1 = get_next_line(fd1, &line1)) || (ret2 = get_next_line(fd2,&line2)))
	{
		if (ret1 > 0 || ret2 > 0)
		{
			// printf("|1 line| - |%d|  - |%s|\n",ret1, line1);
			printf("%s\n", line1);
			free(line1);
			// printf("|2 line| - |%d| - |%s|\n",ret2,  line2);
			printf("%s\n", line2);
			free(line2);
		}
	}
	return (0);
}
