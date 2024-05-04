#include <iostream>
#include <iomanip>
using namespace std;
double factorial(double n);
double terminoAprox (double n);
int main(int argc, char *argv[]) {
	double aux;
	cin >> aux;
	double e = 0;
	double termino = 0;
	termino = terminoAprox(1);
	for(int i = 2 ; termino >= aux ; i++){
		e = e + termino;
		termino = terminoAprox(i);
	}
	cout << fixed << setprecision(10) << e;
	return 0;
}
double factorial(double n){
if(n==1) return 1.0;
else{
	return (n*factorial(n-1));
}
}
double terminoAprox (double n){
	double t;
	t = (n*n)/(2.0*(factorial(n)));
	return t;
}