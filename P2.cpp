//Name: Varnika Maurya
//PRN: 24070123160
//Experiment No: 9
//program 2
#include <iostream>
using namespace std;
int main() {
    int a=10;
    int *aptr = &a;
    cout<<aptr<<endl;
    aptr++;
    cout<<aptr<<endl;
    return 0;
}

/*
PS C:\Users\DELL\Desktop\C++> g++ l9.cpp -o l9
PS C:\Users\DELL\Desktop\C++> .\l9.exe        
0x60ff08
0x60ff0c
  */
