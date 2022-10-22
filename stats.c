#include "stats.h"
#include <math.h>
#include "catch.hpp"
#include <stdlib.h>
#include "stats.h"





int check_and_alert(float maxThreshold, alerter_funcptr alerters[], float max_no)
{
   alerter_funcptr alerters [] = { 0, 0};
   
int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
   
    
     if (max_no > maxThreshold)
     {
         emailAlertCallCount = 1;
          ledAlertCallCount =1;
     }
    
    return alerter_funcptr alerters[emailAlertCallCount,ledAlertCallCount];
   
    
}
