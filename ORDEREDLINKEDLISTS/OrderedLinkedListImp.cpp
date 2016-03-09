#include "OrderdLinkedListDef.h"

template <class Type>
bool orderedLinkedList<Type>::search(const Type& searchItem) const
{
	bool found = false;
	nodeType<Type> *current; //pointer to traverse the list
	current = first; //start the search at the first node
	while (current != NULL && !found)
	{
		if (current->info >= searchItem)
		{
			found = true;
		}
			
		else
		{
			current = current->link;
		}
	}
			
	if (found)
	{
		found = (current->info == searchItem); //test for equality
	}
		
	return found;
}

	