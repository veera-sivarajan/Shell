# include <stdio.h>
# include <string.h>
# include "parse.h"

extern char *all_aliases[]; 

char **split_command(char *command);

int get_num_aliases();

int is_alias(char *word);
