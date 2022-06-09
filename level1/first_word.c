#include <unistd.h>
// void ft_putchar(char *str)
// {
// 	write(1, &*str++,1);
// }

int main(int index, char **data)
{
	int i=0;
	if(index == 2)
	{
		while (data[1][i] != '\t' && data[1][i] != ' ' && data[1][i] != '\0')
			write(1,&data[1][i++],1);
	}
	write(1,"\n",1);
}