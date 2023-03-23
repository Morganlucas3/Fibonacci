//
//  main.cpp
//  Fibonacci - algo
//
//  Created by Morgan Lucas on 3/23/22.
//

#include <iostream>
using namespace std;

int Fibonacci(int n){
    if ((n == 0) || (n == 1)){
         return n;
    }
    else{
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
}

int main(int argc, const char * argv[]) {
    
    int i = 0;
    
    while(i < 15) {
        cout << " " << Fibonacci(i) << endl;
         i++;
      }
    
    
    
    
    return 0;
}

