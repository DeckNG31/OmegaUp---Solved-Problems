#include <iostream>
using namespace std;

struct par{
	int x;
	int y;
};


void mapp (par ** , int , int);

int main(int argc, char *argv[]) {
	int M ,N;
	cin >> M >> N;
	par **m = new par * [M];
	for(int i = 0 ; i<M ; i++){
		m[i] = new par[N];
		for(int j = 0 ; j<N ; j++){
			cin >> m[i][j].x;
			cin >> m[i][j].y;
		}
	}
	
	mapp(m,M,N);
	
	
	return 0;
}


void mapp (par  ** m, int M , int N){
	par posAzul;
	int coX = 0;
	int coY = 0;
	
	posAzul.x = 0;
	posAzul.y = 0;
	
	cout << posAzul.x << " " << posAzul.y << endl;
	
	do{
	
	
    posAzul.x = m[coX][coY].x; 
	posAzul.y = m[coX][coY].y;
    coX = posAzul.x;
	coY = posAzul.y;
	
	cout << posAzul.x << " " << posAzul.y << endl;
	
	}while(posAzul.x!=0 || posAzul.y!=0);
	
}