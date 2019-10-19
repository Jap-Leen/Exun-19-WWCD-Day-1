// Given a number n, check whether it is a prime number or not.
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n = 0;
	bool result = true;
	cin>>n;
    for(int i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            result = false;
        }
    }
    if(result == true)
    {
        cout<< n << " is a prime number."<<endl;
    }
    else
    {
        cout<< n <<" is not a prime number."<<endl;
    }
	return 0;
}
