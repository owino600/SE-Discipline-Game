MEMORY MANAGMENT
- Memory management is coordinating and controling of computer memory and ensuring programs and
processes have the neccessary memory resources for execution.
- their are various functions used in memory allocation and management
	#malloc()
	#realloc()
	#calloc()
	#free()

1: MALLOC()
- malloc() function is used to allocate specific amount of memory during runtime.
	e.g. 	int *age
		age = malloc(10 * sizeof(int))
- the above allocate memory dynamically for an array that can hold 10 integers.
sizeof(int) : determines the size of bytes of a single integer on the specific compiler.
- 10* sizeof(int) : calculates the total memory required for 10 integers. hence int has 4 bytes so
for ten integers it will be 10 * 4 = 40 bytes

DYNAMIC ALLOCATION
- this is a key word to take close look at.
dynamic allocation is the process of assigning memory space for variables, arrays and DS during the program execution
rather than at the compile time.
- After allocating a memory using malloc always remember to free it to avoid memory leaks and wastage of memory as
the memory should be returned to the system after use.

2: REALLOC()
- Used to resize an already allocated block of memory, takes two arguments a pointer to the previously allocated
block and the new size you want a memory for.
- If a pointer passed to realloc is NULL it will bahave as malloc and allocate a new memory of the given size.
- Memory copy : if the system needs to move the existing data to a new location ( maybe it could not resize in place)
it automatically copies the data from the old block of memory to the new block of memory.
	example:
- we can realloc the above malloc to accept 20 integers
- int *age
- age = realloc(age, 20 * sizeof(int))
