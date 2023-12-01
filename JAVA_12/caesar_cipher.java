import java.util.*;

public class caesar_cipher {
    
    public static void main(String args[]) {
        
        Scanner in = new Scanner(System.in);
        String text;
        int n;
        int l;
        char ch;

        //checking the condition of length of user input
        do {
            System.out.print("Enter your string: ");
            text = in.nextLine();
            
            //calculating the length of user input
            l = text.length();
        } while ((l < 4) || (l > 100));

        System.out.print("The cipher text is: ");

        //checking whether the character is upper or lower case 
        for (int i = 0; i < l; i++) {
            ch = text.charAt(i);
            n = (int)ch;

            if (Character.isUpperCase(ch)) {
                ch = (char)((((n + 13) - 65) % 26) + 65);
            }
            
            if (Character.isLowerCase(ch)) {
                ch = (char)((((n + 13) - 97) % 26) + 97);
            }

            System.out.print(ch);        
        }
        
        //printing a new line
        System.out.println();
        in.close();

    }
}

