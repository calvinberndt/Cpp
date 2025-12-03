#include <iostream>
#include <stdexcept> // Required for std::overflow_error and std::invalid_argument

// Function to perform division and throw exceptions
double divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw std::overflow_error("Attempted to divide by zero!");
    }
    // Just an arbitrary condition to demonstrate another exception type
    if (numerator < 0) {
        throw std::invalid_argument("Negative numerator is not allowed for this example.");
    }
    // NEW: Demonstrate throwing a type (int) that is totally different from return type (double)
    if (denominator == 1) {
        throw 999; // Throwing an integer error code
    }
    return static_cast<double>(numerator) / denominator;
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    // --- Example 1: Division by zero ---
    try {
        std::cout << "Attempting to divide 10 by 0..." << std::endl;
        double result = divide(10, 0);
        std::cout << "Result: " << result << std::endl; 
    } catch (const std::overflow_error& e) {
        std::cerr << "Caught overflow_error: " << e.what() << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Caught invalid_argument: " << e.what() << std::endl;
    } catch (int e) {
        std::cerr << "Caught int exception: " << e << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Caught general exception: " << e.what() << std::endl;
    }

    std::cout << std::endl; // Separator

    // --- Example 2: Invalid argument ---
    try {
        std::cout << "Attempting to divide -5 by 2..." << std::endl;
        double result = divide(-5, 2);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::overflow_error& e) {
        std::cerr << "Caught overflow_error: " << e.what() << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Caught invalid_argument: " << e.what() << std::endl;
    } catch (int e) {
        std::cerr << "Caught int exception: " << e << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Caught general exception: " << e.what() << std::endl;
    }

    std::cout << std::endl; // Separator

    // --- Example 3: Throwing an INT (Return type mismatch) ---
    try {
        std::cout << "Attempting to divide 10 by 1 (triggers int throw)..." << std::endl;
        double result = divide(10, 1);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::overflow_error& e) {
        std::cerr << "Caught overflow_error: " << e.what() << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Caught invalid_argument: " << e.what() << std::endl;
    } catch (int e) {
        std::cerr << "Caught int exception: " << e << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Caught general exception: " << e.what() << std::endl;
    }

    return 0;
}
