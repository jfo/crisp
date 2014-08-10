#include <stdio.h>
#include <stdlib.h>


#ifdef _WIN32

#include <string.h>

static char buffer[2048];

/* Fake readline function */

char* readline(char* prompt) {
    fputs(prompt, stdout);
    fgets(buffer, 2048, stdin);
    char* cpy = malloc(strlen(buffer)+1);
    strcpy(cpy,buffer);
    char*(cpy, buffer);
    return cpy;
}

/* Fake add_history function */ 

void add_history(char* unused) {}

#else

#include <readline/readline.h>

static char input[2048];

int main(int argc, char** argv) {

    puts ("\n\nCrisp Version 0.0.0.1\n");

    while (1) {
        char *input = readline("\n?> ");
        add_history(input);
        printf("\nYou input: %s\n", input);
        free(input);
    }
    return 0;
}

