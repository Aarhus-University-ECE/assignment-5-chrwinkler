#include "jollyjumper.h"
#include <stdbool.h>
#include <stdlib.h>

int isJollyJumber(const int seq[], int size)
{
    /*post: answer to exercise 7.a*/
    int i;
    bool diffs_found[size - 1];

    for (i = 0; i < size; i++)
    {
        if (seq[i] < seq[i + 1])
        {
            for (int k = 0; seq[k] < seq[k + 1]; k++)
            {
                diffs_found[i] = k;
            }
        }
        if (seq[i] > seq[i + 1])
        {
            for (int k = 0; seq[k] > seq[k + 1]; k++)
            {
                diffs_found[i] = k;
            }
        }
        if (diffs_found[size] == seq[size - 1])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
