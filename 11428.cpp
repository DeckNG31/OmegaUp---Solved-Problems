#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

// 1/1/74 -> 1/1/1974
// si xx < 74 -> 20xx
// si xx>= 74 -> 19xx

int main(int argc, char *argv[]) {
	
	char cad[9];
	
	
	// 1/1/74 -> 1/1/aaxx outC[len+1] = cad[len-1]  => 1/1/aax4
	// outC[len] = cad[len-2] => 1/1/aa74
	// outC[len-4] = '1' outC[len-3] = '9'
	//outC[0] = cad[0] , outC[1] = cad[1]
	while(gets(cad)){
	//gets(cad);
	//cout << cad << endl;
    int len = strlen(cad);
	char * outC= new char[len+3];
	if ( ((cad[len-2] - 48)*10 + (cad[len-1] - 48)) < 74 ){
		for(int i = 0 ; i<=(len-1)-2 ; i++){
			outC[i] = cad[i]; 
		}
		outC[len] = cad[len-2];
		outC[len+1] = cad[len-1];
		outC[len-1] = '0';
		outC[len-2] = '2';
	}
	else{
		for(int i = 0 ; i<=(len-1)-2 ; i++){
			outC[i] = cad[i]; 
		}
		outC[len] = cad[len-2];
		outC[len+1] = cad[len-1];
		outC[len-1] = '9';
		outC[len-2] = '1';
	}
	
	cout << outC << endl;
	}
	return 0;
}