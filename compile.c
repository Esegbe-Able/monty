#include "monty.h"
#include "extern.h"

/**
 *compile - compile_op function proccess
 *the opcode within file
 *@mfile: file to read from
 */

void compile(FILE *mfile)
{
	char *buff = NULL, *token, *tokens[1024];
	size_t init_byts = 0, stat = 0, neg = -1;
	int i, l = 0;

	while ((stat = getline(&buff, &init_byts, mfile)) != neg)
	{
		l++;
		for (i = 0; buff[i] != '\0' && buff[i] != '#'; i++)
			;

		buff[i] = '\0';

		token = strtok(buff, " \n");
		i = 0;
		while (token != NULL)
		{
			tokens[i] = token;
			token = strtok(NULL, " \n");
			i++;
		}
		tokens[i] = NULL;

		if (*tokens == NULL)
			continue;

		opcode_processor(tokens, buff, mfile, l);
	}
	free(buff);
	free_list(top);
}
