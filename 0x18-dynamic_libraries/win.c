#include <string.h>
#include <unistd.h>

int rand()
{
	static int argc = -1;

	argc++;
	if (argc == 0)
		return 9;
	if (argc == 1)
		return 8;
	if (argc == 2)
		return 10;
	if (argc == 3)
		return 24;
	if (argc == 4)
		return 75;
	if (argc == 5)
		return 9;
	return argc * argc % 30000;
}
