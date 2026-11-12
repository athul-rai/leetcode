
/*
 * Problem: Longest Common Prefix
 * Description: Find the longest common prefix string
 * among an array of strings.
 *
 * Rule: Compare characters at the same index across
 * all strings. If any character differs or a string
 * ends, stop the comparison.
 *
 * Example: strs = {"flower", "flow", "flight"}
 * Output: "fl"
 */

#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize)
{
    char *prefix = malloc(201 * sizeof(char));

    if (prefix == NULL)
        return NULL;

    int i, j;
    int mismatch = 0;

    for (i = 0; i < 200; i++)
    {
        if (strs[0][i] == '\0')
            break;

        for (j = 1; j < strsSize; j++)
        {
            if (strs[j][i] == '\0' ||
                strs[j][i] != strs[0][i])
            {
                mismatch = 1;
                break;
            }
        }

        if (mismatch > 0)
        {
            break;
        }
        else
        {
            prefix[i] = strs[0][i];
        }
    }

    prefix[i] = '\0';

    return prefix;
}
