#include <iostream> 

// This is a definition of a rectangle. 

void rectangle (int width, int length)
{

    for (int i = 0; i < width; i++) {
        std::cout << "*"; 
        } 
        
    std::cout << '\n'; 

// Without this block, the length will be 2 units longer than it should be. 

    for (int i = 0; i < (length-2); i++) {
            for (int j = 0; j < width; j++) {
                std::cout << "*"; 
            }
        std::cout << '\n'; 
        }
        
    for (int i = 0; i < width; i++) {
        std::cout << "*"; 
        } 
}

int main()
{
    std::cout << "Write the width and length of the rectangle"
              << " you want to see. "
              << std::endl; 
              
    int w = 0; // w stands for width 
    int l = 0; // l stands for length, the longer side 
    
    std::cout << "Enter width: "; 
    std::cin >> w; 
    std::cout << "The width is " << w << " units." << std::endl; 
    
    std::cout << "Enter length: ";
    std::cin >> l; 
    std::cout << "The length is " << w << " units." << std::endl; 
    
    std::cout << "This is a rectangle of " << (w * l) << " square units." << std::endl; 
    
    rectangle (w, l); 
    
    std::cout << '\n'; 
    
    return 0; 
}
