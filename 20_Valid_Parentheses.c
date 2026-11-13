#include <stdbool.h>

/*
 * Problem: Valid Parentheses
 * Description: Determine whether the input string contains valid
 * brackets. Every opening bracket must be closed by the same type
 * of bracket in the correct order.
 * Example: s = "{[()]}"
 * Output: true
 */

bool isValid(char* s) {
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            top++;
            stack[top] = s[i];
        }
        else
        {
            if (top == -1)
                return false;

            char last = stack[top];
            top--;

            if ((s[i] == ')' && last != '(') ||
                (s[i] == '}' && last != '{') ||
                (s[i] == ']' && last != '['))
            {
                return false;
            }
        }
    }

    return top == -1;
}