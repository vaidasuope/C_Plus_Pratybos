#include <iostream>
using namespace std;

int main ()
{
    for (int i=0; i<20; i+=3)
    {
        cout<<i<<endl;
    }

    for (int i=0; i<20; i++)
    {
        if (i%3==0)
        {
            cout<<i<<endl;
        }
    }


    return 0;
}
