#include <iostream>
using namespace std;


void inputRoutine (int **M , int n , int m){
	//M = new char *[n];
	for(int i = 0 ; i<n ; i++){
		M[i] = new int [m];
		for(int j = 0 ; j<m ; j++){
			cin >> M[i][j];
		}
	}
}
	
void mostSigKmRoutine (int **M , int n , int m , int k);
int sumKmRoutine (int **M , int f , int c , int k);

int main(int argc, char *argv[]) {
	
	int **M;
	int n , m; cin >> n >> m;
	int k; cin >> k;
	M = new int *[n];
	inputRoutine(M,n,m);
	 mostSigKmRoutine(M,n,m,k);
	
	return 0;
}


void mostSigKmRoutine(int **M , int n , int m , int k){
	
	int i = 0 ; int j = 0; int maxSum = 0; int aux;
	int indexI , indexJ;
	while((i+(k-1))<=n-1){
		while((j+(k-1))<=m-1){
			aux = sumKmRoutine(M,i,j,k);
			if(aux > maxSum){
				maxSum = aux;
				indexI = i;
				indexJ = j;
			}
			j++;
		}
		j = 0;
		i++;
	}
	
	cout << maxSum << endl;
	cout << indexI+1 << " " << indexJ+1 << endl;
}

int sumKmRoutine (int **M , int f , int c , int k){
	
	int sum = 0;
	
	for(int i = f ; i<=f+(k-1) ; i++){
		for(int j = c ; j<=c+(k-1); j++){
			sum = sum + M[i][j];
		}
	}
	
	return sum;
	
}