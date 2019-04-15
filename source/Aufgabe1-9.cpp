#include <iostream>

   int checksum () {
        int sum = 0;
        int a = 119711;
        while (a > 0) {
            sum += a % 10;
            a /= 10;
        }
        return sum;
   }
int main(){
	std::cout<<checksum();
    return 0;
}
