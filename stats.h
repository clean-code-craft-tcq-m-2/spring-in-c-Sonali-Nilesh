
struct Stats compute_statistics(const float* numberset, int setlength);

typedef void (*alerter_funcptr)();
int check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);

extern int emailAlertCallCount;
extern int ledAlertCallCount;
