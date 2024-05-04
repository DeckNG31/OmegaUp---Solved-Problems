#include <iostream>
#include <iomanip>
using namespace std;
double aproximacionPi4 (int t);
int main(int argc, char *argv[]) {
	int n; cin >> n;
    cout << fixed << setprecision(8) << 4*aproximacionPi4(n);
	return 0;
}

double aproximacionPi4 (int t){
	double pi4 = 0;
	double c = 1;
	for(int i = 1 ; i<=t ; i++){
		if(i%2!=0){
			pi4 = pi4 + (1/c);
		}
		else if(i%2==0){
			pi4 = pi4 - (1/c);
		}
		c+=2;
	}
	return pi4;
}