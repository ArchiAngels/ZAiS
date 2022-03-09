#include <iostream>

using namespace std;

int myfunc(int a,int b,int m){
    int result = 1;


    if(b == 0){
        return result % m;
    }

    else if(b == 1){
        return a % m;
    }
    
    else{
        for(int i = 0; i < b;i++){
            result = result * a;
        }
        return result % m;
    }
}

int main()
{
    // int a,b,m;
    
    // cin >> a;
    // cin >> b;
    // cin >> m;

    cout << myfunc(3,2,10) << endl;
    cout << myfunc(4,3,10) << endl;

    
    

    return 0;
}