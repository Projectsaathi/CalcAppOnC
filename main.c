#include <stdio.h>
void add (int, int);
int main() {
    int a, b;
    printf("Enter value of A:\n");
    scanf("%d",&a);
    printf("Enter value of B:\n");
    scanf("%d",&b);
    add(a, b);
    return 0;

}

void add (int a, int b)
{
    int c;
    c = a +b;

    printf("The Addition of %d and %d is %d", a, b, c);
}

