#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    
    //static array allocation
    int A[5] = {2,4,6,8,10};
    //dynamic array allocation
    int *p;
    
    int i;
    
    p = new int[5];
    
     p[0]= 1;
     p[1]= 3;
     p[2]= 7;
     p[3]= 9;
     p[4]= 5;
     
    // printing the static array
    for(i=0;i<5;i++){
    cout<<A[i];}
    cout<<endl;
    // printing the dynamic array
    for(i=0;i<5;i++){
    cout<<p[i];}
    
     return 0;
}
