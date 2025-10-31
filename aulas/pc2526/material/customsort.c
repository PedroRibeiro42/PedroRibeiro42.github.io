// Example of custom sorting of persons
// First increasingly by age and in case of tie be alphabetical order
// ----------------------------------
// Pedro Ribeiro (DCC/FCUP) - 04/10/2019
// ----------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRINGS 500
#define MAX_LENGTH  30

// Type to store a person
typedef struct {
  int age;
  char name[MAX_LENGTH+1]; // (+1) Space for '\0'
} Person;

// This function compares two elements of an array (needed for qsort)
// It should return:
//  - number < 0 if "a" is smaller than "b"
//  - number > 0 if "a" is larger than "b"
//  - zero, if "a" and "b" are equal
int comparePerson(const void *a, const void *b) {
  Person *p1 = (Person *)a;
  Person *p2 = (Person *)b;

  if (p1->age < p2->age) return -1;
  if (p1->age > p2->age) return +1;
  return strcmp(p1->name, p2->name);
}

int main() {
  int i, n;
  Person v[MAX_STRINGS];
  
  scanf("%d", &n);
  for (i=0; i<n; i++)
    scanf("%d %s", &v[i].age, v[i].name);

  qsort(v, n, sizeof(Person), comparePerson);
  
  for (i=0; i<n; i++)
    printf("%d %s\n", v[i].age, v[i].name);
  
  return 0;
}
