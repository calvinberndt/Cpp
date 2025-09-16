#include <iostream>
#include <iomanip>

int main() {
    bool isReady = true;
    bool isComplete = false;
    
    std::cout << "=== boolalpha vs noboolalpha Demo ===\n\n";
    
    // 1. Default behavior (noboolalpha is the default)
    std::cout << "1. DEFAULT BEHAVIOR (noboolalpha):\n";
    std::cout << "   isReady = " << isReady << "\n";
    std::cout << "   isComplete = " << isComplete << "\n";
    std::cout << "   (true displays as 1, false as 0)\n\n";
    
    // 2. Using std::boolalpha - displays as "true" or "false"
    std::cout << "2. WITH std::boolalpha:\n";
    std::cout << std::boolalpha;  // Enable boolalpha
    std::cout << "   isReady = " << isReady << "\n";
    std::cout << "   isComplete = " << isComplete << "\n";
    std::cout << "   (true displays as 'true', false as 'false')\n\n";
    
    // 3. Back to noboolalpha - displays as 1 or 0
    std::cout << "3. BACK TO std::noboolalpha:\n";
    std::cout << std::noboolalpha;  // Disable boolalpha
    std::cout << "   isReady = " << isReady << "\n";
    std::cout << "   isComplete = " << isComplete << "\n";
    std::cout << "   (back to numeric: 1 and 0)\n\n";
    
    // 4. Inline usage (temporary effect)
    std::cout << "4. INLINE USAGE:\n";
    std::cout << "   Without boolalpha: " << isReady << "\n";
    std::cout << "   With boolalpha: " << std::boolalpha << isReady << std::noboolalpha << "\n";
    std::cout << "   Back to normal: " << isReady << "\n\n";
    
    // 5. Practical example - debugging output
    std::cout << "5. PRACTICAL EXAMPLE - Debug Output:\n";
    
    // Numeric style (compact)
    std::cout << "   [Numeric Style]\n";
    std::cout << "   Status: Ready=" << isReady 
              << " Complete=" << isComplete 
              << " Processing=" << (isReady && !isComplete) << "\n";
    
    // Text style (readable)
    std::cout << std::boolalpha;
    std::cout << "   [Text Style]\n";
    std::cout << "   Status: Ready=" << isReady 
              << " Complete=" << isComplete 
              << " Processing=" << (isReady && !isComplete) << "\n";
    std::cout << std::noboolalpha << "\n";
    
    // 6. With other stream manipulators
    std::cout << "6. COMBINED WITH OTHER MANIPULATORS:\n";
    std::cout << std::setw(15) << std::left << "Test Name" 
              << std::setw(10) << "Numeric" 
              << std::setw(10) << "Text" << "\n";
    std::cout << std::setw(15) << std::left << "isReady" 
              << std::setw(10) << isReady 
              << std::setw(10) << std::boolalpha << isReady << std::noboolalpha << "\n";
    std::cout << std::setw(15) << std::left << "isComplete" 
              << std::setw(10) << isComplete 
              << std::setw(10) << std::boolalpha << isComplete << std::noboolalpha << "\n\n";
    
    // 7. Input with boolalpha
    std::cout << "7. INPUT WITH boolalpha:\n";
    std::cout << "   Enter a boolean (0/1): ";
    bool userInput1;
    std::cin >> userInput1;
    std::cout << "   You entered (numeric): " << userInput1 << "\n";
    
    std::cout << "   Enter a boolean (true/false): ";
    bool userInput2;
    std::cin >> std::boolalpha >> userInput2;
    std::cout << "   You entered (with boolalpha): " << std::boolalpha << userInput2 << "\n";
    
    return 0;
}