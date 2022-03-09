#include <iostream>

using namespace std;

int myfunc(int n){
    int result = 1;
    if(n <= 2){
        return n;
    }else{
        for(int i = n; i > 1;i--){
            result = result * i;
        }
        return result;
    }
}

int main()
{
    // int n;
    
    // cin>> n;
    
    for(int i = 1;i<=10;i++){
        cout<<"INPUT::"<<i<<" OUTPUT::"<< myfunc(i) <<endl;   
    }

    
    

    return 0;
}