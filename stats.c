#include "stats.h"
#include <math.h>
#include "catch.hpp"
#include <stdlib.h>

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    float s.average = 0.0;
    float s.min = 0.0;
    float s.max = 0.0;
    
    if (numberset[]== 0 && setlength ==0)
    {
    s.average = NAN;
    }
    
    float sum =0;
    for ( int a = 0 ; a < = setlength ; a++)
    {
        sum = sum + numberset[a] ;
    }
    
    s.average = sum /setlength;
    
    
    float min_no = numberset[0];
    
    for (int i = 1; i < = setlength; i++)
    {
      min_no = std::min(min_no, numberset[i]);
    }
    s.min = min_no;
    
    float max_no = numberset[0];
    for (int j =1; j < = setlength; j++)
    {
        max_no = std::max(max_no, numberset[j]);
    }
    s.max = max_no;
}
/*
int check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
   
    
     if (computedStats.max > maxThreshold)
     {
         emailAlertCallCount = 1;
          ledAlertCallCount =1;
     }
    
    return emailAlertCallCount;
    return ledAlertCallCount;
    
}*/
