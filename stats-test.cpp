#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "stats.h"
#include "stats.c"
#include <stdlib.h>
#include <math.h>
 
 struct s
    {
       float average = 0.0;
    float min = 0.0;
    float max = 0.0;
    
    }; 

TEST_CASE("reports average, minimum and maximum") 
{
 s calc;
 float sum =0;
    int a=0, i =0, j=0;

  float numberset[] = {1.5, 8.9, 3.2, 4.5};
 int setlength = sizeof(numberset) / sizeof(numberset[0]);
 
for ( a = 0 ; a < setlength ; a++)
    {
        sum = sum + numberset[a] ;
    }
  
  float min_no = numberset[0];
  for (i = 1; i < setlength; i++)
  {
      min_no = std::min(min_no, numberset[i]);
  }
  float max_no = numberset[0];
  for (j =1; j < setlength; j++)
  {
    max_no = std::max(max_no, numberset[j]);
  }
   float epsilon = 0.001;
   
  
   calc.average = sum /setlength;
    calc.min = min_no;
    calc.max = max_no;

 REQUIRE(abs(calc.average-4.525) < epsilon);
  REQUIRE(abs(calc.max-8.9) < epsilon);
  REQUIRE(abs(calc.min-1.5) < epsilon);
   
}


TEST_CASE("average is NaN for empty array")
{
 
float numberset[] = {};
 int setlength = sizeof(numberset) / sizeof(numberset[0]);
   float sum =0;
    int a=0, i =0, j=0;
 s num;
 for ( a = 0 ; a < setlength ; a++)
    {
        sum = sum + numberset[a] ;
    }
  
  float min_no = numberset[0];
  for (i = 1; i < setlength; i++)
  {
      min_no = std::min(min_no, numberset[i]);
  }
  float max_no = numberset[0];
  for (j =1; j < setlength; j++)
  {
    max_no = std::max(max_no, numberset[j]);
  }
 num.average = sum /setlength;
    num.min = min_no;
    num.max = max_no;
 
    //All fields of computedStats (average, max, min) must be
    //NAN (not-a-number), as defined in math.h
   REQUIRE(abs(num.average = NAN);
  REQUIRE(abs(num.min= NAN);
  REQUIRE(abs(num.max = NAN);
    //Design the REQUIRE statement here.
    //Use https://stackoverflow.com/questions/1923837/how-to-use-nan-and-inf-in-c
}

/*

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
