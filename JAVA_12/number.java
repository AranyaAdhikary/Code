import java.util.*;

public class number {

    public static void main(String args[]) {

        Scanner in = new Scanner(System.in);
        int m;
        int d;
        int n;
        int count = 0;
        int number = -1;
        
        //user prompts
        System.out.print("Enter a number between 100 and 10000: ");
        m = in.nextInt();
        System.out.print("Enter a number less than 100: ");
        n = in.nextInt();

        //checking whether the user inputs are valid
        if ((m < 100) || (m > 10000) || (n < 1) || (n >= 100)) {
            System.out.println("Invalid input");
            System.exit(0);
        }
        
        //finding the number
        for (int i = m + 1; i < Integer.MAX_VALUE; i++) {
            count = 0;
            int sum = 0;
            int num = i;
            while (num != 0) {
                d = num % 10;
                sum = sum + d;
                num = num / 10;
                count ++;
            }

            //when the sum of digits matches n
            if (sum == n) {
                number = i;
                break;
            }
        }

        //if no such number exists
        if (number == -1) {
            System.out.println("Invalid input");
        }        else {
            System.out.println("The required number: " + number);
            System.out.println("The total number of digits: " + count);
        }
        in.close();
    }
}
