#include <iostream>
using namespace std;

bool areEquals (int **M , int m , int n);

int main(int argc, char *argv[]) {
	
	
	int n , m;
	cin >> m >> n;
	int ** M = new int * [m];
	
	for(int i = 0 ; i<m ; i++){
		M[i] = new int [n];
		for(int j = 0 ; j<n ; j++){
			cin >> M[i][j];
		}
	}
	
	cout << areEquals (M,m,n);
	
	
	return 0;
}

bool areEquals (int **M , int m , int n){
	
	int indexM = (n/2)-1;
	int i = 0 , j = 0 , k = indexM+1;
	
	while(i<m){
		
	while(j<=indexM){
		
		if(M[i][j] != M[i][k]) return false;
		j++;
		k++;
	}	
	i++;	
	j = 0;
	k = indexM+1;
	}
	
	
	return true;
}