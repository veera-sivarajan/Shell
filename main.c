# include "parse.h"
# include "execute.h"
# include "builtin.h"
# include <string.h>
# include <unistd.h>
# include "linenoise.h" 

# define RESET "\x1B[0m"
# define BLUE "\e[1;34m"
# define NUM_ELE 10 
# define SIZE 1024

void input_loop (elem **table) {
    char *line;
    // char cwd[SIZE];
    // char cmd[SIZE];
    // char reset[SIZE];
    // char **args;
    int status = 1;                 // get input and call necessary function to 
                                // execute the command
    do {
        // strcpy(cmd, BLUE);
        // strcpy(reset, RESET);
        // getcwd(cwd, sizeof(cwd));
        // strcat(cmd, cwd);
        // strcat(cmd, reset);
        // strcat(cmd, "$$ ");
        // line = readline(">> ");
        // add_history(line);
        line = linenoise(">> "); 
        if (strcmp(line, "exit") == 0) {
            status = 0;
        }
        // args = split_line(line);
        // if (is_alias(line)) {
        //     status = alias_handler(table, line);
        // }
        // else if (is_builtin(args)) {
        //     status = builtin_handler(table, args);
        // }
        // else {
        //     status = execute_command(args);
        // }
        free(line);
    } while (status);
    // for (int i = 0; args[i]; ++i) {
    //     printf("ARGS: %s\n", args[i]);
    //     free(args[i]);
    // }
}

int main (int argc, char **argv) {
    printf("Hello, %s\n", getenv("USER"));
    // load_table();
    // elem **table = calloc(NUM_ELE, sizeof(elem));
    elem **table;
    // insert_alias(table, "cl", "cd /home/veera");
    // insert_alias(table, "lock", "loginctl lock-session");
    // insert_alias(table, "books", "okular sujatha.pdf"); 
    // insert_alias(table, "edlab", "ssh vsivarajan@elnux.cs.umass.edu");
    input_loop(table);
    // for (int i = 0; table[i]; ++i) {
    //     printf("%s\n", table[i]->alias);
    // }
    // for (int i = 0; table[i]; ++i) {
    //     printf("Freeing table element...\n");
    //     free(table[i]);
    // }
    // free(table);
    return EXIT_SUCCESS;
}
