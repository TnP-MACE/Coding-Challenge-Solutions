#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m,a[100],max=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i] > max)
            max= a[i];
    }
    cin>>m;
    int flag=0;
    for(int j=0; j<m;j++){
        if(a[j]==max){
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"YES";
    else
        cout<<"NO";
    
    return 0;
}

