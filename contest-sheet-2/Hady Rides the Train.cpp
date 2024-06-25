#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,row,column;
    cin>>n;
    row = n / 4;
    column;
    if(row % 2 == 0)
    {
        column = n % 4;
    }
    else{
        column = 3 - (n % 4);
    }
    cout<<row<<" "<<column<<endl;
    return 0;
}
