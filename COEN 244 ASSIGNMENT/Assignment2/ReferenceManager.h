#pragma once
#include "Reference.h"
#include"Textbook.h"
#include"Article.h"
#include<vector>
#include<string>
using namespace std;
class ReferenceManager
{

public:
	bool add(Reference &reference);
	int get(int pos);
	bool search(int id);
	ReferenceManager(int capacity);
	ReferenceManager();
	bool deleteElement(int pos);
	int GetCapacity();
	void SetCapacity(bool x);
	Reference* getReferenceByPos(int x);
	Reference* getReferenceByid(int x);
	int getMaxsize()
	{
		return AllReferences.size();
	}


private:
	vector <Reference*> AllReferences;
	int capacity;


};

