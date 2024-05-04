#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	
	int W , H , X , Y , lr , dt;
	cin >> W >> H;
	
	int Xf, Yf;
    cin >> X >> Y;
	cin >> lr >> dt;
	//Yf = Y;
	//cuando lr < 0 me muevo hacia W-1 y desde alli a W-2 ... 
	//cuando dt < 0 me muevo hacia H-1 y desde alli a H-2 ---
	
	if(lr<0){
		
	    Xf = X; // Xf = 0 
		int cont = 0;
		if(W==1) cont = abs(lr);
		while(cont < abs(lr)){
			if(Xf==0){
				Xf = W-1;
				cont++;
			}
			else{Xf = Xf-1;
			cont++;
		}
		}
	}
	
	else if(lr>=0){
		
		Xf = X; // Xf = 0 
		int cont = 0;
		if(W==1) cont = lr;
		while(cont < lr){
			if(Xf==W-1){
				Xf = 0;
				cont++;
			}
			else{
			Xf = Xf+1;
			cont++;
			}
		}
	}
	
	if(dt<0){
		
		Yf = Y; // Xf = 0 
		int cont = 0;
		if(H==1) cont = abs(dt);
		while(cont < abs(dt)){
			if(Yf==0){
				Yf = H-1;
				cont++;
			}
			else{
			Yf = Yf-1;
			cont++;
			}
		}
	}
	
	else if(dt>=0){
		
		Yf = Y; // Xf = 0 
		int cont = 0;
		if(H==1) cont = abs(dt);
		while(cont < dt){
			if(Yf==H-1){
				Yf = 0;
				cont++;
			}
			else {Yf = Yf+1;
			cont++;
			}
		}
	}	
	
	//cout << "(" << X << "," << Y << ")" << endl;
	//cout << "(" << Xf << "," << Yf << ")" << endl;
	
	cout << Xf << " " << Yf;
	
	return 0;
}