#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

struct DataElem
{
	std::string name;
	int quantity;
	DataElem *next;
    DataElem *previous;
    DataElem *front;
    DataElem *back;

	DataElem(){};
	DataElem(std::string in_name, int in_quantity)
	{
		name = in_name;
		quantity = in_quantity;
		next = NULL;
		previous = NULL;
		front = NULL;
		back = NULL;
	}
	DataElem(std::string in_name)
	{
		name = in_name;
		quantity = 0;
		next = NULL;
		previous = NULL;
		front = NULL;
		back = NULL;
	}
};

class Data
{
    public:
        Data();
        ~Data();
        void insertFirstItem(std::string name, int quantity);
        void insertItem(std::string name, int position, int quantity);
        void insertFirstNestedItem(std::string nestedName, std::string name, int quantity);
        void insertNestedItem(std::string nestedName, std::string name, int position, int quantity);

        void deleteItem(std::string name);
        void deleteInventoryItem(std::string inventoryName, std::string name);
        void changeQuantity(std::string name, int quantity);
        void changeInventoryQuantity(std::string inventoryName, std::string name, int quantity);
        void clearAll();
        void printAllItems();
        void printInventoryItems(std::string name);
        void findItem(std::string name);
        void findInventoryItem(std::string inventoryName, std::string name);

    protected:

    private:
        DataElem *front;
        DataElem *back;
};

#endif // DATA_H
