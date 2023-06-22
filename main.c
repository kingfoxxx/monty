#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter for stack
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	char *context;
	FILE *file;
	size_t sign = 0;
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
		context = NULL;
		read_line = getline(&context, &sign, file);
		bus.content = context;
		counter++;
		if (read_line > 0)
		{
			execute(context, &stack, counter, file);
		}
		free(context);
	}
	free_stack(stack);
	fclose(file);
return (0);
}