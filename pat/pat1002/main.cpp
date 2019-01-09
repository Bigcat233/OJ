#include <iostream>

using namespace std;

int main()
{
    int n;
    int result1,result2,resulut3,reslut5;
    cin>>n;
    int digital[n],A1[n],A2[n],A3[n],A4[n],A0[n];
    int a1=0;
    int a2=0;
    int a3=0;
    int a4=0;
    int a0=0;
    for(int i=0;i<n;i++){
        switch(digital[i]%5){
        case 0:
            A0[a0]=digital[i];
            a0++;break;
        case 1:
            A1[a1]=digital[i];
            a1++;break;
        case 2:
            A2[a2]=digital[i];
            a2++;break;
        case 3:
            A3[a3]=digital[i];
            a3++;break;
        case 4:
            A4[a4]=digital[i];
            a4++;break;
        default:break;
        }
    }
    for(int i =0;i<a0;i++){

    }

}
