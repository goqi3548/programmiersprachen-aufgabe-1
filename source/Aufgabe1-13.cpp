#include <iostream>

long factorial(int val){ 
if (val ==1) 
return 1; 
 else 
return(val * factorial (val - 1)); 
}

int main(){
	std::cout<<factorial(5);
	return 0;
}