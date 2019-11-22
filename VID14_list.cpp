//This program is same as the doubly linked list program in general
#include<iostream>
#include<list>
using namespace std;
int main()
{

list <int> numbers;
//This section will add all the elements to the end of the list
numbers.push_back(1);
numbers.push_back(2);
numbers.push_back(3);
numbers.push_back(4);
numbers.push_back(5);

list <int>::iterator it=numbers.begin();
it++;
cout<<"\nBefore inserting any element : ";
for(list <int>::iterator it=numbers.begin();it!=numbers.end();++it)
{
cout<<*it<<" ";

}
//This section will enter all the elements at the desired position in the list
numbers.insert(it,-1);
numbers.insert(it,-5);
cout<<"\nTHis is the element : "<<*it<<endl;
//This section will add all the elements to the front of the list

/*numbers.push_front(6);
numbers.push_front(7);
numbers.push_front(8);
numbers.push_front(9);
*/
for(list <int>::iterator it=numbers.begin();it!=numbers.end();++it)
{
cout<<*it<<" ";

}
cout<<"\nNow deleting some elements from the list : ";
list <int>::iterator eraseIt=numbers.begin();
eraseIt++;


return 0;
}