//This question was done by mw from a2oJladder Q no-17 while I am practising CP.

#include <iostream>  

using namespace std;  
int main()   {  
    int n,cnt1=0,cnt2=0,a,b;  
    cin>>n;  
    for(int i=0;i<n;i++) {  
        cin>>a>>b;  
        if(a==0) cnt1++;  
        if(b==0) cnt2++;  
    }  
    cnt1=min(n-cnt1,cnt1);  
    cnt2=min(n-cnt2,cnt2);  
    
    cout<<cnt1+cnt2<<endl;  
return 0;  
}  
