#include "ReferenceManager.h"
#include"Textbook.h"
#include"Article.h"
#include"Reference.h"
bool ReferenceManager::add(Reference& x)
{
	
	int Size = GetCapacity();
	if (Size < AllReferences.size())
	{
		cout << "size of array"<<AllReferences.size() << endl;
		AllReferences[GetCapacity()] = &x;
		SetCapacity(1);
		return true;
	}
	else
	{
		return false;
	}
}


int ReferenceManager::get(int pos)
{
	
	return AllReferences.at(pos)->getid();
}




Reference* ReferenceManager::getReferenceByPos(int x)
{
	return AllReferences.at(x);
}

bool ReferenceManager::search(int id)
{
	for (int i = 0;i < GetCapacity();i++)
	{
		int temp;
		temp=AllReferences.at(i)->getid();
		if (id == temp)
		{
			cout << "find it" << endl;
			return true;
		}
	}
	return false;
}


Reference* ReferenceManager::getReferenceByid(int id)
{
	for (int i = 0;i < GetCapacity();i++)
	{
		int temp;
		temp = AllReferences.at(i)->getid();
		if (id == temp)
			return AllReferences.at(i);
		
	}
}



ReferenceManager::ReferenceManager(int x)
{	
	AllReferences.resize(x);
	capacity = 0;
}

ReferenceManager::ReferenceManager()
{
	capacity = 0;
}

bool ReferenceManager::deleteElement(int pos)
{
	if (pos < capacity&& pos>=0)
	{

		for (int i = pos;i < (GetCapacity()-1);i++)
		{	
			AllReferences[i] = AllReferences[i + 1];
			cout << "Replace "<<i<<" with "<<i+1 << endl;
		}
		Reference* x=new Reference();
		AllReferences[GetCapacity()-1] = x;
		delete x;
		SetCapacity(0);
		return true;
	}
	else
		return false;
}

int ReferenceManager::GetCapacity()
{
	return capacity;
}

void ReferenceManager::SetCapacity(bool x)
{if(x)
	capacity++;
else
	capacity--;
}
