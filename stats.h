
//struct Stats compute_statistics(const float* numberset, int setlength);
 

typedef void (*alerter_funcptr)();
int check_and_alert(float maxThreshold, alerter_funcptr alerters[emailAlerter, ledAlerter], float max_no);

extern int emailAlertCallCount;
extern int ledAlertCallCount;

