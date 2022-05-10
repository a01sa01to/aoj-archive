/*
 * Author: a01sa01to
 * Submission URL: https://onlinejudge.u-aizu.ac.jp/status/users/a01sa01to/submissions/1/ALDS1_3_A/judge/6587967/C
 * Submitted at: 2022-05-10 17:39:58
 * Problem URL: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_3_A
 * Result: AC
 * Execution Time: 0.0 s
 */

/*
- 剰余: a を b で割った余りを返す
      例) 7 3 % -> 1

- 累乗: a を b で乗じた結果を返す
       ただし、結果は2x10^9以内であることが前提
      例) 2 3 ^ -> 8
*/

#include <ctype.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#define STACKSIZE 100

void rpn(const char *);

int main(void) {
  char buffer[1024];

  fgets(buffer, sizeof(buffer), stdin);

    rpn(buffer);
  

  return 0;
}

struct stack {
  int top;
  int val[STACKSIZE];
};

void init(struct stack *st) {
  st->top = -1;
}

void push(struct stack *st, int data) {
  if (st->top == STACKSIZE - 1) {
    printf("Error: stack is full\n");
    exit(1);
  }
  st->val[++(st->top)] = data;
}

int pop(struct stack *st) {
  if (st->top == -1) {
    printf("Error: stack is empty\n");
    exit(1);
  }
  return st->val[(st->top)--];
}

void rpn(const char *p) {
  struct stack st;
  int n = 0, isMinus = 0, numIn = 0;

  init(&st);

  while (*p != '\0') {
    if (isdigit(*p)) {
      n *= 10;
      n += (*p - '0');
      numIn = 1;
    }
    else if (*p == '+') {
      push(&st, pop(&st) + pop(&st));
    }
    else if (*p == '*') {
      push(&st, pop(&st) * pop(&st));
    }
    else if (*p == '-') {
      p++;
      if (*p != '\0' && isdigit(*p))
        isMinus = 1;
      else {
        int a = pop(&st);
        int b = pop(&st);
        push(&st, b - a);
      }
      p--;
    }
    else if (*p == '/') {
      int a = pop(&st);
      int b = pop(&st);
      if (a == 0) {
        printf("Error: division by zero\n");
        exit(1);
      }
      push(&st, b / a);
    }
    else if (*p == '%') {
      int a = pop(&st);
      int b = pop(&st);
      if (a == 0) {
        printf("Error: division by zero\n");
        exit(1);
      }
      push(&st, b % a);
    }
    else if (*p == '^') {
      int a = pop(&st);
      int b = pop(&st);

      int r = 1;
      while (a > 0) {
        if (a & 1) r *= b;
        b *= b;
        a >>= 1;
      }
      push(&st, r);
    }
    else if (isspace(*p)) {
      if (numIn) {
        if (isMinus)
          push(&st, -n);
        else
          push(&st, n);
        n = 0;
        numIn = isMinus = 0;
      }
    }
    p++;
  }
  printf("%d\n", pop(&st));
}
