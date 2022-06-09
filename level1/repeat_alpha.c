#include <unistd.h>

int ara(char *str, char ch)
{
	int i= 0;
	while (str[i]!='\0'&& str[i] != ch)
		i++;
	return(i);
	
}

int main(int index, char **data)
{
	if(index == 2)
	{
		int i=0;
		int k=0;
		char *str="abcdefghijklmnopqrstuvwxyz";
		char *str1="ABCDEFGHIJKLMNOPRSTUVWXYZ";
		while (data[1][i] != '\0')
		{
			k=0;
			if(data[1][i] >= 'A' && data[1][i] <= 'Z')
			{
				while (k<=ara(str1,data[1][i]))
				{
					write(1,&data[1][i],1);
					k++;
				}
			}
			else if(data[1][i] >= 'a' && data[1][i] <= 'z')
			{
				while (k<=ara(str,data[1][i]))
				{
					write(1,&data[1][i],1);
					k++;
				}
			}
			i++;
		}
	}
	write(1,"\n",1);
}