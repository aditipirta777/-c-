/*
stl = standard template library === 1990 by Alex Stepanov and Manghee = HP lab 
stl has three basic components = 
1 container - it is genric class template to store collection of data 
2 algorithms - genric function template for operating on containers 
3 iterator = is generalised smart pointer use to facilitate container they provide an interface that is needed for stl algorithms to operate on stl containers 
// why we use stl 
1 stl offers an assortment of containers 
2 stl publicize the time and storage complexity of its container 
3 stl container can grow and shrink in size automatically 
3 stl provide built in algorithms for  pre proccessing containers 
5 stl provide iterators that makes the containers and algorithms flexible and efficient 
6 stl is extensible  which means that user can add new containers and new algorithms such that stl algorithms can process stl containers as well as user defined container 
the user defined algorithms can process stl containers as well as user defined containers 

STRING = collection of characters 
the c++ standard library provide a common implementation of a string class abstraction named as string . the string class implementation implement the abstraction during tandardization.




*/
#include <iostream>
#include<string>
using namespace std;
string str1 ="hello";
string str2 ="hello";
string str2 ="hello";

/* container
a genric list representation a long program to specify  which types of elements there particular lis hold using the c++ template mechanism 
  STRING STL CLASSES 
  there are three stl 
  1 sequences = deque , list ,vector 
  vector support efficient random access to element 
  associative = map , set 
  Adapter = priority - queue , queue , stack 

  vector Class Properties 
  1 provide list representation comparable inefficiency to arrays 
  2 efficient subscripting is possible and indexes   are in the range of 0 to size of list - 1
  3 list size is dynamic can add item as we need them 
4 the index cheching is possible through a member function 
5 iterators provide efficient sequencial access
vector<T> list; // this vector is also makin a container // we write it like this because it is the collection of heterogeneus elements so to make it genric we define basic element tyle // same as int a ; int a[100];

the template classes can be instanctiated with specific type 
vector <T> () // we are creating a vector of zero length 
vector<T>(int n )
vector <T> 5 // all are same '
example 
include<iostream >
#include<iostream>
#include<fstream>
int main(){
vector<int>A(4,0); 0000
vector<int>B(2,1);//11
A.resize(8,2);00002222
}

*/

//filehandling 