#include "Pony.hpp"

int main()
{
	Pony stack_pony("Stack");
	stack_pony.ponyOnTheStack();
	Pony *heap = new Pony("Heap");
	heap->ponyOnTheHeap();
	delete(heap);
}