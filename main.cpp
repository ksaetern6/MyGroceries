#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector<string> list; //array of 5 strings
  int numItems = 0;
  char input;
  
  do{
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  if(input == 'A'){
	string name = "";
	cin>>name;
	
	list.push_back(name);
	numItems++;
  }//if
  else if(input == 'Q' || input == 'q'){
	if(numItems==0){
		cout << "no items on the list" << endl;
	}//if
	else{
		for(int x = 0; x < list.size(); x++){
			cout << list[x] << endl;
		}//for
	}//else
  }//else if
	}while(input != 'Q' && input != 'q');
  
  return 0;
}
