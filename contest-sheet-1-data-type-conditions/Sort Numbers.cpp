#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long a,b,c;
   cin>>a>>b>>c;
   if(a>=b && a>=c)
   {
       if(b>=c)
       {
           cout<<c<<endl;
           cout<<b<<endl;
           cout<<a<<endl;
       }
       else
       {
           cout<<b<<endl;
           cout<<c<<endl;
           cout<<a<<endl;
       }
   }

   else if(b>=a && b>=c)
   {
       if(a>=c)
       {
           cout<<c<<endl;
           cout<<a<<endl;
           cout<<b<<endl;
       }
       else
       {
           cout<<a<<endl;
           cout<<c<<endl;
           cout<<b<<endl;
       }
   }
   else
   {
       if(b>=a)
       {
           cout<<a<<endl;
           cout<<b<<endl;
           cout<<c<<endl;
       }
       else
       {
           cout<<b<<endl;
           cout<<a<<endl;
           cout<<c<<endl;
       }
   }

   cout<<endl;

   cout<<a<<endl;
   cout<<b<<endl;
   cout<<c<<endl;



  return 0;
}

