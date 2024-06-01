#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string a;
  string b;
  int found =0;
  
  cin>>a;
  cin>>b;
  
  int n1 = a.length();
  int n2 = b.length();
  
  string c  = a+b;
  
  char temp = a[0];
  a[0]=b[0];
  b[0]=temp;
    cout<<n1<<" "<<n2<<endl;
    cout<<c<<endl<<a<<" "<<b;
    return 0;
}
