#include <stdio.h>

struct node
{
    int data;
    char ch;
    struct node *ptr;
};

int main()
{
    struct node a, b, c, d;

    a.data = 100;
    a.ch = 'A';
    a.ptr = NULL;

    b.data = 200;
    b.ch = 'a';
    b.ptr = NULL;

    c.data = 300;
    c.ch = 'B';
    c.ptr = NULL;

    d.data = 400;
    d.ch = 'b';
    d.ptr = NULL;

    a.ptr = &b;
    b.ptr = &a;
    c.ptr = &d;
    d.ptr = &c;

    printf("A data: %d,char: %c\n", a.ptr->data, a.ptr->ch);
    printf("B data: %d,char: %c\n", b.ptr->data, b.ptr->ch);
    printf("C data: %d,char: %c\n", c.ptr->data, c.ptr->ch);
    printf("D data: %d,char: %c\n", d.ptr->data, d.ptr->ch);
}
