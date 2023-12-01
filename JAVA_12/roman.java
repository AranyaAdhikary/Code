import java.util.*;

public class roman {

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        //using StringBuilder for storing the roman number
        StringBuilder out = new StringBuilder();
        int num;

        //unique numbers
        int numbers[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        String roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        //user prompt for a number
        System.out.print("Enter a number: ");
        num = sc.nextInt();

        //converting into roman
        if ((num > 0) && (num < 4000)) {
            for (int i = 0; i < 13; i ++) {
                while (num >= numbers[i]) {
                    num = num - numbers[i];
                    out.append(roman[i]);
                }
            }
            System.out.println("The Roman equivalent is: " + out);
        }        else {
            System.out.println("Invalid input");
        }        
        sc.close();
    }
}