// [4:29 PM, 8/8/2020] Rutuja:
#include <iostream>
using namespace std;


int main()
{
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;

    for(int i=1;i<=rows;++i)
    {
        for(int j=1;j<=4;++j)
        {
            cout<<" # ";
        }
        cout<<"\n";
    }
    return 0;
}
