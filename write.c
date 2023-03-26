#include <unistd.h>
int _strlen(char *s);

int main(void)
{
	char *hello = "Hi everyone\n";

	write(1, hello, _strlen(hello));
}

int _strlen(char *s)
{
	if (*s == 0)
	   return 0;
	return (1 + _strlen((s+1)));
}
