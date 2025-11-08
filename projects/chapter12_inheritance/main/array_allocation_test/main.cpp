#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

const int ARRAY_SIZE = 10000;
const int ITERATIONS = 100000;

// Static array (allocated at compile time, stored in data segment)
int static_array[ARRAY_SIZE];

void test_static_array() {
    for(int i = 0; i < ARRAY_SIZE; i++) {
        static_array[i] = i;
    }
}

// Stack array (allocated on function call, stored in stack)
void test_stack_array() {
    int stack_array[ARRAY_SIZE];
    for(int i = 0; i < ARRAY_SIZE; i++) {
        stack_array[i] = i;
    }
}

// Heap array (allocated dynamically at runtime)
void test_heap_array() {
    int* heap_array = new int[ARRAY_SIZE];
    for(int i = 0; i < ARRAY_SIZE; i++) {
        heap_array[i] = i;
    }
    delete[] heap_array;
}

int main() {
    cout << "🎉 Let's race some arrays! 🏁" << endl;
    cout << "Array size: " << ARRAY_SIZE << " (that's a chonky boi!)" << endl;
    cout << "Iterations: " << ITERATIONS << " (buckle up!)" << endl << endl;

    // Test static array
    auto start = high_resolution_clock::now();
    for(int i = 0; i < ITERATIONS; i++) {
        test_static_array();
    }
    auto end = high_resolution_clock::now();
    auto static_duration = duration_cast<milliseconds>(end - start);
    cout << "⚡ Static array time: " << static_duration.count() << " ms (ZOOOOOM!)" << endl;

    // Test stack array
    start = high_resolution_clock::now();
    for(int i = 0; i < ITERATIONS; i++) {
        test_stack_array();
    }
    end = high_resolution_clock::now();
    auto stack_duration = duration_cast<milliseconds>(end - start);
    cout << "📚 Stack array time: " << stack_duration.count() << " ms (pretty speedy!)" << endl;

    // Test heap array
    start = high_resolution_clock::now();
    for(int i = 0; i < ITERATIONS; i++) {
        test_heap_array();
    }
    end = high_resolution_clock::now();
    auto heap_duration = duration_cast<milliseconds>(end - start);
    cout << "🗑️  Heap array time: " << heap_duration.count() << " ms (taking its sweet time...)" << endl;

    cout << endl << "📊 The Verdict:" << endl;
    cout << "⚡ Static: Allocated once at compile time (data segment)" << endl;
    cout << "   BUT: Can be slower due to cache misses and memory contention!" << endl;
    cout << "📚 Stack: Often FASTEST! Stack pointer moves = instant allocation" << endl;
    cout << "   PLUS: Hot in CPU cache from recent use = speedy access!" << endl;
    cout << "🗑️  Heap: new/delete overhead, but modern allocators are optimized" << endl;
    cout << "   Cache locality on fresh allocations can beat static!" << endl;
    cout << endl << "💡 Plot twist: Stack often wins when you're writing to arrays!" << endl;
    cout << "   Theory said static would dominate, but cache locality matters more!" << endl;

    return 0;
}
