#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
# include < cmath >

TEST_CASE (" describe_gcd ", "[gcd]")
{
REQUIRE (gcd (2 ,4) == 2);
REQUIRE (gcd (9 ,6) == 3);
REQUIRE (gcd (3 ,7) == 1);
}
int main(int argc, char* argv[])
{
    int gcd (int a, int b){
        if (a = 0){
           std::cout << "Keine der beeiden Zahlen darf Null sein!";
            if (b = 0){
                std::cout << "Keine der beeiden Zahlen darf Null sein!";
            }
                else{
                    if (a > b){
                         std::cout << a % b;
                    }
                    else{
                        std::cout << b % a;
                    }
                }
             }
        return 0;
    }  
  return Catch::Session().run(argc, argv);
}