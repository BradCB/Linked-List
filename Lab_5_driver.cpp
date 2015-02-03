#include "Lab_5_Brad_Bolton.h"
#include <iostream>
#include <string>


int main(){

	std::cout<<"Testing empty link list print"<<std::endl;
	LinkList<int> i;
	i.print();
	std::cout<<"Print should be empty"<<std::endl<<std::endl;


	//--------Int test----------------
	std::cout<<"-------Testing int link list-----------"<<std::endl;
	std::cout<<"Inserting 21,5,1,4,2"<<std::endl;
	LinkList<int> integers;
	integers.insert(21);
	integers.insert(5);
	integers.insert(1);
	integers.insert(4);
	integers.insert(2);
	std::cout<<"-------Testing int link list sort-----------"<<std::endl;
	std::cout<<"Should print 1,2,4,5,21"<<std::endl;
	integers.print();
	std::cout<<"-------Testing int link list remove-----------"<<std::endl;
	std::cout<<"Removing 4 and 1"<<std::endl;
	integers.remove(4);
	integers.remove(1);
	std::cout<<"Should print 2,5,21"<<std::endl;
	integers.print();
	std::cout<<"************Int test complete*********************"<<std::endl<<std::endl;
	//LinkList<string> s;


	//---------char test-------------
	
	//LinkList<char> charsList;
	
	/*for(int i = 0; i<10; ++i){
		int chars = (rand()%50);
		char c = (char)(chars+65);
		charsList.insert(c);
	}
	charsList.print();*/
	std::cout<<"-------Testing char link list-----------"<<std::endl;
	
	std::cout<<"Inserting b,f,a,c,d,e"<<std::endl;
	LinkList<char> c;
	c.insert('b');
	c.insert('f');
	c.insert('a');
	c.insert('c');
	c.insert('d');
	c.insert('e');
	std::cout<<"--Should print a,b,c,d,e,f"<<std::endl;
	c.print();
	std::cout<<"-------Testing char link list remove-----------"<<std::endl;
	std::cout<<"Removing c and b"<<std::endl;
	c.remove('c');
	c.remove('b');
	std::cout<<"Should print a,d,e,f"<<std::endl;
	c.print();
	std::cout<<"************char test complete*********************"<<std::endl<<std::endl;

	std::cout<<"-------Testing float link list-----------"<<std::endl;
	
	std::cout<<"Inserting 5.4,2.8,2.3,10.54,1.75"<<std::endl;
	LinkList<float> f;
	f.insert(5.4f);
	f.insert(2.8f);
	f.insert(2.3f);
	f.insert(10.54f);
	f.insert(1.75f);
	std::cout<<"Should print 1.75,2.3,2.8,5.4,10.54"<<std::endl;
	f.print();
	std::cout<<"-------Testing float link list remove-----------"<<std::endl;
	std::cout<<"Removing 2.3 and 5.4"<<std::endl;
	f.remove(2.3f);
	f.remove(5.4f);
	std::cout<<"Should print 1.75,2.8,10.54"<<std::endl;
	f.print();
	std::cout<<"************float test complete*********************"<<std::endl<<std::endl;

	std::cout<<"-------Testing double link list-----------"<<std::endl;
	std::cout<<"Inserting 5.4,2.8,2.3,10.54,1.75"<<std::endl;
	LinkList<double> d;
	d.insert(5.4);
	d.insert(2.8);
	d.insert(2.3);
	d.insert(10.54);
	d.insert(1.75);
	std::cout<<"Should print 1.75,2.3,2.8,5.4,10.54"<<std::endl;
	d.print();
	std::cout<<"-------Testing double link list remove-----------"<<std::endl;
	std::cout<<"Removing 2.3 and 5.4"<<std::endl;
	d.remove(2.3);
	d.remove(5.4);
	std::cout<<"Should print 1.75,2.8,10.54"<<std::endl;
	d.print();
	std::cout<<"************double test complete*********************"<<std::endl<<std::endl;

	LinkList<std::string> s; 
	std::cout<<"-------Testing string link list-----------"<<std::endl;
	std::cout<<"Inserting b, d, e, f, c, a"<<std::endl;
	s.insert("b");
	s.insert("d");
	s.insert("e");
	s.insert("f");
	s.insert("c");
	s.insert("a");
	std::cout<<"Should print a, b, c, d, e, f"<<std::endl;
	s.print();
	std::cout<<"-------Testing string link list remove-----------"<<std::endl;
	std::cout<<"Removing d and a"<<std::endl;
	s.remove("d");
	s.remove("a");
	std::cout<<"Should print b,c,e,f"<<std::endl;
	s.print();
	std::cout<<"************string test complete*********************"<<std::endl<<std::endl;


	
}