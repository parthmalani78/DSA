#include <iostream>

using namespace std;
int a[5];
int f = -1;
int r = -1;
int size = 5;

void Insert(int number)
{
    if ((r + 1) % size == f)
    {
        cout << "Queue is full" << endl;
    }
    else if (f == -1 && r == -1)
    {
        f++;
        r++;
        a[r] = number;
    }
    else
    {
        r = (r + 1) % size;
        a[r] = number;
    }
}
void display()
{

    if (r == -1)
    {
        cout << "Queue is Empty" << endl;
    }
    for (int i = f; i != r; i = (i + 1) % size)
    {
        cout << "a[" << i << "] :- " << a[i] << endl;
    }
}
void Delete()
{
    if (r < 0)
    {
        cout << "Queue is Empty" << endl;
    }
    else if (f == r)
    {
        f = -1;
        r = -1;
    }
    else
    {
        f++;
    }
}
int main()
{
    int n;
    do
    {
        int number = 0;
        cout << "Insert" << endl;
        cout << "Display" << endl;
        cout << "Enter the choice:- ";
        cin >> n;

        switch (n)
        {
        case 1:
            cout << "Enter the number:- ";
            cin >> number;
            Insert(number);
            break;
        case 2:
            display();
            break;
        case 3:
            Delete();
            break;

        default:
            break;
        }

    } while (n != 4);
}
