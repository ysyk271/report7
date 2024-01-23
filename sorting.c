#include <stdio.h>

void print_array(int data[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", data[i]);
    }
}

void sort_array(int data[], int size)
{
    for (int j = 0; j < size - 2; j++)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (data[i] < data[i + 1])
            {
                int conv = data[i + 1];
                data[i + 1] = data[i];
                data[i] = conv;
            }
        }
    }
}
int main()
{
    const int SIZE = 5; // 定数として配列のサイズを宣言
    int scores[SIZE] = {0, 60, 70, 100, 90};
    print_array(scores, SIZE);
    putchar('\n');
    sort_array(scores, SIZE);
    print_array(scores, SIZE);
    return 0;
}