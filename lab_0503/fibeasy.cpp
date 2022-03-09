#include <iostream>

using namespace std;

int myfunc(int n){
    int ar_st[3] = {0,1,1};
    if(n < 3){
        return ar_st[n];
    }else{
        for(int i = 0; i < n;i++){
            ar_st[i % 3] = ar_st[(i+1)%3]+ar_st[(i+2)%3];
        }
        return ar_st[n%3];
    }
}

int main()
{
    // int n;
    
    
    // cout<<"Enter N ";
    // cin >> n;
    
    
    
    // cout<<myfunc(n)<<endl;
    
    cout<<myfunc(12)<<endl;
    

    return 0;
}