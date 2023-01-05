#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED

typedef struct {int value; } Hour;
typedef struct {int value; } Minute;
typedef struct {int value; } Second;

struct Clock{
    Hour HH;
    Minute MM;
    Second SS;
};

//Validator
bool IsValid(int HH, int MM, int SS);
//Constructor
Clock MakeClock(int HH, int MM, int SS);
//Selector
Hour GetHour(Clock c);
Minute GetMinute(Clock c);
Second GetSecond(Clock c);
//Value Changer
void SetHour(Clock &c, int newHH);
void SetMinute(Clock &c, int newMM);
void SetSecond(Clock &c, int newSS);
//Relational Operation
bool IsEqual(Clock c1, Clock c2);
//Arithmetic Operation
Clock AddClock(Clock c1, Clock c2);
//Output Process
void PrintClock(Clock c);

#endif // CLOCK_H_INCLUDED
