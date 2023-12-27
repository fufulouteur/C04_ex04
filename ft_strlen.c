#include <unistd.h>
int ft_strlen(char *str) {
  int position;

  position = 0;
  while (*str++) {
    position++;
  }
  return position;
}
