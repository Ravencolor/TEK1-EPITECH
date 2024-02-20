/*
** EPITECH PROJECT, 2023
** B-PSU-200-LIL-2-1-42sh-enzo.boron
** File description:
** 42sh
*/

#include "libmy.h"
#include <signal.h>
#include <sys/wait.h>
#include <time.h>
#include <termios.h>
#include <glob.h>

#ifndef SH_H_
    #define SH_H_
    #define POINV (';')
    #define PWD ("PWD=")
    #define HOME ("HOME=")
    #define PATH ("PATH=")
    #define USER ("USER=")
    #define OLDPWD ("OLDPWD=")
    #define NORMAL ("\033[0m")
    #define RED ("\033[31;01m")
    #define BLUE ("\033[34;01m")
    #define CYAN ("\033[36;01m")
    #define GREEN ("\033[32;01m")
    #define WHITHE ("\033[29;01m")

typedef struct pipe_s {
    int i;
    pid_t pid;
    int *pipes;
    int cmd_end;
    int cmd_start;
    int num_pipes;
    int ret_value;
    int pipe_index;
} pipe_t;

typedef struct history_s {
    char *time;
    int last_number;
    char *last_command;
    char **arr_history;
} history_t;

typedef struct history_get_line_s {
    int d;
    int ch;
    int size;
    int count;
    char *tmp;
    int breakk;
    int continu;
} history_get_line_t;

typedef struct shell_s {
    char **arr_command;
    int and_status;
    int or_status;
    char **arr_line;
    int i;
    char *tmp;
    char *tmp2;
} shell_t;

// all value
int i_static(int nb);
int return_value(int nb);
char static_char(char c);
int nbr_pass(int nouveauNombre);

// fonction
int have_or(char *line);
int have_and(char *line);
void my_putstr_error(char *str);
void clean_arr(char **arr_line);
char *transfer_in_maj(char *str);
int were_is_the_path(char **env, char *search);
char *my_get_line(char **arr_path, char **env);
char *set_variable(char *arr_line, char **env);
char *my_search_in_env(char **env, char *search);
int search_return_value(char **arr, int i, int j, char *tmp);
void error_redirection(char **arr_line, char *outfile, int i);

// Pipes
int count_pipe(char **arr_line);
void first_part_pipes(pipe_t *pip, char **arr_line);
void pipe_function(char **arr_line, char **arr_path, char **env);
void do_the_pipe(pipe_t *pip, char **arr_line, char **arr_path, char **env);

// Redirection
void simple_redirection(char *outfile);
char *redirect(char **arr_line, int *i);

// cd
int my_cd(char **env, char **arr_line);
int cd_drawn(char **env, char **arr_line);
void cd_setenv_alter(char **env, char *str, char *str2);
int my_setenv_cd(char **env, char *value, char *env_path);

// my_echo
int my_echo(char **arr_line);

// setenv
int my_setenv(char **env, char **arr_line);
int the_arg_available(char **env, char **arr_line);
int the_arg_anvailable(char **env, char **arr_line);

// alias
int my_unalias(char **arr_line);
int my_alias_create(char **arr_line);
int allias(char **env, char **arr_line, char **arr_path);

// Implement functions
int my_unsetenv(char **env, char **arr_line);
int fonction(char **env, char **arr_line, char **arr_path);

// Main functions
void shell(char **env);
int segfault(pid_t pid);
void my_prompt(char **env);
char *verif_quotes(char *arr_line, int *have_dquote);
void my_execve(char **arr_line, char **arr_path, char **env);
int exec_ve(char **arr_line, char **arr_path, char **env, int i);
char *globbing(char *arr_line);

// Histoy
int getch_char(void);
void set_time(history_t *history);
void all_free(history_t *history);
int open_history(history_t *history);
int my_print_history(char **arr_line);
char *my_getline(char *line, int *len);
void add_history(const char *arr_line);
char *move_get(history_get_line_t *histo, char *line);
void print_in_file(history_t *history, const char *arr_line, int i, int fd);

#endif /* !SH_H_ */
