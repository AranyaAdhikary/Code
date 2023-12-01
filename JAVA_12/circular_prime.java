import java.util.*;

public class circular_prime {
    
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        
        //initializing and declaring variables
        String num;
        int f = 0;
        int st;
        int d;
        int e;

        //user prompt for a number
        System.out.print("Enter a number: ");
        num = sc.next();

        //number of digits in the number entered
        st = num.length();

        //changing the entered string into integer
        int n = Integer.valueOf(num);

        //checking if the entered number is prime
        if (prime(n, (n / 2)) == 1) {
            f++;
        }
        System.out.println(n);

        //loop for the number
        for (int i = 1; i < st; i++) {
            d = n / (int)(Math.pow(10, (st - 1)));
            e = n % (int)(Math.pow(10, (st - 1)));
            n = (e * 10) + d;
            System.out.println(n);
            
            //checking each arrangement
            if (prime(n, (n / 2)) == 1) {
                f++;
            }
        }

        //checking whether the number is circular prime
        if (f == st) {
            System.out.println(num + " is a Circular Prime");
        }        else {
            System.out.println(num + " is not a Circular Prime");

        }
        sc.close();
    }

    //checking if a number is prime
    public static int prime(int num, int count) {
        if (count == 1) {
            return 1;
        }        else {
            if (num % count == 0) {
                return 0;
            }            else {
                return prime(num, count - 1);
            }
        }
    }
}
