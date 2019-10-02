#include "types.h"
#include "user.h"
#include "date.h"

int
main(int argc, char *argv[])
{
  struct rtcdate r;

    if (date(&r)) {
    printf(2, "date failed\n");
    exit();
  }

  if(r.minute+30>59){
      r.hour += 0;
      //r.minute = r.minute+50-59;
  }
  else{
      r.hour += 0;
      //r.minute = r.minute+30;
  }
  if(r.hour>=24)
        r.hour -= 24;

  printf(1,"The current UTC time is: %d:%d:%d \n",r.hour,r.minute,r.second);

  exit();
}
