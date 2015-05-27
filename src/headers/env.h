#ifndef IRONSH_ENV_H
#define IRONSH_ENV_H

  ///////////////////////////////////////////////////////
  // INCLUDES
  ///////////////////////////////////////////////////////
  #include <stdbool.h>
  #include <stdlib.h>
  #include "../../lib/my/src/headers/my.h"

  ///////////////////////////////////////////////////////
  // STRUCTURES
  ///////////////////////////////////////////////////////
  struct                  s_env_variable
  {
    char                  *name;
    char                  *value;
    struct s_env_variable *next;
  };


  ///////////////////////////////////////////////////////
  // TYPES
  ///////////////////////////////////////////////////////
  typedef struct s_env_variable t_env_variable;


  ///////////////////////////////////////////////////////
  // PROTOTYPES
  ///////////////////////////////////////////////////////
  bool            env_set_var(char *name, char *value);
  void            env_free_list();
  void            env_print_var(char *name);
  void            env_unset_var(char *name);
  t_env_variable  *env_get_list();
  t_env_variable  *env_get_var(char *name);
  char            **env_get_array();

#endif