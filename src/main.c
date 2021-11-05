#include <date/date.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  Date date = date_now();

  Date date2 = date_now();

  for (int i = 0; i < 10000; i++) { printf("\r"); }

  Date diff = date_diff(&date2, &date);

  char *str = 0;
  date_format(&diff, &str);

  if (str) {
    printf("%s\n", str);
  }

  printf("%12.6f\n", diff.milliseconds_static);

  return 0;
}
