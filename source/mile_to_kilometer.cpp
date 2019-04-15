#include <iostream>

double mile_to_kilometer(double m){
	double km = m / 0.62137;
	return km;	
}

int main(){
	double m;
	std::cout<<"Geben sie eine Länge in Meilen an'\n'";
	std::cin>> m;
	std::cout<<m<< " Meilen sind "<< mile_to_kilometer(m)<< " Kilometer";
	return 0;
}