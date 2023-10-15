public class Cetak {

    public static void main(String[] args) {
        cetak1(3);
        cetak2(3);
        cetak3(3);
    }

    public static void cetak1(int i) {
        if (i >= 1) { // proses 1
            cetak1(i - 1); // proses 2
        }
        System.out.println(i); // proses 3

        /*
        * cetak1(0) 1,3
        * cetak1(1) 1,2,3
        * cetak1(2) 1,2,3
        * cetak1(3) 1,2,3
        *
        * */
    }

    public static void cetak2(int i) {
        System.out.println(i); // proses 1

        if (i >= 1) { // proses 2
            cetak2(i - 1); // proses 3
        }
        /*
        * cetak2(0) : 1,
        * cetak2(1) : 1,2,3
        * cetak2(2) : 1,2,3
        * cetak2(3) : 1,2,3
        *
        * */
    }


    public static void cetak3(int i) {
        if (i >= 1) { // proses 1
            System.out.println(i); // proses 2
            cetak3(i - 1); // proses 3
        }

        /*
        * cetak3(0) : 1
        * cetak3(1) : 1,2,3
        * cetak3(2) : 1,2,3
        * cetak3(3) : 1,2,3
        *
        *
        * */
    }

    public static void cetak4(int i) {
        if (i >= 1) { // proses 1
            cetak4(i - 1); // proses 2
            System.out.println(i); // proses 3
        }

        /*
        * cetak4(0) : 1
        * cetak4(1) : 1,2,3
        * cetak4(2) : 1,2,3
        * cetak4(3) : 1,2,3
        *
        * */
    }
}
