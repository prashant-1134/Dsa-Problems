// reverse a number

/*
1. find last digit - num % 10; -> store it in new number 

2. divide number / 10 and get integral part (so we have exculded last digit)

3. repeat this process till num > 0 (using while loop)

NOTE ===  1200 -> 21(as leading zeros are drop in int)

*/


#include<bits/stdc++.h>
using namespace std;

int reverse_num(int n){
    
    long long revNo = 0;
    
    while(n>0){
        
        int rem = n % 10;
        
        revNo = revNo * 10 + rem;
        
        n = n/10;
        
        
    }
    
    return revNo;
}


int main(){
    
    int n;
    
    cin>>n;
    
    long long result = reverse_num(n);
    
    cout<<result;
    
}