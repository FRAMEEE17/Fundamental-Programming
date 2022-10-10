#include <time.h>
  #include <stdio.h>
  int main(void)
  {
    struct tm *local;
    time_t t;
    t = time(NULL);
    printf("The calendar time expressed as a local Time is :\n");	
    local = gmtime(&t);
    printf("UTC : %s", asctime(local));
    local = localtime(&t);
    printf("local : %s\n", asctime(local));
    return 0;
  }
