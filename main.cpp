#include "bits/stdc++.h"
using namespace std;

void sieve(int n)
{
    // ? create boolean array
    bool prime[n+1];
    memset(prime, true, sizeof(prime)); 

    for(int p=2;(p*p)<=n;p++)
    {
        // ? If prime[p] ---> False ---> not a prime number

        if(prime[p]==true)
        {
            for(int i=(p*p);i<=n;i=i+p)
                prime[i]=false;
        }
    }

    // ? Print prime numbers
    cout<<endl<<"Prime numbers till "<<n<<" are\n"; 
    for(int i=2;i<=n;i++)
    {
        if(prime[i] == true)
            cout<<i<<" ";
    }
}   
int main()
{
    int n;
    cout<<"Enter the delimiter value: "; 
    cin>>n;
    sieve(n);
    
    return 0;
}