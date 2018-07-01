#include<iostream>
using namespace std;
int largest(int,int);
int main()
{
    int a,b,c,p;
    cin>>a>>b>>c;
    p=largest(a,b);
    cout<<"the largest of three numbers is:"<<largest(p,c);
    return 0;
}
int largest(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}



