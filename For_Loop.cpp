#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int n,m;
    cin>>n>>m;
    string arr[9]={"one","two","three","four","five","six","seven","eight","nine"};
    for(int i=n;i<=m;i++)
    {
        if(i<=9)
        {
            cout<<arr[i-1]<<endl;
        }
        else if(i>9 && i%2==0)
        {
            cout<<"even"<<endl;
        }
        else if(i>9 && i%2 != 0)
        {
            cout<<"odd"<<endl;
        }
    }
    return 0;
}
