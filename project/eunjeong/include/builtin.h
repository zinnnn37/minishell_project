#ifndef BUILTIN_H
# define BUILTIN_H

// builtin.c
void	handler_builtins(char *cmd);
int	    is_builtin(char *cmd);
char    **check_argv(void);

// builtin_exec.c
int	    ft_exec_pwd(void);

// pwd.c
void	ft_pwd(void);

// echo.c
int	    ft_exec_echo(void);

// exit.c
void	ft_exec_exit(void);

// env.c
void    ft_env(void);
void    ft_exec_env(void);

// cd.c
void    ft_exec_cd(void);
void	ft_cd(void);

// export.c
void	ft_exec_export(void);
void    ft_export(void);

// exec.c
void	ft_exec_execve(void);
void    ft_execve(void);


// unset.c
void	ft_exec_unset(void);
void    ft_unset(void);

#endif