#include<unistd.h>

int main(void)
{
	char a=0 ;
	int i;

	for(i=0; i<9; i++)
	{
		write (1, a, 10);
		a += 1;
	};

	return(0);
}
