#include "Clock.h"
#include <iostream>
using namespace std;
//Validator
bool IsValid(int HH, int MM, int SS){
    return (HH >= 0 && HH <= 23) && (MM >= 0 && MM <= 23) && (SS >= 0 && SS <= 23);
}
//Constructor
Clock MakeClock(int HH, int MM, int SS){
    Clock c;
    c.HH.value = HH;
    c.MM.value = MM;
    c.SS.value = SS;
    return c;
}
//Selector
Hour GetHour(Clock c){
    return c.HH;
}
Minute GetMinute(Clock c){
    return c.MM;
}
Second GetSecond(Clock c){
    return c.SS;
}
//Value Changer
void SetHour(Clock &c, int newHH){
    c.HH.value = newHH;
}
void SetMinute(Clock &c, int newMM){
    c.MM.value = newMM;
}
void SetSecond(Clock &c, int newSS){
    c.SS.value = newSS;
}
//Relational Operation
bool IsEqual(Clock c1, Clock c2){
    return (c1.HH.value == c2.HH.value)
    && (c1.MM.value == c2.MM.value)
    && (c1.SS.value == c2.SS.value);
}
//Arithmetic Operation
Clock AddClock(Clock c1, Clock c2){
    Clock c;
    c.HH.value = c1.HH.value + c2.HH.value;
    c.MM.value = c1.MM.value + c2.MM.value;
    c.SS.value = c1.SS.value + c2.SS.value;

    if(c.HH.value >= 24){
        c.HH.value -= 24;
    }
    if(c.MM.value >= 60){
        c.MM.value -= 60;
    }
    if(c.SS.value >= 60){
        c.SS.value -= 60;
    }
    return c;
}
//Output Process
void PrintClock(Clock c){
    cout << endl << "Clock Time: ";
    if (c.HH.value <= 9){
        cout << "0";
    }
    cout << c.HH.value << ":";
    if (c.MM.value <= 9){
        cout << "0";
    }
    cout << c.MM.value << ":";
    if (c.SS.value <= 9){
        cout << "0";
    }
    cout << c.SS.value << ":";
}
