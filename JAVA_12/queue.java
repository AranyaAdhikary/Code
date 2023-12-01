import java.util.*;

public class queue {

    static int n;
    int r;
    int f;
    int a[] = new int[20];

    //queue
    queue(int nn) {
        n = nn;
        f = -1;
        r = -1;
        for (int i = 0; i < 20; i++) {
            a[i] = 0;
        }
    }

    //main fuction
    public static void main(String args[]) {

        int nn;
        int p;
        int m;
        int i = 0;
        Scanner sc = new Scanner(System.in);

        //user prompt for the number of values in the queue
        System.out.print("Enter the number of values to be created in the queue : ");
        nn = sc.nextInt();

        queue ob = new queue(nn);

        //user prompt for thr values
        System.out.println("Enter the values : ");
        while (i < n) {
            int a = sc.nextInt();
            ob.insert_item(a);
            i++;
        }
        System.out.println();

        //printing the queue
        System.out.print("The queue is : ");
        ob.display();
        System.out.println();

        //user prompt for the number of values to be deleted
        System.out.print("How many values to be deleted? ");
        m = sc.nextInt();
        i = 0;
        System.out.println();

        //printing the items deleted
        System.out.print("Items deleted : ");
        while (i < m) {
            p = ob.delete_item();
            System.out.print(p + " ");
            i++;
        }
        System.out.println();

        //printing the final queue
        System.out.print("The final queue is : ");
        ob.display();
        System.out.println();
        sc.close();
    }

    //insert_item function
    public void insert_item(int val) {
        if (r == (n - 1)) {
            System.out.println("Queue is full");
        }
        r++;
        a[r] = val;
        if (f == -1) {
            f = 0;
        }
    }

    //delete_item function
    public int delete_item() {
        int data;
        if (f == -1) {
            System.out.println("Stack is empty");
        }
        data = a[f];
        a[f] = 0;
        if (f == r) {
            f = -1;
            r = -1;
        }        else {
            f++;
        }
        return (data);
    }

    //display function
    void display() {
        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + " ");
        }
    }
}
