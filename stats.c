#include "stats.h"
#include <math.h>
#include "catch.hpp"
#include <stdlib.h>
#include "stats.h"

Calculation ::  compute_statistics(numberset, setlength)
{
   float sum =0;
    for ( int a = 0 ; a < setlength ; a++)
    {
        sum = sum + numberset[a] ;
    }
   average1 = sum /setlength;
   
   return average1;
   
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
