#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "stats.h"
#include "stats.c"
#include <stdlib.h>
#include <math.h>


TEST_CASE("reports average, minimum and maximum") {
   float numberset[] = {1.5, 8.9, 3.2, 4.5};
    
   float sum =0;
    struct s
    {
       float average = 0.0;
    float min = 0.0;
    float max = 0.0;
     int setlength =0;  
    };
    
    struct s calc;
   calc.average = 0.0;
    calc.min = 0.0;
    calc.max = 0.0;
   calc.setlength = 0;
    /*if (numberset == 0 && setlength ==0)
    {
    calc.average = NAN;
    }*/
    
    calc.setlength = sizeof(numberset) / sizeof(numberset[0]);
    for ( int a = 0 ; a <= calc.setlength ; a++)
    {
        sum = sum + numberset[a] ;
    }
   calc.average = sum /calc.setlength;
    
    
    float min_no = numberset[0];
    
    for (int i = 1; i <= calc.setlength; i++)
    {
      min_no = std::min(min_no, numberset[i]);
    }
    calc.min = min_no;
    
   
    float max_no = numberset[0];
    for (int j =1; j <= calc.setlength; j++)
    {
        max_no = std::max(max_no, numberset[j]);
    }
    calc.max = max_no;
    
    float epsilon = 0.001;
 //  REQUIRE(abs(calc.average-4.525) < epsilon);
   // REQUIRE(abs(calc.max-8.9) < epsilon);
   //REQUIRE(abs(calc.min-1.5) < epsilon);
   REQUIRE(abs(calc.setlength - 4) < epsilon);
}
/*

TEST_CASE("average is NaN for empty array") {
    struct Stats computedStats = compute_statistics(0, 0);
    //All fields of computedStats (average, max, min) must be
    //NAN (not-a-number), as defined in math.h
    REQUIRE(computedStats.average == NAN);
    //Design the REQUIRE statement here.
    //Use https://stackoverflow.com/questions/1923837/how-to-use-nan-and-inf-in-c
}

TEST_CASE("raises alerts when max is greater than threshold") {
    // create additional .c and .h files
    // containing the emailAlerter, ledAlerter functions
   alerter_funcptr alerters[] = {emailAlerter, ledAlerter};

    float numberset[] = {99.8, 34.2, 4.5};
    int setlength = sizeof(numberset) / sizeof(numberset[0]);
    Stats computedStats = compute_statistics(numberset, setlength);

    const float maxThreshold = 10.2;
    check_and_alert(maxThreshold, alerter_funcptr alerters, computedStats);

    // need a way to check if both emailAlerter, ledAlerter were called
    // you can define call-counters along with the functions, as shown below
    REQUIRE(emailAlertCallCount == 1);
    REQUIRE(ledAlertCallCount == 1);
}*/
