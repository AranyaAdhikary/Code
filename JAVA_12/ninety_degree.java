import java.util.*;

public class ninety_degree {

    public static void main(String args[]) {

        Scanner in = new Scanner(System.in);
        System.out.print("Enter the size of the matrix: ");
        int m = in.nextInt();
        int i;
        int j;

        //checking whether the input in valid
        if ((m < 2) || (m > 10)) {
            System.out.println("Invalid input");
            System.exit(0);
        }

        int og[][] = new int[m][m];
        int ar[][] = new int[m][m];

        System.out.println("Enter the elemnets of matrix: ");
        for (i = 0; i < m; i++) {
            for (j = 0; j < m; j++) {
                og[i][j] = in.nextInt();
            }
        }

        //printing the original matrix
        System.out.println("The original matrix: ");
        for (i = 0; i < m; i++) {
            for (j = 0; j < m; j++) {
                System.out.print(og[i][j] + "\t");
            }
            System.out.println();
        }

        int k = m - 1;

        //rotating the matrix
        for (i = 0; i < m; i++) {
            for (j = 0; j < m; j++) {
                ar[j][k] = og[i][j];
            }
            k--;
        }

        //printing the matrix after rotation
        System.out.println("The original matrix: ");
        for (i = 0; i < m; i++) {
            for (j = 0; j < m; j++) {
                System.out.print(ar[i][j] + "\t");
            }
            System.out.println();
        }
        in.close();
    }    
}