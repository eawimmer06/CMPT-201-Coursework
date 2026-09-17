/*
 EA Wimmer
 301613765
 CMPT 201
 Lab1
*/
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char *line = NULL;
  size_t size = 0;
  const char *divide = " ";
  char *save = NULL;
  char *token = NULL;

  printf("Enter a phrase(press enter to quit): ");
  while (getline(&line, &size, stdin) > 1) {
    token = strtok_r(line, divide, &save);
    while (token != NULL) {
      printf("%s\n", token);
      token = strtok_r(NULL, divide, &save);
    }
    printf("Enter a phrase(press enter to quit): ");
  }

  free(line);
  return 0;
}
