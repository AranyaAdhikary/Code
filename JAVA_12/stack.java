import java.util.*;

public class stack {

    static int n;
    int top;
    int a[] = new int[10];

    //stack
    stack(int nn) {
        n = nn;
        top = -1;
        for (int i = 0; i < 10; i++) {
            a[i] = 0;
        }

    }

    //main function
    public static void main(String args[]) {
        int nn;
        int i = 0;
        int p;
        int m;
        Scanner in = new Scanner(System.in);

        //user prompt for the number of values in stack
        System.out.print("Enter the number of values to be entered in the stack : ");
        nn = in.nextInt();

        stack ob = new stack(nn);

        //user prompt for the values
        System.out.println("Enter the values : ");
        while (i < n) {
            int a = in.nextInt();
            ob.push_item(a);
            i++;
        }
        System.out.println();
        ob.display();
        System.out.println();

        //user prompt for the number of items to be popped
        System.out.print("How many items to be popped ? ");
        m = in.nextInt();
        i = 0;
        System.out.print("Items popped : ");
        while (i < m) {
            p = ob.pop_item();
            System.out.print(p + " ");
            i++;
        }
        System.out.println();
        ob.display();
        in.close();

    }

    //push_item function
    public void push_item(int val) {
        if (top == n - 1) {
            System.out.println("Stack is full");
        }        else {
            top++;
            a[top] = val;
        }

    }

    //pop_item function
    public int pop_item() {
        int data = 0;
        if (top == -1) {
            System.out.println("Stack is empty");
        }
        data = a[top];
        a[top] = 0;
        top--;
        return(data);
    }

    //display fuction
    public void display() {
        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + " ");
        }
    }
}

