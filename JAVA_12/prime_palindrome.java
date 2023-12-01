import java.util.*;

public class prime_palindrome {

    public static void main(String args[]) {

        Scanner in = new Scanner(System.in);
        int ul;
        int ll;
        int count = 0;

        //user prompts
        System.out.print("Enter the lower limit(less than 3000: ");
        ll = in.nextInt();
        System.out.print("Enter the upper limit(less than 3000): ");
        ul = in.nextInt();

        //checking the validity of the inputs
        if ((ul < 0) || (ul > 3000) || (ll < 0) || (ll > 3000) || (ll > ul)) {
            System.out.println("Invalid input");
            System.exit(0);
        }
        System.out.println("The prime palindromes: ");

        //using loop for each number
        for (int i = ll; i <= ul; i++) {
            int pri = prime(i, (i / 2));
            int palin = palindrome(i);

            //the number is prime and palindrome
            if ((pri == 1) && (palin == 1)) {
                System.out.println(i);
                count++;
            }
        }
        System.out.println("The number of prime palindromes: " + count);                
        in.close();
    }

    //checking if the number is prime
    public static int prime(int n, int count) {

        //if the number is prime
        if (count == 1) {
            return 1;
        }        else {

            //if the number is composite
            if (n % count == 0) {
                return 0;
            }            else {
                return prime(n, count - 1);
            }
        }
    }

    //checking if the number is palindrome
    public static int palindrome(int n) {
        int d;
        int n1 = n;
        int rev = 0;

        //reversing the number
        while (n > 0) {
            d = n % 10;
            rev = (rev * 10) + d;
            n = n / 10;
        }

        if (n1 == rev) {
            return 1;
        }        else {
            return 0;
        }
    }
}
