#include <unistd.h>

int _putchar (int char);
int  my_getline(char *buf, size_t byte);

int main(int argc, char *argv[])
{
	while (1)
	{
	printf("Offering_Emmanuel$");
		
	char **line_get = my_getline();
	char **str_split = parse(line_get);
	while(tokens[0] != NULL)
	{
		void executeCMD (tokens);
	}
	return (0);
}
 
int _putchar(char c)
{
	return (write(1,&c,1));
}
	
			
	void executeCMD (tokens)
	{
		int i;
		
		if arg[0] == NULL;
		{
			perror("No args");
		}
		
		if arg[1] == NULL;
		{
			return(0);
		}
		
		for(i = 0; i < num_built; i++)
		{
			if (strcmp(tokens[0],built-in[i].name) == 0)
			{
				built-in[i].funct(args);
				return;
			}
			return (executeCMD);
	}
}
