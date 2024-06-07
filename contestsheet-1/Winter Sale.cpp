#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {

    float x, p,result;

    cin>>x>>p;

    result = p/(1-(x/100.0));

    cout<<fixed<<setprecision(2)<<result<<endl;


    return 0;
}
