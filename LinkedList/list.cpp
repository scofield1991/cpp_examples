#include "list.h"

ListClass::ListClass()
{
    ItemType Item;
    Front = GetNode(Item, NULL);
    Rear = Front;
    Count = 0;
}

ListClass::~ListClass()
{
    ClearList();
    FreeNode(Front);
}

void ListClass::ClearList()
{
    ListNodePtr Current, Temp;

    Current = Front->Next;
    while(Current != NULL)
    {
        Temp = Current;
        Current = Current->Next;
        FreeNode(Temp);
    }

    Front->Next = NULL;
    Rear = Front;
    Count = 0;
}

ListNodePtr ListClass::GetNode(const ItemType& Item,
                                ListNodePtr NextPtr)
{
    ListNodePtr NodePtr;
    NodePtr = new (nothrow) ListNodeClass(Item, NextPtr);
    if(NodePtr == NULL)
    {
        cerr << "Memory allocation error!" << endl;
        exit(1);
    }
    return NodePtr;
}

void ListClass::FreeNode(ListNodePtr NodePtr)
{
    delete NodePtr;
}

bool ListClass::Empty() const
{
    if(Count > 0)
        return false;
    else
        return true;
}

void ListClass::InsertFront(const ItemType& Item)
{
    ListNodePtr NodePtr;

    NodePtr = GetNode(Item, Front->Next);
    Front->Next = NodePtr;

    if(Count == 0)
    Rear = NodePtr;
    Count++;
}

void ListClass::InsertRear(const ItemType& Item)
{
    ListNodePtr NodePtr;
    NodePtr = GetNode(Item)l
    Rear->Next = NodePtr;
    Rear = NodePtr;
}

void ListClass::InsertInOrder(const ItemType& Item)
{
    ListNodePtr Current, Last, Temp;
    bool Proceed;

    Temp = GetNode(Item);
    Current = Front->Next;
    Last = Front;
    Proceed = true;

    while(Proceed && (Current != NULL))
    {
        if(Item > Current->Info)
        {
            Last = Current;
            Current = Current->Next;
        }
        else
            Proceed = false;
    }

    Lasr->Next = Temp;
    Temp->Next = Current;

    if(Current == NULL)
        Rear = Temp;
    Count++;

}
