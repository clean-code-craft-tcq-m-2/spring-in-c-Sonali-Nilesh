#include "stats.h"
#include <math.h>
#include "catch.hpp"
#include <stdlib.h>
#include "stats.h"





int check_and_alert(float maxThreshold, int alerters[], float max_no)
{
   

   
    
     if (max_no > maxThreshold)
     {
         emailAlertCallCount = 1;
          ledAlertCallCount =1;
     }
   
    
    return alerters[emailAlertCallCount,ledAlertCallCount];
   
    
}
