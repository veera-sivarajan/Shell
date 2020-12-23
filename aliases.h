# include <stdio.h>
# include <string.h>
# include "parse.h"
# include "hashtable.h"

void add_alias (char *word);

char **split_command (char *command);

int get_num_aliases ();

int is_alias (char *word);

int alias_handler (char *alias);

void insert_alias (elem **table, char *alias, char *command);

char *get_command (elem **table, char *alias);
