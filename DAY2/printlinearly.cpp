#include<iostream>
using namespace std;



void linear(int i, int n)
{

    if( i > n)
    {

        return ;

    }

    cout << i << endl;
    linear(i+1 ,n);

}
int main()

{
    int n;
    cin >> n;

    cout << linear(1,n)<< endl;

}
