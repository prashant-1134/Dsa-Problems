// using reverse() method, 2-pointer approach + swap(method)


#include<bits/stdc++.h>
using namespace std;

string reverse_string(string s){
    
    
    // Method : 1
    
    
    // int i=0;
    // int j = s.size()-1;
    
    
    
    // while(i<j){
        
    //     char temp;
        
    //     temp = s[i];
        
    //     s[i] = s[j];
        
    //     s[j] = temp;
        
        
        
        
    //     i++;
    //     j--;
    // }
    
    
    // method 2 - reverse method (iterator)
    
    reverse(s.begin(), s.end());
    
    return s;
    
    //method 3 
    
   // while(i<j){
        
        // swap(s[i],s[j]);
        
        
    //     i++;
    //     j--;
    // }
    
}

int main(){
    
    string s;
    
    cin>>s;
    
    
    string result = reverse_string(s);
    
    cout<<result;
}