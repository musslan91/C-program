#include <stdlib.h>
#include "array_SLL.h"

array_SLL *create_SLL( int size ) {

	array_SLL *res = malloc(sizeof(array_SLL));
	res->size = size;
	res->used = 0;
	res->SL = 0;
	return res;
}
int destroy_SLL( array_SLL *array ) {
}
int insert_SLL( array_SLL *array, double value ) {

	if(array->used >= array->size){
		return 0;
	}
	array->SL = insert_first(value, array->SL);
	array->used++;
	return 1;
}
double lookup_SLL( array_SLL *array, int index ) {

	SL_list *a = array->SL;
	for(int i=0; i < index; i++)
	a = get_next(a);
	return a->content;

}
int find_SLL( array_SLL *array, double value ) {
	SL_list *a = array->SL;
	int index = 0;
	while(1){
		if(get_first(a) == value) return index;
		a = get_next(a);
		index++;
	}
	return -1;
}
