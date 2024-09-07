//
//  main.cpp
//  CheckersBoard
//
//  Created by Naim Lindsay on 9/7/24.
//

#include <iostream>

// Simple checkerboard that utilizes:
// for loops
// modulus operator
// and nested loops

// Main function
int main(){
    // Variables to store checkerboard colors
    char black = 'B';
    char red = 'R';
    
    // Outer loop controls rows
    for (int i = 0; i < 8; i++) {
        // Inner loop controls columns
        for (int j = 0; j < 8; j++) {
            // Alternating between black and red using modulus operator based on row and column sum
            if ((i + j) % 2 == 0) {
                std::cout << black << " ";  // Print black with a space
            } else {
                std::cout << red << " ";    // Print red with a space
            } // End of if-else statement
        } // End of inner loop (columns)
        std::cout << "\n"; // New line after finishing one row in the loop
    } // End of outer loop (rows)
    
    // space under last row
    std::cout<<"\n";
    
    return 0;
}
