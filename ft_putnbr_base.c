#include <stdio.h>
#include <unistd.h>
int ft_strlen(char *str);

void ft_putnbr(int nb, char *base) {
  int n2;
  int base2;

  char tab[10];
  char *str;
  char *str2;

  base2 = ft_strlen(base);
  str = tab;
  str2 = tab;

  if (base == NULL || !*base) {
    return;
  }

  if (nb == 0) {
    write(1, base, 1);
    return;
  }

  if (nb < 0) {
    write(1, "-", 1);
    nb *= -1;
  }

  while (nb != 0) {
    n2 = nb % base2;
    nb = nb / base2;
    *str = base[n2];
    str++;
  }
  while (str >= str2) {
    write(1, &*str, 1);
    str--;
  }
}
