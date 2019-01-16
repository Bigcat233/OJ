#include <iostream>
#include <math.h>
using namespace std;

bool issushu(int a);
void make_bool_set();
bool sushu[10001];
int main()
{
    make_bool_set();
    int low,high;
    int count_10=1;
    cin>>low;
    cin>>high;
    for(int i=low;i<=high;i++){
        if(sushu[i]){
            if(count_10==10){
                cout<<i<<endl;
                count_10=1;
            }
            else{
                cout<<i<<" ";
                count_10++;
            }
        }
    }
    return 0;
}

bool issushu(int a){
for(int j=2;j<sqrt(a);j++){
    if((a%j)==0)return false;
}
return true;
}

void make_bool_set(){
for(int i=0;i<=10000;i++){
    sushu[i]=issushu(i);
}
}
