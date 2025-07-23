#ifndef _FUNC_H_
#define _FUNC_H_
struct abonent {
  char name[10];
  char second_name[10];
  char tel[10];
};
void add_abonent(struct abonent *, int);
void del_abonent(struct abonent *, int);
void find_abonent(struct abonent *, int, char*);
void display_abonent(struct abonent *, int);
#endif