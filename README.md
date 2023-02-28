# Push_swap

## About

> Writing a sorting algorithm is always a very important step in a developer’s journey. It is often the first encounter with the concept of complexity. Sorting algorithms and their complexity are part of the classic questions discussedduring job interviews. It’s probably a good time to look at these concepts since you’llhave to face them at some point.

## Moves allowed

- sa : swap the first 2 elements at the top of stack a (do nothing if there is only one or no elements).
- sb : swap the first 2 elements at the top of stack b (do nothing if there is only one or no elements).
- ss : sa and sb at the same time.
- pa : take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
- pb : take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
- ra : shift up all elements of stack a by 1. The first element becomes the last one.
- rb : shift up all elements of stack b by 1. The first element becomes the last one.
- rr : ra and rb at the same time.
- rra : shift down all elements of stack a by 1. The last element becomes the first one.
- rrb : shift down all elements of stack b by 1. The last element becomes the first one.
- rrr : rra and rrb at the same time.
