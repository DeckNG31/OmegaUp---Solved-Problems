#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int n; cin >> n;
	int c = 1;
	for(int i = 0 ; i<n ; i++){
		cout << setfill(' ') << setw(n-i);
		for(int j = 0 ; j<c ; j++){
			cout << '*';
		}
		c+=2;
		cout << endl;
	}
	return 0;
}