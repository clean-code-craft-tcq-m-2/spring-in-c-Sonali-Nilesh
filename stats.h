
//struct Stats compute_statistics(const float* numberset, int setlength);
   Class calculation
    {
    public:
    float numberset[] = {1.5, 8.9, 3.2, 4.5};
    int setlength = sizeof(numberset) / sizeof(numberset[0]);
    compute_statistics(numberset, setlength);
    float average1 = 0.0;
    float min = 0.0;
    float max = 0.0;
    
    
    };

/*typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);

extern int emailAlertCallCount;
extern int ledAlertCallCount;
*/
