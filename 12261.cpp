#include <iostream>
using namespace std;


//void matrixToArray (int m[][100] , int v[] , int F , int nC);
void orderSelection (int m[][100] , int F , int nC);
int main(int argc, char *argv[]) {
	
	int gI [100][100];
	//int vC [100];
	int m , n;
	cin >> m >> n; //m filas y n columnas
	//int a; 
	for(int i = 0 ; i<m ; i++){
		for(int j = 0 ; j<n ; j++){
			cin >> gI[i][j];
		}
	}
	cout << "\n\n";
	for(int i = 0 ; i<n ; i++){
		orderSelection(gI,m,i);
	}
	for(int i = 0 ; i<m ; i++){
		for(int j = 0 ; j<n ; j++){
			cout << gI[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}

void orderSelection (int m[][100] , int F , int nC){
	
	int aux;
	int mayor;
	int indexM;
	
	for(int i = 0 ; i<(F-1) ; i++){
		mayor = m[i][nC];
		for(int j = i+1 ; j<F ; j++){
			if(m[j][nC]>mayor){
				mayor = m[j][nC];
				indexM = j;
			}
		}
		if(mayor!=m[i][nC]){
			aux = m[i][nC];
			m[i][nC] = m[indexM][nC];
			m[indexM][nC] = aux;
		}
	}
	
}