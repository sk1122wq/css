#include<iostream>
using namespace std;
class Employee{
	private:
		int empID;
		string name;
		float salary;
		public:
			void setinfo(int id,string empname,float empsalary){
				empID = id;
				name = empname;
				salary = empsalary;
			}
			void printinfo(){
				cout<<"Employee ID:"<<empID<<endl;
				cout<<"name:"<<name<<endl;
				cout<<"salary:"<<salary<<endl;
			}
};
int main(){
	Employee emp1,emp2;
	emp1.setinfo(101,"Alice",55000.50);
	emp2.setinfo(102,"BOb",62000.75);
	cout<<"Employee 1 Details:"<<endl;
	emp1.printinfo();
	cout<<endl;
	cout<<"Employee 2:"<<endl;
	return 0;
	}
