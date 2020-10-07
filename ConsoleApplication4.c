#include <stdio.h>
#define SAMPLE_SIZE 11

int GetNext() {
    static int i = 0;
    static int sample_input[SAMPLE_SIZE] =
    { 0xf12, 0xea2, 0x684, 0x217, 0xfff, 0x1f5,
    0xf12, 0xea2, 0x684, 0xfff, 0x1f5
    };

    if (i < SAMPLE_SIZE)
        return sample_input[i++];
    else
        return -1;
}

int main()
{

    int i, j, counter;
    int tab[SAMPLE_SIZE];

    for (i = 0; i < SAMPLE_SIZE; i++)
    {
        tab[i] = GetNext();
    }

    for (i = 0; i < SAMPLE_SIZE; i++)
    {
        counter = 0;
        for (j = 0; j < SAMPLE_SIZE; j++)
        {
            if (tab[i] == tab[j] && i != j)
            {
                counter++;
                if (counter == 1)
                    printf("Element ma pare \n");
            }
        }
        if (counter == 0)
            printf("Element %d bez pary \n", tab[i]);
    }

    return 0;
}
