#ifndef IRONSH_ENV_H
#define IRONSH_ENV_H


  ///////////////////////////////////////////////////////
  // INCLUDES
  ///////////////////////////////////////////////////////
  #include <stdbool.h>


  ///////////////////////////////////////////////////////
  // STRUCTURES
  ///////////////////////////////////////////////////////
  struct                    s_env_variable
  {
    char*                   name;
    char*                   value;
    struct s_env_variable*  next;
  };


  ///////////////////////////////////////////////////////
  // TYPES
  ///////////////////////////////////////////////////////
  typedef struct s_env_variable t_env_variable;


  ///////////////////////////////////////////////////////
  // PROTOTYPES
  ///////////////////////////////////////////////////////
  bool              env_set_var(char *name, char *value);
  char**            env_get_array();
  t_env_variable*   env_get_list();
  t_env_variable*   env_get_var(char *name);
  void              env_free_list();
  void              env_print_var(char *name);
  void              env_unset_var(char *name);


#endif
