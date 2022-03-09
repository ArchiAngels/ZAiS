#include <iostream>

using namespace std;

int myfunc(int n,int m){
    int ar_st[3] = {0,1,1};
    if(n < 3){
        return ar_st[n] % m;
    }else{
        for(int i = 0; i < n;i++){
            ar_st[i % 3] = ar_st[(i+1)%3]+ar_st[(i+2)%3];
        }
        return ar_st[n%3] % m;
    }
}

int main()
{
    // int n,m;
    
    
    // cout<<"Enter N ";
    // cin >> n;
    
    // cout<<"Enter M ";
    // cin >> m;
    
    
    
    // cout<<myfunc(n,m)<<endl;
    
    cout<<myfunc(1,10)<<endl;
    cout<<myfunc(2,10)<<endl;
    cout<<myfunc(3,10)<<endl;
    
    cout<<myfunc(4,25)<<endl;
    cout<<myfunc(5,25)<<endl;
    cout<<myfunc(6,25)<<endl;
    
    cout<<myfunc(7,27)<<endl;
    cout<<myfunc(8,29)<<endl;
    cout<<myfunc(9,31)<<endl;
    
    cout<<myfunc(10,33)<<endl;

    return 0;
}