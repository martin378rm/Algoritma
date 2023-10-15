public class Fibonacci {

    public static void main(String[] args) {
        System.out.println(
                fib1(10)
        );

        System.out.println(fib2(10));

        System.out.println(fibDriver(10));
    }


    public static int fib1(int n) {
        if (n <= 1){
            return n;
        }
            return fib1(n - 1) + fib1(n - 2);
    }



    // dynamic progamming => menyelesaikan sub-permasalahan dengan menyimpan hasil sebelumnya
    public static int fib2(int n) {
        if (n <= 1) {
            return n;
        }
        int[] result = new int[n + 1];
        result[0] = 0;
        result[1] = 1;

        for (int i = 2; i <= n; i++) {
            result[i] = result[i - 2] + result[i - 1];
        }
        return result[n];
    }

    public static int fib3(int n) {
        if (n <= 1) {
            return n;
        }
        int fib1 = 0;
        int fib2 = 1;
        int result = 0;

        for (int i = 2; i <= n; i++) {
            result = fib1 + fib2;
            fib1 = fib2;
            fib2 = result;
        }
        return result;
    }



    public static int fibDriver(int n) {
        return fib4(0,1,n);
    }


    // pendekatan dengan tail recursive
    public static int fib4(int x, int y, int n) {
        if (n == 0) return x;
        else if (n == 1) {
            return y;
        } else {
            return fib4(y, x + y, n - 1);
        }
    }
}