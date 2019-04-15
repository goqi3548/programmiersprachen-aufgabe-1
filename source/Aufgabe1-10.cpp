#include <iostream>

int sum_multiples(){
	int sum = 0;
	int a = 1;
	
	for (a = 1; a < 101; a++){
		if (a % 3 == 0){
			sum += a ;
		}
		if (a % 5 == 0){
			sum += a;
		}
	}
	return sum;
}
		

int main()
{
	std::cout<<sum_multiples();
	return 0;
}