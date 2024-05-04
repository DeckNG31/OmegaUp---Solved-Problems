#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	bool flagi1 = false, flagi2 = false, flagj1 = false , flagj2 = false;
	srand(time(NULL));
	int n , m;
	cin >> n >> m;
	int **M = new int *[n];
	int **M2 = new int *[n];
	for(int i = 0 ; i<n ; i++){
		M2[i] = new int[m];
	}
	for(int i = 0 ; i<n ; i++){
		M[i] = new int[m];
		for(int j = 0 ; j<m ; j++){
			cin >>  M[i][j];
		}
	}
	
	//for(int i = 0 ; i<n ; i++){
	//	for(int j = 0 ; j<m ; j++){
	//		cout << M[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	//cout << endl << endl;
	int counter = 0;
	for(int i = 0 ; i<n ; i++){
		for(int j = 0 ; j<m ; j++){
		
		
		if(j-1<0) flagj1 = true;
		if(j+1>=m) flagj2 = true;
		if(i-1<0) flagi1 = true;
		if(i+1>=n) flagi2 = true;
		
		
		if(!flagj1){
			counter = counter + M[i][j-1];
			if(!flagi1) counter = counter + M[i-1][j-1];
			if(!flagi2) counter = counter + M[i+1][j-1];
		}
		
		if(!flagj2){
			counter = counter + M[i][j+1];
			if(!flagi1) counter = counter + M[i-1][j+1];
			if(!flagi2) counter = counter + M[i+1][j+1];
		}
		
		if(!flagi1) counter = counter + M[i-1][j];
		if(!flagi2) counter = counter + M[i+1][j];
		
		counter = counter + M[i][j];
		M2[i][j] = counter;
		counter = 0;
		flagj1 = false;
		flagj2 = false;
		flagi1 = false;
		flagi2 = false;
	//	cout << M2[i][j] << " ";
		}
	//	cout << endl;
	}
	
	
	for(int i = 0 ; i<n ; i++){
		for(int j = 0 ; j<m ; j++){
			cout << M2[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}