//sum of first n natural numbers using recursion

#include <iostream>
using namespace std;

int sumof(int n){

        if(n==0){
            return 0;
        }

        return n + sumof(n-1);  
}


int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;

    cout<<sumof(n);
    return 0;
}