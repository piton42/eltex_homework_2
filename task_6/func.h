#ifndef _FUNC_H_
#define _FUNC_H_
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node {
  struct node *next;
  struct node *prev;
  char name[10];
  char second_name[10];
  char tel[10];
};
struct double_linked_list {
  size_t size;
  struct node *head;
  struct node *tail;
};
struct double_linked_list *init_list();
void delete_list(struct double_linked_list **list);
void add_element(struct double_linked_list *list);
void print_list(struct double_linked_list *list);
void find_element(struct double_linked_list *list);
void delete_element(struct double_linked_list *list, struct node *node);
struct node *get_Nth(struct double_linked_list *list, size_t index);
#endif