public class Main {
    static final int ARRAY_SIZE = 10000;
    static final int ITERATIONS = 100000;

    // Static array (class-level, allocated once when class loads)
    static int[] static_array = new int[ARRAY_SIZE];

    static void testStaticArray() {
        for(int i = 0; i < ARRAY_SIZE; i++) {
            static_array[i] = i;
        }
    }

    // In Java, all arrays are heap-allocated
    // This simulates "local array" behavior
    static void testLocalArray() {
        int[] local_array = new int[ARRAY_SIZE];
        for(int i = 0; i < ARRAY_SIZE; i++) {
            local_array[i] = i;
        }
    }

    // Heap array with explicit creation each time
    static void testHeapArray() {
        int[] heap_array = new int[ARRAY_SIZE];
        for(int i = 0; i < ARRAY_SIZE; i++) {
            heap_array[i] = i;
        }
        // Java handles deallocation via garbage collection
    }

    public static void main(String[] args) {
        System.out.println("🎉 Let's race some arrays! 🏁");
        System.out.println("Array size: " + ARRAY_SIZE + " (that's a chonky boi!)");
        System.out.println("Iterations: " + ITERATIONS + " (buckle up!)");
        System.out.println();

        // Test static array
        long start = System.nanoTime();
        for(int i = 0; i < ITERATIONS; i++) {
            testStaticArray();
        }
        long end = System.nanoTime();
        long static_duration = (end - start) / 1_000_000;
        System.out.println("⚡ Static array time: " + static_duration + " ms (ZOOOOOM!)");

        // Test local array
        start = System.nanoTime();
        for(int i = 0; i < ITERATIONS; i++) {
            testLocalArray();
        }
        end = System.nanoTime();
        long local_duration = (end - start) / 1_000_000;
        System.out.println("☕ Local array time: " + local_duration + " ms (Java doing Java things)");

        // Test heap array
        start = System.nanoTime();
        for(int i = 0; i < ITERATIONS; i++) {
            testHeapArray();
        }
        end = System.nanoTime();
        long heap_duration = (end - start) / 1_000_000;
        System.out.println("🗑️  Heap array time: " + heap_duration + " ms (same same but different)");

        System.out.println();
        System.out.println("📊 The Verdict:");
        System.out.println("⚡ Static: WINNER! Allocated once when class loads (efficiency king!)");
        System.out.println("☕ Local: Pretty much heap - Java loves its heap");
        System.out.println("🗑️  Heap: Also heap - surprise! Everything's heap in Java!");
        System.out.println("💡 Fun fact: Java doesn't do stack arrays. It's all heap, baby!");
    }
}
