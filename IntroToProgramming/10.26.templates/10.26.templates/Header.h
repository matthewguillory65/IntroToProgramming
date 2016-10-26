#pragma once
#include "10.26.templates.cpp"
template<class temporary>
{

	//Create the following function:
	//Description: Returns the lower of two values
	//Input: Two templates arguements (a, b)
	//Output: The lower of the two values
	template<typename T>
	T Min(T a, T b)
	{
		return a < b;
	}

	//Create the following function:
	//Description: Returns the higher of the two values
	//Input: Two templates (a, b)
	//Output: The higher of the two values a and b
	template<typename Z>
	Z Max(Z a, Z b)
	{
		return a > b;
	}

	//Create the following function:
	//Description: Constrains a value within the range of two other values
	//Input: Three template arguements (min, max, val)
	//Output: The value of the val constrained between min and max
	template<typename min, typename max, typename val>
	int Clamp(min a, max b, val c)
	{
		while (a <= c && c <= b)
		{
			return c;
		}
		while (c < a)
		{
			return a;
		}
		while (c > b)
		{
			return b;
		}
	}

	//Create the following function:
	//Description: As above but first checks if a and b represent alphabetical characters. If so, the functions will return the value that is alphabetically lower
	//Input: Two template arguements(a, b)
	//Output: The alphabetically lower of the two values a and b
	template<typename H>
	char Min(char a, char b)
	{
		return b;
	}

	//Create the following function:
	//Description: As above but first checks if a and b represent alphabetical characters. If so, the functions will return the value that is alphabetically higher
	//Input: Two template arguements(a, b)
	//Output: The alphabetically higher of the two values a and b
	template<typename G>
	char Max(char a, char b)
	{
		return a;
	}


	//Description: Creates an array on the heap of the specified capacity. The new heap memory should be zeroed using memset.
	//				You should store the value of capacity and size for later use(size should start at zero)
	//Input: A single integer specifying the capacity for the data array
	//Output: N/A

	template<typename class>
	int Constructor()
	{

	}


	//Description: Deletes the data pointed to on the heap
	//Input: N/A
	//Output: N/A

	int Deconstructor()
	{

	}



	//Description: Adds an item to the next empty array location (you should be able to use the
	//				size value as an index to the next free location). Before adding the new item
	//				to the array, we should check if there is room and call Expand if not
	//Input: One template arguements (item)
	//Output: None

	int Add()
	{

	}



	//Description: Doubles the capacity of the data array by creating a new array on the heap
	//				with twice the current capacity, and then copying the data from the current
	//				array into the new array using memcpy. (Be sure to delete the old memory!)
	//Input: None
	//Output: None
	void Expand()
	{

	}




	//Description: Returns an item from the array at a specified index(like a regular subscript)
	//Input: A single integer specifying the array-index of the item to return
	//Output: A copy/reference (your choice) of an item from the data array

	void Operator()
	{

	}
};