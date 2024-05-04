#include <iostream>
using namespace std;

void sortV (int *v , int s);

int main(int argc, char *argv[]) {
	int F , C; cin >> F >> C;
	int room[100][100];
	int counter = 1;
	int k = 0;
	int *v = new int [F*C];
	
	//cout << v[282];
	
	for(int i = 0 ; i<F ; i++){
		for(int j = 0 ; j<C ; j++){
			cin >> room[i][j];
			v[k] = room[i][j];
			k++;
		}
		
	}
	sortV (v , F*C);
	
	for(int i = 0 ; i<F*C ; i++){
		if(v[i]==v[i+1]) counter++;
		else{
			cout << counter << " ";
			counter = 1;
		}
	}
	
	
	return 0;
}

void sortV (int *v , int s){
	
	int aux , index , menor;
	
	for(int i = 0 ; i<s-1 ; i++){
		menor = v[i];
		for(int j = i+1 ; j<s ; j++){
			if(v[j]<menor){
				menor = v[j];
				index = j;
			}
		}
		if(menor!=v[i]){
			aux = v[i];
			v[i] = v[index];
			v[index] = aux;
		}
	}
	
	
	
	
}