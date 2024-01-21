#define  _POSIX_C_SOURCE 200809L

#include "monty.h"

bus_t bus = {NULL, NULL, NULL, 0};

/**
* main - monty code interpreter function
* @argc: the number of arguments
* @argv: the monty file location
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	char *contents;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		contents = NULL;
		read_line = getline(&contents, &size, file);
		bus.content = contents;
		counter++;
		if (read_line > 0)
		{
			execute(contents, &stack, counter, file);
		}
		free(contents);
	}
	free_stack(stack);
	fclose(file);
return (0);
}

