#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = numberset/setlength;
    int res = numberset[0];
    
    for (int i = 1; i < setlength; i++)
        res = min(res, numberset[i]);
    s.min = res;
    
    for (int i = 1; i < setlength; i++)
        res = max(res, numberset[i]);
    s.max = res;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
