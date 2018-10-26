//Include all necessary libraries
//Chronicher Delta
#include<iostream>
using namespace std;
int merge(int a[], int deltax, int b[], int deltay, int c[])//Merging 2 arrays by giving suitable commands
{
	for(int i=0;i<deltax;i++)//Defining conditions for array
	c[i]=a[i];
	for(int i=0;i<deltay;i++)
	c[i+deltax]=b[i];
}
int max(int arr[])
{ //To calculate maximum
	int maximum=0;
	int i=0;
	while(arr[i]>=0)//Initialising the conditions
	{
	 if(arr[i]>=maximum)	//Defining conditions for arrayys
	 { 
		maximum=arr[i];
         }
	 i++;	
	}
	return maximum;
}
int min(int arr[])
{
//To calculate minimum
	int minimum=arr[0];
	int i=0;
	while(arr[i]>=0) //Conditions
	{
	 if(arr[i]<minimum) //Array conditions
	 { 
		minimum=arr[i];
         }
	 i++;	
	}
	return minimum;
}
//Now we have to write the main function
int main()
{ 
//Define both arrays
	int arr1[100],arr2[100];
	int deltax,deltay;
	cout<<"Please tell the sizes of each of the arrays: "<<endl;
	cin>>deltax;
	cin>>deltay;
	for(int i=0;i<deltax;i++)
	 {
	 	cout<<"Please enter the number of elements "<<i+1<<": "<<endl;
	 	cin>>arr1[i];//Take value from terminal as given by the user
	 }
	 cout<<endl;
	for(int i=0;i<deltay;i++)
	 {
	 	cout<<"Please enter the number of elements "<<i+1<<": "<<endl;
	 	cin>>arr2[i];//Take value from the terminal as given by the user
	 }
//Initialise the merging process
//Thank you Roman	 
	 int arr3[200];
	 merge(arr1,deltax,arr2,deltay,arr3);
	 
	for(int i=0;i<deltax+deltay;i++)
	 cout<<arr3[i]<<endl;
// Output Minimum and maximum values of the new arrays
    cout<<"The maximum element of the new array is: "<<max(arr3)<<endl;
    cout<<"The minimum element of the new array is: "<<min(arr3)<<endl;
	 return 0;
	 
}

//Thank You Roman
//The shield will reunite
//SPEAR
//DDT
//Curbstomp
