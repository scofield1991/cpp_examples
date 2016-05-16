#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include "listnode.h"
using namespace std;

class ListClass
{
private:
    ListNodePtr GetNode(const ItemType& Item,
        ListNodePtr NextPtr = NULL)
    void FreeNode(ListNodePtr NodePtr);
    void ClearList(void);
    ListNodePtr Front, Rear;
    int Count;
public:
    ListClass();
    ~ListClass();
    int NumItems() const;
    bool Empty() const;
    void InsertFront(const ItemType& Item);
    void InsertRear(const ItemType& Item);
    void InsertInOrder(const ItemType& Item);
    ItemType RemoveFront();
    ListNodePtr Find(const ItemType& Item) const;
};

#endif // LIST_H_INCLUDED
