# Linked List Problems

I was looking around for some good exercises to make the Linked List learnings I've been (reading "[Mastering Algorithms with C](http://amzn.to/ex3OzO)") doing stick and after a search on Google I found Stanford's [LinkListProblems.pdf](http://cslibrary.stanford.edu/105/). It was pretty helpful and fun. These are my solutions to those.

## Building

### Building using Rake

To build using Rake, you will need Ruby, Rubygems and the Rake gem installed. If you have a Mac with Leopard or Snow Leopard on it, you already have what you need.

    rake SOURCE_FILE_WITHOUT_EXT

To build an individual solution where the output binary has the same basename of the source file. Like:

    rake 15-mergesort-test
    ./15-mergesort-test

Or to build them all:

    rake all

### Building with gcc

The Rake task's are just a thin layer on the following:

    gcc -c -o src/linked-list-problems.o src/linked-list-problems.c
    gcc -o OUTPUT_BINARY src/SOURCE_FILE src/linked-list-problems.o
    
Like:

    gcc -c -o src/linked-list-problems.o src/linked-list-problems.c
    gcc -o 15-mergesort-test src/15-mergesort-test.c src/linked-list-problems.o

## TODO

* Redo solutions with different linked list implementations, probably closer to what's in "Mastering Algorithms in C"

## License

<a rel="license" href="http://creativecommons.org/licenses/by-nc-sa/3.0/"><img alt="Creative Commons License" style="border-width:0" src="http://i.creativecommons.org/l/by-nc-sa/3.0/88x31.png" /></a><br />This work is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-nc-sa/3.0/">Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License</a>.
