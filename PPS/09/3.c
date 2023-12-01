/* Towers of Hanoi */

#include<stdio.h>

void hanoi(int n, char from, char to, char use)
{
    if(n==0)
        return;
    hanoi(n-1,from, use, to);
    printf("Move disk from %c to %c.\n", from, to);
    hanoi(n-1,use,to,from);
}

int main()
{
    int n;
    printf("Enter the number of disks : ");
    scanf("%d", &n);
    hanoi(n,'A', 'C', 'B');
}