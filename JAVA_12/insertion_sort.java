import java.util.*;

public class insertion_sort {

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        //user prompt for the size of the array
        System.out.print("Enter the size of the array: ");
        int n = sc.nextInt();
        int array[] = new int[n];

        //user prompt for the elements of the array
        System.out.println("Enter the elements of the array: ");
        for (int i = 0; i < n; i++) {
            array[i] = sc.nextInt();
        }

        //printing the original array
        System.out.print("The original array: ");
        for (int i = 0; i < n; i++) {
            System.out.print(array[i] + " ");
        }
        System.out.println();

        //sorting the array
        for (int i = 1; i < n; i++) {
            int k = array[i];
            int j = i - 1;

            while ((j >= 0) && (array[j] > k)) {
                array[j + 1] = array[j];
                j = j - 1;
            }
            array[j + 1] = k;
        }

        //printing the sorted array
        System.out.print("The sorted array: ");
        for (int i = 0; i < n; i++) {
            System.out.print(array[i] + " ");
        }
        System.out.println();
        sc.close();
    }

}
