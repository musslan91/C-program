#include <stdio.h>
#include <stdlib.h>

#include "SL_list.h"

void print_LL(SL_list *LL) {
   if(LL == 0) { 
      printf("NULL\n");
      return;
   }
   printf("%d ", LL->content);
   print_LL(LL->next);
}

int main(void) {
   SL_list *LL = EMPTY_LIST, *LL2 = EMPTY_LIST, *RLL = EMPTY_LIST;
   SL_list *SLL = EMPTY_LIST;
   SLL = insert_sorted(4, SLL);
   SLL = insert_sorted(7, SLL);
   SLL = insert_sorted(1, SLL);
   SLL = insert_sorted(3, SLL);
   SLL = insert_sorted(5, SLL);
   printf("sorterad lista: "); print_LL(SLL);
   // 7 5 4 3 1?
   printf("tom lista: "); print_LL(LL);
   // printf("LL == %d\n", is_empty(LL));
   // LL2 = get_next(LL);
   LL = insert_first(2, LL);
   /*printf("LL == %d\n", is_empty(LL));*/
   LL = insert_first(3, LL);
   LL = insert_first(5, LL);
   LL = insert_first(7, LL);
   printf("småprim: "); print_LL(LL);
   RLL = reverse(LL);
   printf("småprim omv: "); print_LL(RLL);
   printf("småprim: "); print_LL(LL);
   LL2 = insert_last_2(2, LL2);
   /*printf("LL == %d\n", is_empty(LL));*/
   LL2 = insert_last_2(4, LL2);
   LL2 = insert_last_2(6, LL2);
   LL2 = insert_last_2(8, LL2);
   printf("jämn: "); print_LL(LL2);
   return 0;
}