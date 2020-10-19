#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,credit,sumc=0;
    float sum=0;
    string grade;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>grade;
        cin>>credit;
        sumc+=credit;
        if(grade=="OS"){
            sum+=(10*credit);
        }
        else if(grade=="A+"){
            sum+=(9*credit);

        }
        else if(grade=="A"){
            sum+=(8.5*credit);

        }
        else if(grade=="B+"){
            sum+=(8*credit);

        }
        else if(grade=="B"){
            sum+=(7*credit);

        }
        else if(grade=="C"){
            sum+=(6*credit);

        }
        else if(grade=="P"){
            sum+=(5*credit);

        }
        else{
           sum+=0;

        }
    }
    printf("%.2f",sum/sumc);
    return 0;
}

