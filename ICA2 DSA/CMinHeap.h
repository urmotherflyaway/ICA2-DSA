#pragma once
#include "CPlayer.h"
#define MAX_PLAYERS 50
class CMinHeap // Root is always smaller than the child
{
private:
	CPlayer* players[MAX_PLAYERS]; // Array of CPlayer pointers
	int nextIdx;
public:
	CMinHeap();
	~CMinHeap();
	bool isExist(const std::string& name); // Take as reference so it does not create a copy of the variable and instead passes by reference, aka memory address
	bool isDistanceExist(const int d, const int size); // Not changing the variable throughout the function so keep as const
	void insert(const std::string& name, const int d);
	void move(const std::string& name, const int newD); // Move function will take in name of player and new distance
	void del(const std::string& name);
	void preOrder(const int start); // No need to pass int as reference, pointer and int same number of bytes
	int returnIdx();
	int findPlayer(const std::string& name); // Returns index of player by looping through each element of the array
	int parent(int index_param);
	int leftC(int index_param);
	int rightC(int  index_param);
	void swap(int i , int j);
	int findLast(int index); // Function which returns index of the last node in the minheap
};