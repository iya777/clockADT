#include <iostream>
#include "Clock.h"
using namespace std;

int main()
{
    //Tugas Ppt
    Clock c1, c2;
    bool c3;
    c1 = MakeClock(2,30,4);
    c2 = MakeClock(6,0,0);
    c3 = IsEqual(c1,c2);

    //Extra
    PrintClock(c1);
    PrintClock(c2);
    cout << endl;
    if(c3){
        cout << endl << "Clock 1 sama dengan Clock 2" << endl;
    }
    else{
        cout << endl << "Clock 1 TIDAK sama dengan Clock 2" << endl;
    }
    //Penjumlahan
    cout << endl;
    cout << "Penjumlahan c1 + c2 yaitu:";
    Clock cc = AddClock(c1,c2);
    PrintClock(cc);
    cout << endl;
    return 0;
}
