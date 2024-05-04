#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int x , y , z; cin >> x >> y >> z;
	int movs = 0;
	if(x>y){
		//movs++;
		if(y>z){
			movs++;
		}
		else if(y<z){
			movs++;
			if(x>z){
				movs++;
			}
		}
	}
	else if(x<y){
		if(y>z){
			movs++;
		if(x>z){
			movs++;
		}
		}
	}
	cout << movs;
	return 0;
}