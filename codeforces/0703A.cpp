#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t,a=0,b=0;
    cin>>i;
    for(t=1;t<=i;t++)
    {
        int c,d;
        cin>>c>>d;
        a=a+c;
        b=b+d;
    }
    if(a>b)
        cout<<"Mishka";
    else if (b>a)
        cout<<"Chris";
    else
        cout<<"Friendship is magic!^^";
        return 0;
}
