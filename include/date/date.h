#ifndef DATE_DATE_H
#define DATE_DATE_H
#include <stdint.h>
#include <sys/time.h>
#include <time.h>
typedef struct {
  double seconds;
  double milliseconds;
  double microseconds;
  uint8_t hour;
  uint8_t minute;
  uint8_t day;
  uint8_t month;
  uint32_t year;
  uint32_t timestamp;
} Date;

Date date_now();

Date date_diff(Date *a, Date *b);

void date_format(Date *date, char **str);
#endif
