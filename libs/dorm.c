#include "dorm.h"

void dorm_print_all_detail(const Dorm dorms[], int size){
    for (int i = 0; i < size; i++) {
        printf("%s|%d|%s|%d\n", dorms[i].name, dorms[i].capacity, dorms[i].gender, dorms[i].occupied);
    }
}