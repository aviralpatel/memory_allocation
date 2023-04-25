
# Malloc function in C

The malloc() function in C is used to allocate a block of memory on the heap. The heap is a region of memory that is dynamically allocated at runtime and is used to store data that is not known at compile time.

The malloc() function takes a single argument, which is the number of bytes to allocate. The function returns a void pointer to the start of the allocated block of memory. You can cast this void pointer to the appropriate data type before using it.
 
```
int* ptr = (int*)malloc(7*sizeof(int));
```

In this example, the malloc() function is used to allocate space for an array of 5 integers. The sizeof() operator is used to determine the size of an integer on the current platform.


