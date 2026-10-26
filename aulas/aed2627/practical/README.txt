
// select the sorting algorithm and the size of the instances

g++ -std=c++17 -D SELECTIONSORT -D SMALL class04_ex1.cpp
// selection sort and will test the small size examples (n = 1000)

g++ -std=c++17 -D INSERTIONSORT -D SMALL -D MEDIUM class04_ex1.cpp
// small and medium size

g++ -std=c++17 -D INSERTIONSORT -D SMALL class04_ex1.cpp
g++ -std=c++17 -D MERGESORT -D SMALL class04_ex1.cpp
g++ -std=c++17 -D QUICKSORT -D SMALL class04_ex1.cpp
g++ -std=c++17 -D RANDOMIZEDQUICKSORT -D SMALL  class04_ex1.cpp


g++ -std=c++17 -D SELECTIONSORT -D MEDIUM class04_ex1.cpp
g++ -std=c++17 -D INSERTIONSORT -D MEDIUM class04_ex1.cpp
g++ -std=c++17 -D MERGESORT -D MEDIUM class04_ex1.cpp
g++ -std=c++17 -D QUICKSORT -D MEDIUM class04_ex1.cpp
g++ -std=c++17 -D RANDOMIZEDQUICKSORT -D MEDIUM  class04_ex1.cpp

g++ -std=c++17 -D SELECTIONSORT -D LARGE class04_ex1.cpp
g++ -std=c++17 -D INSERTIONSORT -D LARGE class04_ex1.cpp
g++ -std=c++17 -D MERGESORT -D LARGE class04_ex1.cpp
g++ -std=c++17 -D QUICKSORT -D LARGE class04_ex1.cpp
g++ -std=c++17 -D RANDOMIZEDQUICKSORT -D LARGE class04_ex1.cpp

g++ -std=c++17 -D MERGESORT -D HUGE class04_ex1.cpp
g++ -std=c++17 -D RANDOMIZEDQUICKSORT -D HUGE class04_ex1.cpp

g++ -std=c++17 -D STL_SORT -D HUGE class04_ex1.cpp
// STL version

./a.out
