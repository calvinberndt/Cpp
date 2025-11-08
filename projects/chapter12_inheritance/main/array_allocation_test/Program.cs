using System;
using System.Diagnostics;

class Program {
    const int ARRAY_SIZE = 10000;
    const int ITERATIONS = 100000;

    // Static array (class-level, allocated once)
    static int[] static_array = new int[ARRAY_SIZE];

    static void TestStaticArray() {
        for(int i = 0; i < ARRAY_SIZE; i++) {
            static_array[i] = i;
        }
    }

    // Local array (heap-allocated in C# by default)
    static void TestLocalArray() {
        int[] local_array = new int[ARRAY_SIZE];
        for(int i = 0; i < ARRAY_SIZE; i++) {
            local_array[i] = i;
        }
    }

    // Stack array using stackalloc (only available for value types)
    static unsafe void TestStackArray() {
        int* stack_array = stackalloc int[ARRAY_SIZE];
        for(int i = 0; i < ARRAY_SIZE; i++) {
            stack_array[i] = i;
        }
    }

    static void Main() {
        Console.WriteLine("🎉 Let's race some arrays! 🏁");
        Console.WriteLine($"Array size: {ARRAY_SIZE} (that's a chonky boi!)");
        Console.WriteLine($"Iterations: {ITERATIONS} (buckle up!)");
        Console.WriteLine();

        Stopwatch sw = new Stopwatch();

        // Test static array
        sw.Start();
        for(int i = 0; i < ITERATIONS; i++) {
            TestStaticArray();
        }
        sw.Stop();
        Console.WriteLine($"⚡ Static array time: {sw.ElapsedMilliseconds} ms (ZOOOOOM!)");

        // Test local array
        sw.Restart();
        for(int i = 0; i < ITERATIONS; i++) {
            TestLocalArray();
        }
        sw.Stop();
        Console.WriteLine($"🎯 Local array time: {sw.ElapsedMilliseconds} ms (garbage collector enters chat)");

        // Test stack array (requires unsafe code)
        sw.Restart();
        for(int i = 0; i < ITERATIONS; i++) {
            TestStackArray();
        }
        sw.Stop();
        Console.WriteLine($"📚 Stack array time: {sw.ElapsedMilliseconds} ms (unsafe but FAST!)");

        Console.WriteLine();
        Console.WriteLine("📊 The Verdict:");
        Console.WriteLine("⚡ Static: WINNER! Allocated once and chillin' (smart cookie!)");
        Console.WriteLine("🎯 Local: Heap life with GC babysitting (classic C#)");
        Console.WriteLine("📚 Stack: Speed demon with stackalloc (living dangerously!)");
        Console.WriteLine("⚠️  Note: stackalloc needs /unsafe flag (we're rebels now)");
    }
}
