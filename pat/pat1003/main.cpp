#include <iostream>
#include <math.h>
using namespace std;

bool issushu(int a);

int main()
{
    int low,high;
    cin>>low;
    cin>>high;
    int count_num=0;
    int count_10=1;
    int i=2;
    while(count_num<high){
       while(count_num<low-1){
            if(issushu(i))count_num++;
            i++;
       }
       if(issushu(i)){
        if(count_10==10){
            cout<<i<<endl;
            count_10=1;
        }
        else{
            cout<<i;
            if(!(count_num==high-1)){
                cout<<" ";
            }
            count_10++;
        }
       count_num++;
       }
       i++;
    }
    return 0;
}

bool issushu(int a){
for(int j=2;j<=sqrt(a);j++){
    if((a%j)==0)return false;
}
return true;
}

