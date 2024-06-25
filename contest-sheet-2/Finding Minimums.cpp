#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k,a;
    cin>>n>>k;
    int min;
    int flag = 1;
    int counter = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>a;
        if(flag)
        {
            min = a;
            flag = 0;
        }
        else
        {
            if(a<min)
            {
                min = a;
            }
        }
        counter++;
        if(counter == k || i == (n-1))
        {
            cout<<min<<" ";
            counter = 0;
            flag = 1;
        }

    }


    return 0;
}

