#include "stats.h"
#include "math.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = numberset/setlength;
    if (s.average = 0)
    {
        return NaN;
    }
    int res = numberset[0];
    
    for (int i = 1; i < setlength; i++)
    {
        res = min(res, numberset[i]);
    }
    s.min = res;
    
    for (int i = 1; i < setlength; i++)
    {
        res = max(res, numberset[i]);
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
