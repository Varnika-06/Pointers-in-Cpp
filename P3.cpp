//Name: Varnika Maurya
//PRN: 24070123160
//Experiment No: 9
//program 3
#include <iostream>
using namespace std;
int main() {
    int a=10;
    int *aptr = &a;
    cout<<*aptr<<endl;
    *aptr = 20;
    cout<<a<<endl;
    int arr[]= {10,20,30};
    cout<<*arr<<endl;
    int *ptr=arr;
    for(int i=0; i<3; i++) {
        cout<<*ptr<<endl;
        ptr++;
    }
    return 0;
}

/*
PS C:\Users\DELL\Desktop\C++> g++ l9.cpp -o l9
PS C:\Users\DELL\Desktop\C++> .\l9.exe        
10
20
10
10
20
30
  */
