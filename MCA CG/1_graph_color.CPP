#include<iostream.h>
#include<conio.h>
void main()
{  	clrscr();
	int a[100][100];
	int c[100];
      /*	char ch[5];
	ch[0]='R';
	ch[1]='G';
	ch[2]='B';
	ch[3]='W';
	ch[4]='P'; */
	int b;
	cout<<"enter no of vertices : ";
	cin>>b;
	cout<<endl<<"enter matrix : \n";
	for(int i=0;i<b;i++){
		for(int j=0;j<b;j++){
			cin>>a[i][j];
		}
		cout<<"\n";
		cout<<endl;
	       c[i]=1;
	}
	cout<<endl<<"color index : ";
	for(int k=0;k<b;k++){
		for(int l=k+1;l<b;l++){
			if(a[k][l]==1){
				c[l]++;
				if(c[k]==c[l]){
					c[l]--;
				}
			}
		}
		cout<<endl<<k<<" : "<<c[k];
	}
	getch();
}