#include <iostream>
using namespace std;

int main(){
	
	int N, countgenap, countganjil, countpos, countneg;
	
	countgenap=0; countganjil=0; countpos=0; countneg=0;
	cin>> N;
	while (N !=-999){
		if (N % 2 == 0){
			countgenap++;
		}else {
			countganjil++;
		}if ( N > 0){
			countpos++;
		}else if (N < 0){
			countneg++;
		}
		cin >> N;
	}
	cout<<"PROGRAM MENCARI KATEGORI BILANGAN HINGGA ANGKA -999"<<endl;
	cout<<"Bilangan genap ada ="<<countgenap<<endl;
	cout<<"Bilangan genap ada ="<<countganjil<<endl;
	cout<<"Bilangan genap ada ="<<countpos<<endl;
	cout<<"Bilangan genap ada ="<<countneg<<endl;
	return 0;
}
