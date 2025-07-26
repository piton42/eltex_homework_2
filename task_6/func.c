#include "func.h"
struct double_linked_list *init_list() {
  struct double_linked_list *tmp =
      (struct double_linked_list *)malloc(sizeof(struct double_linked_list));
  if (tmp == NULL) {
    perror("malloc failed");
    exit(EXIT_FAILURE);
  }
  tmp->head = tmp->tail = NULL;
  return tmp;
}
void delete_list(struct double_linked_list **list) {
  if (list == NULL || *list == NULL) {
    return;
  }
  struct node *tmp = (*list)->head;
  struct node *next = NULL;
  while (tmp) {
    next = tmp->next;
    free(tmp);
    tmp = next;
  }
  free(*list);
  (*list) = NULL;
}
void add_element(struct double_linked_list *list) {
  if (list == NULL) {
    fprintf(stderr, "Error: list is NULL in add_element\n");
    return;
  }
  struct node *tmp = (struct node *)malloc(sizeof(struct node));
  if (tmp == NULL) {
    perror("malloc failed");
    exit(EXIT_FAILURE);
  }
  printf("Введите имя: ");
  scanf("%9s", tmp->name);
  printf("Введите фамилию: ");
  scanf("%9s", tmp->second_name);
  printf("Введите номер телефона: ");
  scanf("%9s", tmp->tel);
  tmp->next = NULL;
  tmp->prev = list->tail;
  if (list->tail) {
    list->tail->next = tmp;
  }
  list->tail = tmp;
  if (list->head == NULL) {
    list->head = tmp;
  }
  list->size++;
}
void print_list(struct double_linked_list *list) {
  if (list == NULL) {
    printf("Список не существует\n");
    return;
  }
  if (list->head == NULL) {
    printf("Список пуст\n");
    return;
  }
  struct node *current = list->head;
  int i = 1;
  while (current) {
    printf("%d. %s %s %s\n", i, current->name, current->second_name,
           current->tel);
    current = current->next;
    i++;
  }
}
void find_element(struct double_linked_list *list) {
  struct node *current = list->head;
  int i = 1, flag = 0;
  char name[10];
  printf("Введите имя для поиска: ");
  scanf("%9s", name);
  while (current) {
    if (strcmp(current->name, name) == 0) {
      flag = 1;
      printf("%d. %s %s %s\n", i, current->name, current->second_name,
             current->tel);
      i++;
    }
    current = current->next;
  }
  if (flag == 0) {
    printf("Ни одного элемента не найдено\n");
  }
}
void delete_element(struct double_linked_list *list, struct node *node) {
  if (node == NULL) {
    printf("Список пуст\n");
    return;
  }
  if (list == NULL) {
    printf("Список не существует\n");
    return;
  }
  if (node->prev) {
    node->prev->next = node->next;
  } else {
    list->head = node->next;
  }
  if (node->next) {
    node->next->prev = node->prev;
  } else {
    list->tail = node->prev;
  }

  free(node);
}
struct node *get_Nth(struct double_linked_list *list, size_t index) {
  struct node *tmp = list->head;
  size_t i = 1;
  while (tmp && (i < index)) {
    tmp = tmp->next;
    i++;
  }
  return tmp;
}