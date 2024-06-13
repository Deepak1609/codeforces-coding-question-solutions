#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,x;
    cin>>num;
    int p = 0, n = 0, e = 0, o = 0;
    for(int i = 1; i<=num; i++)
    {
        cin>>x;
        if(x == 0)
        {
            e++;
        }
        else if(x % 2 == 0)
        {
            e++;
            if(x>0)
            {
                p++;
            }
            else
            {
                n++;
            }
        }
        else{
            o++;
            if(x>0)
            {
                p++;
            }
            else
            {
                n++;
            }

        }
    }
    cout<<"Even: "<<e<<endl;
    cout<<"Odd: "<<o<<endl;
    cout<<"Positive: "<<p<<endl;
    cout<<"Negative: "<<n<<endl;
    return 0;
}
