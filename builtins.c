#include <stdio.h>
#include "main.h"

int rush_cd(char **args) {
  if (args[1] == NULL) {
    fprintf(stderr, "rush: expected argument to 'cd'\n");
  } else {
    if (chdir(args[1]) != 0) {
      perror("rush error");
    }
  }
  return 1;
}

int rush_help(char **args) {
  int i;
  printf("AHHHH HELP ME\r\n");
  return 1;
}

int rush_exit(char **args) {
  return 0;
}
