import java.util.*;

public class prime_triplets {

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);

        //user prompt for the lower limit
        System.out.print("Enter the lower limit : ");
        int m = in.nextInt();

        //user prompt for the upper limit
        System.out.print("Enter the upper limit : ");
        int n = in.nextInt();

        System.out.println("The prime triplets : ");

        //loop for prime triplets and printing
        for (int i = m; i <= (n - 6); i++) {
            if ((prime(i) == 1) && (prime(i + 2) == 1) && (prime(i + 6) == 1)) {
                System.out.println(i + ", " + (i + 2) + ", " + (i + 6));
            }          else if ((prime(i) == 1) && (prime(i + 4) == 1) && (prime(i + 6) == 1)) {
                System.out.println(i + ", " + (i + 4) + ", " + (i + 6));
            }
        }
        in.close();
    }

    //prime function
    static int prime(int n) {
        int c = 0;

        //loop for counting the number of factors
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                c++;
            }
        }

        //checking whether the number is prime
        if (c == 2) {
            return 1;
        }            else {
            return 0;
        }
    }
}