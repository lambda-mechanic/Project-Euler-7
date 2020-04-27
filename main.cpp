#include <iostream>

using namespace std;

int main()
{
    // counts prime numbers. starts at second prime number(3)
    int counter = 2;
    int prime = 0;
    // assume prime is found
    bool primeFound=true;
    // i is the number we will be testing for primacy
    for(int i = 3; counter < 10002; i++){
        for(int j = 2; j < i; j++){
            // reassume number is prime
            primeFound = true;
            // if i has a multiple other than 1 or itself
            if(i % j == 0){
                // number is not prime
                primeFound = false;
                // move onto next number by exiting loop
                break;
            }
            // if 10 001st prime num
            if(counter==10001){
                prime = i;
            }
        }
        if(primeFound==true){
            counter+=1;
        }
    }
    std::cout << "The 10 001st prime is: " << prime << std::endl;

    return 0;
}
