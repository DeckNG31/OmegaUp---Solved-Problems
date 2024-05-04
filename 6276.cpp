#include <iostream>
using namespace std;


void adyac (int i , int j , int N , int M , int V2[20][20]){
	bool entry = false;
	if(i-1>=0){
		if(j-1>=0){
			if(V2[i-1][j-1]==9) V2[i][j]++;
			if(V2[i][j-1]==9) V2[i][j]++;
		}
		if(j+1<=N){
			if(V2[i-1][j+1]==9) V2[i][j]++;
			if(V2[i][j+1]==9) V2[i][j]++;
		}
		if(V2[i-1][j]==9) V2[i][j]++;
		entry = true;
	}
	
	if(i+1<=M){
		if(j-1>=0){
			if(V2[i+1][j-1]==9) V2[i][j]++;
			if(!entry){
			if(V2[i][j-1]==9) V2[i][j]++;
			}
		}
		if(j+1<=N){
			if(V2[i+1][j+1]==9) V2[i][j]++;
			if(!entry){
				if(V2[i][j+1]==9) V2[i][j]++;
			}
		}
		if(V2[i+1][j]==9) V2[i][j]++;
	}
	
	
	
}

void ProcessMatrix (bool V1[20][20] , int N , int M , int V2[20][20]){
	
	for(int i = 0 ; i<M ; i++){
		for(int j = 0 ; j<N ; j++){
			if(V1[i][j]) V2[i][j] = 9;
			else V2[i][j] = 0;
		}
	}
	
	for(int i = 0 ; i<M ; i++){
		for(int j = 0 ; j<N ; j++){
			if(V2[i][j] != 9) adyac(i,j,N,M,V2);
		}
	}
	
	for(int i = 0 ; i<M ; i++){
		for(int j = 0 ; j<N ; j++){
		cout << V2[i][j] << " ";
		}
		cout << endl;
	}
	
	
}

int main(int argc, char *argv[]) {
	
	
	int N , M;
	cin >> M >> N;
	bool mat[20][20];
	int mat2[20][20];
	for(int i = 0 ; i<M ; i++){
		for(int j = 0 ; j<N ; j++){
			cin >> mat[i][j];
		}
	}
	ProcessMatrix(mat,N,M,mat2);
	
	return 0;
}