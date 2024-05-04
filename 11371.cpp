#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a , b;
	int suma = 0;
	bool tf = false;
	do{
		cin >> a;
		if(a!=-1){
			cin >> b;
			if(b!=-1){
				if((a+b)>suma) suma = (a+b);
				if(a==b && a%2!=0 && b%2!=0) tf = true;
			}
		}
		
	} while(a!=-1 and b!=-1);
	cout << suma << endl;
	if(tf) cout << "SI";
	else cout << "NO";
	return 0;
}