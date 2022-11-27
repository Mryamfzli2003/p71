#include <iostream>
using namespace std;



 main()
{
 	int n,m,i,f;
 	
 	cout<<"please enter n :";
 	cin>>n;
 	cout<<"please enter m :";
 	cin>>m;
 	
 	f=1;
 	
 	for(i=1 ; i<=m ; i++){
 		
 		f*=n;
	 }
	 cout<<f;
	 
}



