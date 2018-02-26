#include <stdlib.h>
#include <stdio.h>
#include "SL_list.h"

int is_empty(SL_list *LL) {
   if(LL == 0) return 1; else return 0;
}

int get_first(SL_list *LL) {
   return LL->content;
}

SL_list *get_next(SL_list *LL) {
   if(is_empty(LL)) {
      printf("ERROR: trying to get_next "
             "from NULL pointer\n");
      return 0;
   }
   return LL->next;
}

SL_list *set_next(SL_list *LL, SL_list *new_next) {
   LL->next = new_next;
   return LL;
}

SL_list *insert_last_2(int val, SL_list *LL) {
   if(is_empty(LL))
      return insert_first(val, LL);
   return set_next(LL, insert_last_2(val, get_next(LL)));
}

SL_list *insert_last(int val, SL_list *LL) {
   SL_list *link;
   if(is_empty(LL))
      return insert_first(val, LL);
   link = LL;
   while(!is_empty(get_next(link)))
      link = get_next(link);
   link->next = insert_first(val, 0);
   return LL;
}

SL_list *insert_first(int val, SL_list *LL) {
   SL_list *res = (SL_list *)malloc(sizeof(SL_list));
   res->content = val;
   res->next = LL;
   return res;
}

SL_list *insert_sorted(int val, SL_list *LL) {
   if(is_empty(LL))
      return insert_first(val, LL);
   if(get_first(LL) < val)
      return insert_first(val, LL);
   if(is_empty(get_next(LL))) {
      LL->next = insert_first(val, EMPTY_LIST);
      return LL;
   }
   if(get_first(get_next(LL)) >= val) {
      LL->next = insert_first(val, get_next(LL));
      return LL;
   }
   LL->next = insert_sorted(val, LL->next);
   return LL;
}

SL_list *copy_node(SL_list *pLL, SL_list *revLL) {
    return insert_first(get_first(pLL), revLL);
}

SL_list *reverse(SL_list *LL) {
   SL_list *pLL = LL, *revLL = EMPTY_LIST;
   while(!is_empty(pLL)) {
      revLL = copy_node(pLL, revLL);
      pLL = pLL->next;
   }
   return revLL;
}