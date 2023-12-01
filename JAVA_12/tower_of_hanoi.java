import java.util.*;

public class tower_of_hanoi {

    //main function
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        //user prompt for the number of disks
        System.out.print("Enter the number of disks : ");
        int n = sc.nextInt();
        toh(n, 'A', 'B', 'C');
        sc.close();
    }

    //toh function
    static void toh(int disk, char source, char auxillary, char destination) {
        if (disk > 0) {

            //recursion
            toh((disk - 1), source, destination, auxillary);
            System.out.println("Moving disk " + disk + " from " + source + " to " + destination);
            toh((disk - 1), auxillary, source, destination);
        }
    }
}

