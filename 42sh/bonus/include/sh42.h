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

typedef struct mark_s {
    int i;
    int j;
    int k;
    int l;
} mark_t;

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
char *my_search_in_env(char **env, char *search);

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
int is_in_maj(char *str);
void clean_string(char *str);
char **env_static(char **envp);
int my_echo(char **env, char **arr_line);
int verif_valid_path(char **env, char **arr_line);
int my_echo_path_two(char **arr_line, int i, int j, char *str);

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
int segfault(pid_t pid);
void shell(char **env, int t);
void my_prompt(char **env, float time, int t);
char **verif_marks(char **arr_command);
int exec_ve(char **arr_line, char **arr_path, char **env, int i);
void my_execve(char **arr_line, char **arr_path, char **env);

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
