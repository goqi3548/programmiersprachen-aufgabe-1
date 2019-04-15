#include <iostream>
int is_prime(int zahl){
	for (int teiler = 2; teiler < zahl; teiler++){
		if (zahl % teiler != 0){
			std::cout<< zahl << "ist prim!";
			
		}
		else{
			std::cout << zahl << "ist nicht prim!" ;
		
		}
		return 0;
	}
}

int main () {
	std::cout<< is_prime(6);
	return 0;
}