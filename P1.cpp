//Name: Varnika Maurya
//PRN: 24070123160
//Experiment No: 9
#include <iostream>
using namespace std;
int main() {
    int a=10;
    int *aptr = &a;
    cout<< "Value of a: " << a << endl;
    cout<< "Address of a: " << &a << endl;
    cout<< "Value of aptr: " << aptr << endl;
    cout<< "Value pointed to by aptr: " << *aptr << endl;
    /*cout<< "Address of aptr: " << &aptr << endl;
    cout<< "Size of a: " << sizeof(a) << " bytes" << endl;
    cout<< "Size of aptr: " << sizeof(aptr) << " bytes" << endl;
    cout<< "Size of pointer to int: " << sizeof(int*) << " bytes" << endl;
    cout<< "Size of pointer to int (aptr): " << sizeof(aptr) << " bytes" << endl;
    cout<< "Size of int: " << sizeof(int) << " bytes" << endl;*/
    return 0;
}

/*
PS C:\Users\DELL\Desktop\C++> g++ l9.cpp -o l9
PS C:\Users\DELL\Desktop\C++> .\l9.exe        
Value of a: 10
Address of a: 0x60ff08
Value of aptr: 0x60ff08
Value pointed to by aptr: 10
  */
