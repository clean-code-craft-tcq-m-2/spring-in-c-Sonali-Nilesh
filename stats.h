
//struct Stats compute_statistics(const float* numberset, int setlength);
 

typedef void (*alerter_funcptr)();
int check_and_alert(float maxThreshold, alerter_funcptr alerters[], float max_no);

extern alerter_funcptr emailAlertCallCount;
extern alerter_funcptr ledAlertCallCount;

