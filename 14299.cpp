#include <iostream>
using namespace std;


void inputRoutine (char **M , int n , int m){
	//M = new char *[n];
	for(int i = 0 ; i<n ; i++){
		M[i] = new char [m];
		for(int j = 0 ; j<m ; j++){
			cin >> M[i][j];
		}
	}
}

	
int patronFinderRoutine (char **M , int n , int m , char patron[3][3]);	
bool compRoutine (char **M , char patron[3][3] , int f , int c);
	
int main(int argc, char *argv[]) {
//uno debe comparar una imagen con un trozo ya dado , es decir es como tomar una foto y tener otra pequeña que nos diga que buscar en la foto grande que saco
	
//para lo planteado anteriormente un metodo podria ser tener la matriz que nos dice el patron ya definida e inicializada y luego usarla como argumento para una funcion que compare dicha matriz con la que se ingreso
	
char nido[3][3] = {'x','x','x','x','o','x','x','x','x'};

int n , m; cin >> n >> m;
char ** M;
M = new char *[n];
inputRoutine(M,n,m);
//cout << M[0][0] << endl;


cout << patronFinderRoutine(M,n,m,nido);



return 0;
}

int patronFinderRoutine (char **M , int n , int m , char patron[3][3]){
	
	int i = 0; int j = 0; int cont = 0;
	
	while((i+2)<=n-1){
		while((j+2)<=m-1){
			if(compRoutine(M,patron,i,j)) cont++;
			j++;
		}
		j = 0;
		i++;
	}
	return cont;
}
	
	
bool compRoutine (char **M , char patron[3][3] , int f , int c){
	
	for(int i = f ; i <=f+2 ; i++){
		for(int j = c ; j<=c+2 ; j++){
			if(M[i][j] != patron[i-f][j-c]) return false;
		}
	}
	
	return true;;
}