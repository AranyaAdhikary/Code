import java.util.*;

public class spiral_matrix {
    public static void main(String args[]) {

        Scanner in = new Scanner(System.in);

        //user prompt for the size of the matrix
        System.out.print("Enter the size of the matrix: ");
        int n = in.nextInt();
        int matrix[][] = new int[n][n];
        int k = 1;
        int c1 = 0;
        int c2 = n - 1;
        int r1 = 0;
        int r2 = n - 1;
        int i;
        int j;

        //putting values into spiral matrix
        while (k <= (n * n))
        {            
            for (i = c1 ; i <= c2; i++) {
                matrix[r1][i] = k;
                k++;
            }
        
            for (i = (r1 + 1); i <= r2; i++) {
                matrix[i][c2] = k;
                k++;
            }
        
            for (i = (c2 - 1); i >= c1; i--) {
                matrix[r2][i] = k;
                k++;
            }
        
            for (i = (r2 - 1); i >= (r1 + 1); i--) {
                matrix[i][c1] = k;
                k++;
            }

            c1++;
            c2--;
            r1++;
            r2--;
        }

        //printing the spiral matrix
        System.out.println("The spiral matrix is: ");
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                System.out.print(matrix[i][j] + "\t");
            }
            System.out.println();
        }
    }
}
