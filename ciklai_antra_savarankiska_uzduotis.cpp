#include <iostream>
using namespace std;

int main ()
{
    int a, b;
     cout<<"Iveskite skaiciu a: "<<endl;
     cin>>a;
     cout<<"Skaicius a = "<<a<<endl;

     cout<<"Iveskite skaiciu b: "<<endl;
     cin>>b;
     cout<<"Skaicius a = "<<b<<endl;

     if (a>b)
     {
         cout<<"Blogi reziai"<<endl;
     }
     else if (a<b)
        {for (int i=a; i<b; i++)
     {
         cout<<i<<" "<<i*i<<endl;
     }
     }





    return 0;
}
