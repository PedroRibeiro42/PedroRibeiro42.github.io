// Example of custom sorting of persons
// First increasingly by age and in case of tie be alphabetical order
// ----------------------------------
// Pedro Ribeiro (DCC/FCUP) - 04/10/2019
// ----------------------------------

import java.io.*;
import java.util.*;

// Classe to store a person
class Person implements Comparable<Person> {
    public int age;
    public String name;

    Person(int a, String n) {
	age = a;
	name = n;
    }

    // Define how to compare two objectos of class Person
    // This function should return:
    //  - number < 0 if the object is smaller than "p"
    //  - number > 0 if the object is larger than "p"
    //  - zero, if the object is equal "p"
    @Override
    public int compareTo(Person p) {
	if (age < p.age) return +1;
	if (age > p.age) return -1;
	return name.compareTo(p.name);
    }
}

public class CustomSort {
    public static void main(String args[]) {
	Scanner stdin = new Scanner(System.in);

	int n    = stdin.nextInt();	
	Person v[] = new Person[n]; 
	for (int i = 0; i<n; i++)
	    v[i] = new Person(stdin.nextInt(), stdin.next());
       	
	Arrays.sort(v);
	
	for (int i = 0; i<n; i++)
	    System.out.println(v[i].age + " " + v[i].name);
    }
}
