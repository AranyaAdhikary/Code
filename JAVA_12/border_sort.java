import java.util.*;

public class border_sort {
    public static void main(String args[]) {

        Scanner in = new Scanner(System.in);

        //user prompt for the size of the matrix
        int z = 0;
        int k = 0;
        int m = 0;
        int n = 0;
        int i;
        int j;
        int temp;

        //user prompt for number of rows and columns
        do {
            System.out.print("Enter the number of rows: ");
            m = in.nextInt();
        }        while (m < 3);

        do {
            System.out.print("Enter the number of columns: ");
            n = in.nextInt();
        }        while (n < 3);

        int a = m * n - ((m - 2) * (n - 2));
        int array[] = new int[a];
        int matrix[][] = new int[m][n];

        //user prompt for the elements of the matrix
        System.out.println("Enter the elements: ");
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                matrix[i][j] = in.nextInt();

                //for border elements
                if ((i == 0) || (j == 0) || (i == m - 1) || (j == n - 1)) {
                    array[z] = matrix[i][j];
                    z++;
                }
            }
        } 

        //printing the matrix
        System.out.println("The matrix is: ");
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                System.out.print(matrix[i][j] + "\t");
            }
            System.out.println();
        }

        //sorting the array 
        for (i = 0; i < (a - 1); i++) {
            for (j = 0; j < (a - i - 1); j++) {
                if (array[j] > array[j + 1]) {
                    temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;

                }
            }
        }

        //putting values in the sorted matrix
        for (i = 0 ; i < n; i++) {
            matrix[0][i] = array[k];
            k++;
        }

        for (i = 1; i < m; i++) {
            matrix[i][n - 1] = array[k];
            k++;
        }

        for (i = (n - 2); i >= 0; i--) {
            matrix[m - 1][i] = array[k];
            k++;
        }

        for (i = (m - 2); i >= 1; i--) {
            matrix[i][0] = array[k];
            k++;
        }

        //printing the sorted matrix
        System.out.println("The sorted matrix is: ");
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                System.out.print(matrix[i][j] + "\t");
            }
            System.out.println();
        }

        //printing the borders of the matrix
        System.out.println("The sorted border of the matrix is: ");
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {

                //for middle elements
                if ((i == 0) || (j == 0) || (i == m - 1) || (j == n - 1)) {
                    System.out.print(matrix[i][j] + "\t");                    
                }                else {
                    System.out.print(" \t");

                }
            }
            System.out.println();
        }   
        in.close();

    }
}