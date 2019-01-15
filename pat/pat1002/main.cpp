#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    long long int result0=0,result1=0;
    float result3=0.0;
    cin>>n;
    int flag=1;
    long long int digital[n],A1[n],A3[n],A4[n],A0[n];
    int a1=0;
    int a2=0;
    int a3=0;
    int a4=0;
    int a0=0;
    for(int i=0;i<n;i++){
        cin>>digital[i];
        cout<<digital[i]<<"A0"<<endl;
    }
    for(int i=0;i<n;i++){
        switch(digital[i]%5){
        case 0:
            if(!digital[i]%2){
                A0[a0]=digital[i];cout<<digital[i]<<"A0"<<endl;
                a0++;break;}
            break;
        case 1:
            A1[a1]=digital[i];
            a1++;break;
        case 2:
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
    if(a0==0){
        cout<<"N ";
    }
    else{
        for(int i=0;i<a0;i++){
            result0+=A0[i];
        }
        cout<<result0<<" ";
    }



    if(a1==0){
        cout<<"N ";
    }
    else{
        for(int i=0;i<a1;i++){
            result1+=flag*A1[i];
            flag=-1*flag;
        }
        cout<<result1<<" ";
    }



    if(a2==0){
        cout<<"N ";
    }
    else{
        cout<<a2<<" ";
        }


    if(a3==0){
        cout<<"N ";
    }
    else{
        for(int i=0;i<a0;i++){
            result3+=A3[i];
        }
        float format = result3/a3;
        cout<<fixed<<setprecision(1)<<format<<" ";
    }

    if(a4==0){
        cout<<"N"<<endl;
    }
    else{
        cout<<*max_element(A4,A4+a4)<<endl;
        }
    return 0;
}
//10 348 344 986 351 131 514 50 162 126 768
//50 640 1 558.0 514
