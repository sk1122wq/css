#include<iostream>
using namespace std;
class Employee{
	private:
		int Empid;
		string name;
		float salary;
		public:
			void setinfo(int id,string Empname,float Empsalary){
				Empid=id;
				name = Empname;
				salary = Empsalary;
				void printinfo()
				{
				cout<<"Empid"<<Empid<<endl;
				cout<<"Empname"<<Empname<<endl;
				cout<<"Empslary"<<Empsalary<<endl;	
				}				
};
int main(){
Employee E1;
E1.setinfo(1,"ahmad",5000);
cout<<"Employee detail"<<E1;
E1.printinfo();

return 0;
}

