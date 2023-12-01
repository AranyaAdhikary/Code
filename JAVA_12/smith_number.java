import java.util.*;

public class smith_number {
    
    public static int sum1 = 0;
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        int smith;
        int comp;

        //user prompt
        System.out.print("Enter the limit: ");
        smith = sc.nextInt();

        //loop for checking whether it is a smith number
        for (int i = 2; i <= smith; i++) {
            comp = composite(i, (i / 2));
            if (comp == 1) {
                int sum_fact = factors(i, 2);
                int sum_digit = sum(i);

                //it is a smith number
                if (sum_fact == sum_digit) {
                    System.out.println(i);
                }                
            }
            
            //reassigning sum1 to 0 after each number
            sum1 = 0;
        }
        sc.close();
    }

    //checking whether the number is composite
    public static int composite(int num, int count) {
        if (count == 1) {
            return 0;
        }        else {
            if (num % count == 0) {
                return 1;
            }            else {
                return composite(num, count - 1);
            }
        }
    }

    //calculating the sum of digits of prime factors
    public static int factors(int num, int count) {
        if (num == 1) {
            return sum1;
        }
        while (num % count != 0) {
            count++;
        }
        
        //adding if prime factor has two digits
        if (count < 10) {
            sum1 = sum1 + count;
        }        else {
            int a = sum(count);
            sum1 = sum1 + a;
        }          
        factors((num / count), 2);
        return sum1;
    }

    //calculating the sum of digits of a number   
    public static int sum(int n) {
        if (n == 0) {
            return 0;
        }        else {
            return ((n % 10) + sum(n / 10));
        }
    }
}
