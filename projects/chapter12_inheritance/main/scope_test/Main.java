public class Main {
    public static void main(String[] args) {
        int scope_num = 0;
        for(int i = 0; i < 5; i++){
            if(i == 4) {
                scope_num = 1;
            }
            System.out.println(scope_num);
        }
        //Testing if scope_num is accessible here
        System.out.println("Final scope_num: " + scope_num);
    }
}
