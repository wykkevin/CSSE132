// CSSE 132 Lab 5: simple.c
// Names: Yuankai Wang (Kevin), Chen Yin

#include "data.h"
#include "stdlib.h"

void main()
{
  struct db_entry stack;
  stack.name = "st";
  stack.value = "1";
  dbe_print(&stack);

  struct db_entry* heap;
  heap = malloc( sizeof(struct db_entry));
  heap->name = "h";
  heap->value = "2";
  dbe_print(heap);
  free(heap);

  struct db_entry* data = dbe_alloc("My Name", "My Value");
  dbe_print(data);
  dbe_free(data); 
}
