#include<iostream>
using namespace std;
#define MAX 20

int main(){

	int a[MAX],b[MAX];
	int N,x,y,k,i,j;
	char choice;
	cout<<"WELCOME USER TO SORTING PROGRAM 'Z-jaidSort' "<<endl;
	do{	
		//ip
		cout<<"Enter the total number of elements you need to sort"<<endl;
		cin>>N;
		cout<<"Enter elements"<<endl;
		for(int h=0;h<N;h++){
			cin>>a[h];
		}	
		//ip display
		cout<<"You entered elements are:"<<endl;
		for(int o=0;o<N;o++){
			cout<<a[o]<<"\t";
		}	
		//sort
		for(i=0;i<N;i++){	
			x=0,y=0;	
			for(j=0;j<N;j++){			
				if(a[i]>a[j]){
					x++;
					}
				if(a[i]==a[j]){
					y++;
					}
			}

			for(k=0;k<y;k++){
				b[x+k]=a[i];
			}
		}	
		//op display
		cout<<"\nSorted elements in ascending order are:"<<endl;
		for(int e=0;e<N;e++){
		cout<<b[e]<<"\t";
		}
		cout<<endl;
		cout<<"Want to Continue...press(y) \n Want to Exit...press(n or any key) "<<endl;
		cin>>choice;
	}while(choice=='y');
	cout<<"Thank you!!! \n Have a nice day"<<endl;

}

/*
Copyright on Sorting Algorithm (Z-jaidSort).

Diary Number : 11908/2019-CO/SW
Registration Number : SW-13002/2019
*/
