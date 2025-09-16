#include <iostream>
#include <iomanip>

int main() {
    double value = 123.456789;
    double negative = -45.6789;
    
    std::cout << "=== Stream Manipulator Order & setprecision(2) Explained ===\n\n";
    
    // ============================================
    // PART 1: What does the 2 in setprecision(2) mean?
    // ============================================
    std::cout << "1. WHAT DOES setprecision(2) MEAN?\n";
    std::cout << "   Original value: " << value << "\n\n";
    
    std::cout << "   A. Without fixed (total significant digits):\n";
    std::cout << "      setprecision(2): " << std::setprecision(2) << value 
              << "  <- 2 significant digits total (1.2e+02)\n";
    std::cout << "      setprecision(4): " << std::setprecision(4) << value 
              << "  <- 4 significant digits total\n";
    std::cout << "      setprecision(6): " << std::setprecision(6) << value 
              << "  <- 6 significant digits total (default)\n\n";
    
    std::cout << "   B. With fixed (digits after decimal point):\n";
    std::cout << std::fixed;
    std::cout << "      setprecision(2): " << std::setprecision(2) << value 
              << "  <- 2 digits after decimal\n";
    std::cout << "      setprecision(4): " << std::setprecision(4) << value 
              << "  <- 4 digits after decimal\n";
    std::cout << "      setprecision(6): " << std::setprecision(6) << value 
              << "  <- 6 digits after decimal\n\n";
    
    // Reset
    std::cout.unsetf(std::ios::fixed);
    std::cout.precision(6);
    
    // ============================================
    // PART 2: Order of Manipulators - Does it matter?
    // ============================================
    std::cout << "2. MANIPULATOR ORDER - DOES IT MATTER?\n\n";
    
    std::cout << "   A. Order generally DOESN'T matter for setup:\n";
    std::cout << "      These all produce the same result:\n\n";
    
    // Version 1: fixed then setprecision
    std::cout << "      Version 1 (fixed -> setprecision -> showpos):\n";
    std::cout << "      " << std::fixed << std::setprecision(2) << std::showpos 
              << negative << "\n";
    
    // Version 2: setprecision then fixed
    std::cout << "      Version 2 (setprecision -> fixed -> showpos):\n";
    std::cout << "      " << std::setprecision(2) << std::fixed << std::showpos 
              << negative << "\n";
    
    // Version 3: showpos first
    std::cout << "      Version 3 (showpos -> fixed -> setprecision):\n";
    std::cout << "      " << std::showpos << std::fixed << std::setprecision(2) 
              << negative << "\n";
    
    // Version 4: All at different times
    std::cout << "      Version 4 (applied separately):\n";
    std::cout << std::setprecision(2);
    std::cout << std::showpos;
    std::cout << std::fixed;
    std::cout << "      " << negative << "\n\n";
    
    // Reset
    std::cout << std::noshowpos;
    
    // ============================================
    // PART 3: When Order DOES Matter
    // ============================================
    std::cout << "   B. Order DOES matter when outputting values:\n\n";
    
    // Reset everything
    std::cout.unsetf(std::ios::fixed);
    std::cout.precision(6);
    
    std::cout << "      Example 1 - Manipulator affects everything after it:\n";
    std::cout << "      " << value << " <- before setprecision(2)\n";
    std::cout << "      " << std::setprecision(2) << value << " <- after setprecision(2)\n";
    std::cout << "      " << value << " <- still affected (persistent)\n\n";
    
    // Reset
    std::cout.precision(6);
    
    std::cout << "      Example 2 - Multiple values in one statement:\n";
    std::cout << "      " << value << std::fixed << std::setprecision(2) 
              << " then " << value << "\n";
    std::cout << "      (First value: default, Second value: fixed with precision 2)\n\n";
    
    // ============================================
    // PART 4: setfill with setw - Order Matters!
    // ============================================
    std::cout << "   C. Special case - setw (order critical):\n\n";
    
    std::cout << "      setw must come RIGHT BEFORE the value:\n";
    std::cout << "      Good: " << std::setfill('*') << std::setw(10) << 42 << "\n";
    std::cout << "      Bad:  " << std::setw(10) << std::setfill('*') << 42 
              << " <- setfill after setw, no effect on 42\n\n";
    
    // Reset fill
    std::cout << std::setfill(' ');
    
    // ============================================
    // PART 5: Complete Example with All Manipulators
    // ============================================
    std::cout << "3. COMPLETE EXAMPLE - All manipulators:\n\n";
    
    double test_value = 98.7654321;
    
    std::cout << "   Original: " << test_value << "\n\n";
    
    // Apply all manipulators in different orders
    std::cout << "   Order 1: fixed -> setprecision(2) -> showpos -> setfill('0') -> setw(10):\n";
    std::cout << "   Result: |" 
              << std::fixed << std::setprecision(2) << std::showpos 
              << std::setfill('0') << std::setw(10) 
              << test_value << "|\n\n";
    
    // Reset for next test
    std::cout << std::noshowpos << std::setfill(' ');
    
    std::cout << "   Order 2: setprecision(2) -> showpos -> fixed -> setfill('0') -> setw(10):\n";
    std::cout << "   Result: |" 
              << std::setprecision(2) << std::showpos << std::fixed 
              << std::setfill('0') << std::setw(10) 
              << test_value << "|\n\n";
    
    std::cout << "   Both produce the same output!\n\n";
    
    // ============================================
    // PART 6: Summary
    // ============================================
    std::cout << "4. SUMMARY:\n\n";
    std::cout << "   • setprecision(2) means:\n";
    std::cout << "     - Without fixed: 2 total significant digits\n";
    std::cout << "     - With fixed: 2 digits after the decimal point\n\n";
    
    std::cout << "   • Manipulator order:\n";
    std::cout << "     - Setup manipulators (fixed, setprecision, showpos): order doesn't matter\n";
    std::cout << "     - They're all persistent and modify the stream state\n";
    std::cout << "     - Exception: setw must come immediately before the value\n";
    std::cout << "     - All manipulators affect values that come AFTER them\n\n";
    
    std::cout << "   • Best practice:\n";
    std::cout << "     - Group format manipulators together for clarity\n";
    std::cout << "     - Common order: fixed -> setprecision -> showpos -> setfill\n";
    std::cout << "     - Always put setw right before the value\n";
    
    return 0;
}