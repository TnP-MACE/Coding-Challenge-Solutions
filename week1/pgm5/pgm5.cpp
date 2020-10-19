#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int tot=5892,rec=3454,dead=27,cc=2411,n,r,d;
    do{
        cin>>n>>r>>d;
        tot+=n;
        rec+=r;
        dead+=d;
        cc+=(n-r-d);
        if(cc<0){
            cout<<"WRONG";
            break;
        }
        cout<<tot<<endl;
        cout<<rec<<endl;
        cout<<dead<<endl;
        cout<<cc<<endl;
        if(cc==0){
            cout<<"SAFE";
            break;
        }
    }while(1);
    return 0;
}

