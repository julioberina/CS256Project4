#include "SearchableVector.h"

//*******************************************************
// Copy constructor                                     *
//*******************************************************

template <class T>
SearchableVector<T>::SearchableVector(const SearchableVector &obj) :
                     SimpleVector<T>(obj.size())
{
   for(int count = 0; count < this->size(); count++)
      this->operator[](count) = obj[count];
}

//*******************************************************
// findItem function                                    *
// This function searches for item. If item is found    *
// the subscript is returned. Otherwise -1 is returned. *
//*******************************************************

template <class T>
int SearchableVector<T>::findItem(const T item)
{
  int l = 0;
  int r = this->size() - 1;
  int m = l + (r-1)/2;
  
  while (l <= r)
    {
      if (getElementAt(m) == item)
	return m;
      else if (getElementAt(m) < item)
	l = m+1;
      else
	r = m - 1;
    }
  
  return -1;
}
