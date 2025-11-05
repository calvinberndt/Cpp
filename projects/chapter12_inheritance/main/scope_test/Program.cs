using System;

class Program {
    static void Main() {
        int scope_num = 0;
        for(int i = 0; i < 5; i++){
            if(i == 4) {
                scope_num = 1;
            }
            Console.WriteLine(scope_num);
        }
        //Testing if scope_num is accessible here
        Console.WriteLine("Final scope_num: " + scope_num);
    }
}
