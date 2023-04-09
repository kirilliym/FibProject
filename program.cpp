#include <iostream>
#include <vector>

using namespace std;


int main(){
	cout << "Hello, world!" << endl;
	cout << "n = ";
	int n; cin >> n;
	vector<int> fib(n+1);
	fib[1] = 0; fib[2] = 1;
	for(int i = 3; i < n+1; i++) fib[i] = fib[i-1] + fib[i-2];
	for(int i = 1; i < n+1; i++) cout << fib[i] << endl;
}
