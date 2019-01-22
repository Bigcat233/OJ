#include <iostream>
#include <sstream>
using namespace std;
long long int a;
long long int b;
int main()
{
    cin>>a;
    cin>>b;
    stringstream sstr;
    sstr << a+b;
    string c = sstr.str();
    int p=0;
    int count_num=0;
    int length=c.length();
    if(c[0]=='-'){
            cout<<'-';
            p++;
            length--;}
    /*for(p;p<=(length%3);p++){
        cout<<c[p];
    }*/
    for(int i=0;i<(length%3);i++){
        cout<<c[p];
        p++;
        if(i==(length%3)-1) cout<<',';
    }
    for(p;p<=length;p++){
        if(count_num==3){
            cout<<',';
            cout<<c[p];
            count_num=0;
        }
        else{
            cout<<c[p];
            count_num++;
        }
    }
    return 0;
}
