#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;



int linearSearch(auto data, auto key);//prototype
void selectionsort(auto& data);//prototype

int main()
{
  vector<string> inputs;
  string search_key, input;
  int result;

   cout<<"Welcome to \"sort it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
  else
   {
	   selectionsort(inputs);
       for (int i=0; i<inputs.size();i++)
        {
			cout<<inputs[i]<<" , ";
        }
    }
   
   cout<<endl<<"Program \"sort it\" is now finished."<<endl<<endl;

    return 0;
}


int linearSearch(auto data, auto key)
 {
   for (int i=0; i<data.size();i++)
     {
		 if (data[i]==key)
		   {
			   return i;
		   }
	 }
   return -1;
 }
 
 
void selectionsort(auto& data)
{
	int i,j,minIndex;
	
	for(i=0;i<data.size()-1;i++)
	 {
		 minIndex=i;
		 for (j=i+1;j<data.size();j++)
		   {
			   if(data[j]<data[minIndex])
			   {
				   minIndex=j;
			   }
		   }
		 if (minIndex!=i)
		  {
			  swap(data[i],data[minIndex]);
		  }
     }
}
		 
		 
