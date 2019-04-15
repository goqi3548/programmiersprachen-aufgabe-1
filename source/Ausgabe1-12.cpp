#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
	
float surface () {
	float surf = 0;
	float r = 5;
	float h = 20;
	if (r && h >= 1){
		surf = 2 * M_PI * r * h;
	}
	return surf;
}

float volume(){
	float vol = 0;
	float r = 5;
	float h = 20;
	if (r && h >= 1){
		M_PI * r * r * h;
	}
	return vol;
}


int main(){
	std::cout<<surface<< " FE ";
	std::cout<<volume << " VE ";
	return 0;
}