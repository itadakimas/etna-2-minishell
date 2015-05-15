#ifndef IRONSH_PROMPT_H
#define IRONSH_PROMPT_H

  ///////////////////////////////////////////////////////
  // CONSTANTS
  ///////////////////////////////////////////////////////
  #define PROMPT_BUFFER_SIZE    1024
  #define PROMPT_DEFAULT_STRING "$>"

  ///////////////////////////////////////////////////////
  // PROTOTYPES
  ///////////////////////////////////////////////////////
  void  prompt_init();
  void  prompt_show();
  char  *prompt_read_cmd();

#endif