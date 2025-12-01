#include <stdio.h> 
#include <ctype.h>

int main(void){
  int hours, minutes, t_mins;
  char day_or_night;
  printf("Enter a 24-hour time: ");
  scanf("%d:%d %c", &hours, &minutes, &day_or_night);
  day_or_night = toupper(day_or_night);
  if (day_or_night == 'P') {
    hours = (hours + 12) % 24;
  }
  t_mins = 60 * hours + minutes;
  if (t_mins < 532) {
    printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n"); 
  } else if (t_mins < 631) {
    printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
  } else if (t_mins < 723) {
    printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
  } else if (t_mins < 804) {
    printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
  } else if (t_mins < 893) {
    printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
  } else if (t_mins < 1043) {
    printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
  } else if (t_mins < 1223) {
    printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
  } else {
    printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
  } 
   
  return 0;
}
