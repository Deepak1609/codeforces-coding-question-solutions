#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;

   int digits = (int)log10(n);

    // Find first digit
    int a = (int)(n / pow(10, digits));

    // Return first digit
    if(a%2 == 0)
    {
        cout<<"EVEN"<<endl;
    }
    else
    {
        cout<<"ODD"<<endl;
    }
}






