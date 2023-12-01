import java.util.*;

public class saddle_point {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int i;
        int j;
        int max = 0;
        int min = 0;
        int p = 0;
        int n = 0;

        //user prompt for the size of the matrix
        do {
            System.out.print("Enter the size of the matrix: ");
            n = sc.nextInt();
        }        while (n < 3);

        int matrix[][] = new int[n][n];

        //user prompt for elements of the matrix
        System.out.println("Enter the elements of the matrix(only positive numbers): ");
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {

                //checking if the entered elements are positive
                do {
                    matrix[i][j] = sc.nextInt();
                }        while (matrix[i][j] < 0);
            }
        }

        //print the matrix
        System.out.println("The matrix is:");
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                System.out.print(matrix[i][j] + "\t");
            }
            System.out.println();
        }

        for (i = 0; i < n; i++) {

            //finding the maximum in each row and column
            max = matrix[0][i];
            for (j = 0; j < n; j++) {
                if (matrix[j][i] > max) {
                    max = matrix[j][i];
                    p = j;
                }
            }

            //finding the mimimum in each row and column
            min = matrix[p][0];
            for (j = 0; j < n; j++) {
                if (matrix[p][j] < min) {
                    min = matrix[p][j];
                }
            }

            //checking if the matrix has a saddle point
            if (max == min) {
                System.out.println("The saddle point of the matrix is " + min);
                break;
            }
            
            System.out.print(min);
            System.out.print(max);
        }


        if (i == n) {
            System.out.println("No Saddle Point");
        }
        sc.close();
    }
}
