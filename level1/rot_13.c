#include <unistd.h>
// void ft_putchar(char *str)
// {
// 	write(1, &*str++,1);
// } 15

int main(int index, char **data)
{
	int i=0;
	if(index == 2)
	{
		while (data[1][i])
		{
			if(data[1][i] >= 'a'&& data[1][i] <= 'm')
			{
				int a = data[1][i] + 13;
				write(1,&a,1);

			}
			else if(data[1][i] >= 'A'&&data[1][i] <= 'M')
			{
				int c = data[1][i] + 13;
				write(1,&c,1);
			}
			else if(data[1][i] >= 'n'&& data[1][i] <= 'z')
			{
				int e = data[1][i] + 13 - 122-1;
				int as = 'a'+e;
				write(1,&as,1);
			}
			else if(data[1][i] >= 'N'&&data[1][i] <= 'Z')
			{
				int b = 122 - data[1][i] + 13 - 1;
				int as = 'A'+b;
				write(1,&as,1);
			}
			else
				write(1,&data[1][i],1);
			i++;
		}
		
	}
	write(1,"\n",1);
}