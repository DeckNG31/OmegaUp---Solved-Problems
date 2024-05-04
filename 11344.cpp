#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	
	
	int x , y; 
	int dif = 0;
	int cont = 0;
	cin >> x;
	if(x!=-1) cin >> y;
	if(x!=-1 && y!=-1){
		if(x%2==0 && y%2==0) cont++;
		dif= abs(x-y);
	}
	while(x!=-1 && y!=-1){
		cin >> x;
		if(x!=-1){
		cin >> y;
		if(x!=-1 && y!=-1){
			if(x%2==0 && y%2==0) cont++;
			if(abs(x-y)<dif) dif = abs(x-y);
		}
		}
	}
	cout << cont << endl << dif;
	return 0;
}