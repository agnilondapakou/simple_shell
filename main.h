#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>
#include <sys/types.h>

extern char **environ;

/* print to std 1 | 2*/
void _puts(char *str);
void _puts2(char *str);
int _putchar(char c);
int _putchar2(char c);
int print_string(char *str);
int print_string2(char *str);
void print_error(char run, char *cmd, char *msg);

/* principal tasks's funtions */
void handle_ctrld(ssize_t value, char **lineptr);
int handle_exit(char **cmd, char **lineptr);
char *path(char *rep, char *command);
char **token_string(char *command);
char *get_envpath(void);
int launch_one(char **args, char **argv, char *getcmd);
int launch_two(char **args, char **argv);

#endif
