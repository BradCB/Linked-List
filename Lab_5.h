
#ifndef Lab_5_Brad_Bolton_H
#define Lab_5_Brad_Bolton_H 

#include<memory>
#include<iostream>
#include<cassert>
template<typename T >
class LinkList
{
private:
	struct Node{
		//node members
		std::shared_ptr<Node> next;	
		T  data;
		//Node constructor
		Node(){}
		//Node constructor
		Node(T v, std::shared_ptr<Node> n)
			:data(v)
			 ,next(n)
		{};
		T getValue(){return data;}
		
	};//end node struct
	std::shared_ptr<Node> head;


public:
	// linklist copy constructor method
	std::shared_ptr<Node> Clone(std::shared_ptr<Node> n)  const //link list copy constructor function
	{
		if(!n) return nullptr;
		return std::make_shared<Node>(n->data, Clone(n->next));
	}

	LinkList()                  //LinkList constructor
		:head()
	{}
	LinkList(LinkList& other)	//copy constructor call to clone
		:head(Clone(other.head))
	{}

	//Print and irt protos
	void print();
	void for_each(const std::shared_ptr<Node> &n);

	//Insertion protos
	void insertAt(T v, std::shared_ptr<Node> &n);
	void insert(T v, std::shared_ptr<Node> &n);
	void insert(T v);
	//Remove prtos
	void remove(T v, std::shared_ptr<Node> &n);
	void remove(T v);

	
	~LinkList(){}
	
	//overloaded = 
	LinkList& operator = (const LinkList &rhs)
    {
		head = rhs.head;
        this->Clone(head);
        return *this;
    }
};//end linklist class


//==================Print  Methods-----------------------
template<typename T>
void LinkList<T>::print()
{
		for_each(head);
}

template<typename T>
void LinkList<T>::for_each(const std::shared_ptr<Node> &n)
{
	if(!n) return;
	else
	{
        std::cout<<n->data<<std::endl;
        for_each(n->next);
	}
}




//==================Insertion Methods-----------------------
template<typename T>
void LinkList<T>::insertAt(T v, std::shared_ptr<Node> &n){

	
	n = std::make_shared<Node>(v,n);
   
}

template<typename T>
void LinkList<T>::insert(T v, std::shared_ptr<Node> &n)
{
	if(!n){
		insertAt(v,n);
		return;
	}
	if(v > n->data)
		insert(v, n->next);
	else
		insertAt(v,n);
}

template<typename T>
void LinkList<T>::insert(T v)
	{
		insert(v,head);
	}

//==================Remove Methods-----------------------
template<typename T>
void LinkList<T>::remove(T v, std::shared_ptr<Node> &n){

  if(!n) return;
	if(n->data == v)
	{
		n = n->next;
		remove(v,n);
	}
	else
	{
		remove(v , n->next);
	}
}

template<typename T>
void LinkList<T>::remove(T v)
{
	remove(v, head);
}



#endif