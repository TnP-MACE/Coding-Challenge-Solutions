#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int p,n;
    cin>>p>>n;
    int res = 0;
    res = p;
    for(int i=0; i < n-1;i++){
        res=res*0.8;
    }
    cout<<res;
    return 0;
}
