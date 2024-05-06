#include "student.h"

/**
 * @brief Define the complete function definition here. Be sure to enlist the prototype of each function
 * defined here in the corresponding header file.
 *
 */

void student_print_all_detail(const Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s|%s|%d|%s|%s\n", students[i].id, students[i].name, students[i].year, students[i].gender, students[i].dorm);
    }
}