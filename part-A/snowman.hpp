#include <iostream>
#include <array>

namespace ariel {

    enum type {
        HAT = 0, NOSE = 1, EYE = 2, LHAND = 3, RHAND = 4, TORSO = 5, BASE = 6

    };
    const int NUM_ELEMENTS = 10;
    const int NUM_ITEMS = 4;
    // const int HAT = 0, NOSE = 1, EYE = 2, LHAND = 3, RHAND = 4, TORSO = 5, BASE = 6;
    const std::string S = " ";
    std::string snowman(long int number);
    
    const std::string presets[NUM_ELEMENTS][NUM_ITEMS] = 
                                {{"_===_", "  ___\n .....", "   _\n  /_\\", "  ___\n (_*_)"}, //HATS 1
                                 {",", ".", "_", ""},     //Nose 4
                                 {".", "o", "O", "-"},    // Eyes 
                                 {" ", "\\", " ", " "},   // Left hand 1 (X1)
                                 {"<", " ", "/", " "},    // Left hand 2 (X2)
                                 {" ", " ", " ", " "},    // Left hand 3 (X3)
                                 {">", "/", "\\", ""},    // Right hand
                                 {":", "] [", "> <", ""}, // Torso
                                 {":", "\"\"", "___", ""},// Base
                                 {" ", " ", " ", " "}};
}
