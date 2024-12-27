#pragma once

template<class type>
struct Node
{
	type data;
	Node* left;
	Node* right;
	Node(const type data):data(data),left(nullptr),right(nullptr){}
};