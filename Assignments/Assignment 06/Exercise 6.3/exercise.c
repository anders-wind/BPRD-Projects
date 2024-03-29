#include <stdio.h>
#include <stdlib.h>
#include "trace.h"

typedef struct _list {
  int head;
  struct _list *tail;
} list;

list *nil() { return NULL; }

list *cons(int head, list *tail) {
  list *this = malloc(sizeof(list));
  this->head = head;
  this->tail = tail;
  return this;
}

int is_nil(list *l)  { return !l; }
int is_cons(list *l) { return !!l;  }

list *nats(int max) {
 if (max <= 0) {
   return nil();
 } else {
    int i;
    list *res;
    for (i = 0; i < max; i++) {
      res = cons(i + 1, res);
    }
    return res;
 }
}

void print_list(list *l) {
  do {
    printf("%d :: ", l->head);
    l = l->tail;
  } while(is_cons(l));
  printf("nil\n");
}

void free_list(list *l) {
  while (is_cons(l)) {
    free(l);
    l = l->tail;
  }
  free(l->tail);
}

void test1() {
  int i;
  for (i = 5; i < 10; i++) {
    list *l = nats(i);
    print_list(l);
    free_list(l);
  }
}

void test2() {
  // fill in ...
}

void test3() {
  // fill in ...
}

void test4() {
  // fill in ...
}

int main(int argc, const char *argv[])
{
  test1();
  test2();
  test3();
  test4();
  return EXIT_SUCCESS;
}