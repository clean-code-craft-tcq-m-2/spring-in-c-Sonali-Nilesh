#include "stats.h"
#include "math.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    int sum =0;
    for ( int a = 0 ; a < = setlength ; i++)
    {
        sum = sum + numberset[a] ;
    }
    
    s.average = sum /setlength;
    
    if (s.average == 0)
    {
        return NaN;
    }
    int res = numberset[0];
    
    for (int i = 0; i < = setlength; i++)
    {
        res = min(res, numberset[i]);
    }
    s.min = res;
    
    for (int j =0; j < = setlength; j++)
    {
        res = max(res, numberset[j]);
    }
    s.max = res;
}

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
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
    
}
