#include <stdio.h>
#include <stdlib.h>

typedef struct Character_Stack
{
    char val[50];
    int top;
} stack;

typedef struct Float_Stack
{
    int top;
    float val[50];
} fstack;

void main()
{
    stack st;
    st.top = -1;
    char src[50];
    void push(stack *, char);
    char pop(stack *);
    int getPriority(char);
    void conversion(stack *, char[]);
    void evaluation(fstack *, char[]);

    printf("Enter the Expression: ");
    gets(src);
    conversion(&st, src);
}

void push(stack *s, char v)
{
    s->val[++s->top] = v;
}

char pop(stack *s)
{
    return (s->val[s->top--]);
}

void fpush(fstack *s, char v)
{
    s->val[++s->top] = v;
}

float fpop(fstack *s)
{
    return (s->val[s->top--]);
}

int getPriority(char ch)
{
    if (ch == '*' || ch == '/' || ch == '%')
    {
        return 1;
    }
    return 0;
}

void evaluation(fstack *fst, char tar[])
{
    int i, val1, val2;
    for (i = 0; tar[i] != '\0'; i++)
    {
        if (tar[i] - '0' >= 0 && tar[i] - '0' <= 9)
        {
            fpush(fst, (float)(tar[i] - '0'));
        }
        else if (tar[i] == '+' || tar[i] == '-' || tar[i] == '*' || tar[i] == '/' || tar[i] == '%')
        {
            val2 = fpop(fst);
            val1 = fpop(fst);
            if (tar[i] == '+')
            {
                fpush(fst, val1 + val2);
            }
            else if (tar[i] == '-')
            {
                fpush(fst, val1 - val2);
            }
            else if (tar[i] == '*')
            {
                fpush(fst, val1 * val2);
            }
            else if (tar[i] == '/')
            {
                fpush(fst, val1 / val2);
            }
            else if (tar[i] == '%')
            {
                fpush(fst, val1 % val2);
            }
        }
        else
        {
            printf("\nThe expression contains an alphabet so can't be evaluated.");
            return;
        }
    }
    printf("\nThe evaluated result is: %f", fpop(fst));
}

void conversion(stack *st, char src[])
{
    int i, j = 0, x;
    char tar[50], ch;
    fstack fst;
    fst.top = -1;
    push(st, '(');
    for (i = 0; src[i] != '\0'; i++)
    {
        if (src[i] == '(')
        {
            push(st, src[i]);
        }
        else if (src[i] >= 65 & src[i] <= 90 || src[i] >= 97 && src[i] <= 122 || src[i] - '0' >= 0 && src[i] - '0' <= 9)
        {
            tar[j++] = src[i];
        }
        else if (src[i] == ')')
        {
            for (ch = pop(st); ch != '('; ch = pop(st))
            {
                tar[j++] = ch;
            }
        }
        else if (src[i] == '+' || src[i] == '-' || src[i] == '*' || src[i] == '/' || src[i] == '%')
        {
            for (x = getPriority(st->val[st->top]); x == 1; x = getPriority(st->val[st->top]))
            {
                tar[j++] = pop(st);
            }
            push(st, src[i]);
        }
    }
    for (ch = pop(st); ch != '('; ch = pop(st))
    {
        tar[j++] = ch;
    }
    tar[j] = '\0';
    printf("The postfix form is: %s", tar);
    evaluation(&fst, tar);
}
