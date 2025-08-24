// S. Trowbridge 2024
#include <iostream>

int x = 0;                          // global variable

void print(int a)        
{
    std::cout << a << "\n";         // a has local scope (a is local to print)          
    std::cout << x << "\n\n";       // x has global scope
                                    // note: cannot access b or i because they are not in scope         
}
void increment(int &b)
{
    ++b;
     
    std::cout << b << "\n";         // b has local scope (b is local to increment)       
    std::cout << x << "\n\n";       // x has global scope
                                    // note: cannot access a or i because they are not in scope                        
}

int main() {
    std::cout << std::endl;

    int i = 0;

    std::cout << x << "\n";         // x has local scope (x is local to main)       
    std::cout << i << "\n\n";       // x has global scope   
                                    // note: cannot access a or b because they are not in scope      
 
    print(i);
    increment(i);

    std::cout << std::endl;
    return 0;
}
