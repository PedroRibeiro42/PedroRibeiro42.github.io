// Example: sorting 10 integers
// ----------------------------------
// Pedro Ribeiro (DCC/FCUP) - 04/10/2019
// ----------------------------------

import java.io.*;
import java.util.*;

public class Sort {
    public static void main(String args[]) {

	// Example array
	int v[] = {33, 4, 28, 18, 15, 2, 8, 17, 42, 39};

	System.out.print("Before sorting: ");
	for (int i=0; i<10; i++)
	    System.out.print(v[i] + " ");
	System.out.println();
	
	// Call to standard sort algorithm in Java
	Arrays.sort(v);

	System.out.print("After sorting: ");
	for (int i=0; i<10; i++)
	    System.out.print(v[i] + " ");
	System.out.println();

    }
}
