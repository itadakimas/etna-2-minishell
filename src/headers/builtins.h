#ifndef IRONSH_BUILTINS_H
#define IRONSH_BUILTINS_H


  ///////////////////////////////////////////////////////
  // INCLUDES
  ///////////////////////////////////////////////////////
  #include <unistd.h>
  #include "../../lib/my/src/headers/my.h"
  #include "env.h"


  ///////////////////////////////////////////////////////
  // CONSTANTS
  ///////////////////////////////////////////////////////
  #define BUILTIN_UNKNOWN 0
  #define BUILTIN_SUCCESS 1
  #define BUILTIN_ERROR   2


  ///////////////////////////////////////////////////////
  // STRUCTURES
  ///////////////////////////////////////////////////////
  struct s_builtin
  {
    char *name;
    int  (*func)(char **commandSplit);
  };


  ///////////////////////////////////////////////////////
  // TYPES
  ///////////////////////////////////////////////////////
  typedef struct s_builtin t_builtin;


  ///////////////////////////////////////////////////////
  // PROTOTYPES
  ///////////////////////////////////////////////////////
  int builtin_cd(char **commandSplit);
  int builtin_env(char **commandSplit);
  int builtin_handle(char **commandSplit);
  int builtin_path(char **commandSplit);
  int builtin_setenv(char **commandSplit);
  int builtin_unsetenv(char **commandSplit);


#endif