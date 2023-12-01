import java.util.*;

public class cartons {

    public static void main(String args[]) {

        Scanner in = new Scanner(System.in);

        //the limit of each carton
        int carton[] = {48, 24, 12, 6};
        int n;
        int total = 0;
        int count = 0;

        //user prompt
        System.out.print("Enter the number of boxes(less than 1000): ");
        n = in.nextInt();
        int n1 = n;

        //if the user's input is invalid
        if ((n < 0) || (n > 1000)) {
            System.out.println("Invalid input");
            System.exit(0);
        }

        //counting the number of cartons required
        for (int i = 0; i <= 3; i++) {
            count = n1 / carton[i];
            n1 = n1 % carton[i];
            total += count;
            if (count != 0) {
                System.out.println(carton[i] + " * " + count + " = " + (carton[i] * count));
            }
        }

        //if there are extra boxes left
        if (n1 != 0) {
            total ++;
        }
        System.out.println("Remaining number of boxes = " + n1);
        System.out.println("Total number of cartons = " + total);
        in.close();
    }    
}
