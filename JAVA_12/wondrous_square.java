import java.util.*;

public class wondrous_square {

    public static void main(String args[]) {

        Scanner in = new Scanner(System.in);
        int n = 0;
        int i;
        int j;
        int k = 0;
        int count_row = 0;
        int count_col = 0;
        int sq = 1;

        //user prompt for size of matrix and checking whether it is more than 2 and less than 10
        do {
            System.out.print("Enter the size of the matrix: ");
            n = in.nextInt();
        }        while ((n < 2) || (n > 10));

        int matrix[][] = new int[n][n];
        int array[] = new int[n * n];

        //user prompt for elements of the matrix
        System.out.println("Enter the elements of the matrix: ");
        for (i = 0; i < n; i++) {
            for (j = 0; j < n ; j++) {
                matrix[i][j] = in.nextInt();

                //checking whether the input is between 1 & n^2
                if ((matrix[i][j] < 1) || (matrix[i][j] > (n * n))) {
                    sq = 0;
                }

                array[k] = matrix[i][j];
                k++;
            }
        }

        //ckecking if an element is repeated
        for (i = 0; i < ((n * n) - 1); i++) {
            for (j = i + 1; j < (n * n); j++) {
                if (array[i] == array[j]) {
                    sq = 0;
                }
            }
        }

        //printing the matrix
        System.out.println("The matrix is: ");
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                System.out.printf(matrix[i][j] + "\t");
            }
            System.out.println();
        }

        int count = (int)(0.5 * n * ((n * n) + 1));

        //checking if the sum of each row and column are equal
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                count_row += matrix[i][j];
                count_col += matrix[j][i];
            }

            if ((count_row != count) || (count_col != count)) {
                sq = 0;
            }
            count_row = 0;
            count_col = 0;
        }

        //checking if it a wondrous square
        if (sq == 0) {
            System.out.println("Not a wondrous square");
        }        else {
            System.out.println("A wondrous square");
        }

        in.close();

    }
}
