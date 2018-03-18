#include <iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;
    cout << "Enter rows and columns for first matrix a[i][j]: "<<endl<<"i= ";
    cin >> r1;
    cout<<"j= ";
    cin>> c1;
    cout <<endl<<"Enter rows and columns for second matrix b[i][j]: "<<endl<<"i= ";
    cin >> r2;
    cout<<"j= ";
    cin>> c2;


    while (c1!=r2)
    {
        cout << "Error! column of first matrix not equal to row of second.";
	cout << "Enter rows and columns for first matrix a[i][j]: "<<endl<<"i= ";
	cin >> r1;
	cout<<"j= ";
	cin>> c1;
	cout <<endl<<"Enter rows and columns for second matrix b[i][j]: "<<endl<<"i= ";
	cin >> r2;
	cout<<"j= ";
	cin>> c2;
    }


    cout << endl << "Enter elements of matrix a[i][j]:" << endl;
    for(i=0; i<r1; ++i)
    for(j=0; j<c1; ++j)
    {
        cout << "Enter element a[" << i+1 <<"]["<< j+1 << "] : ";
        cin >> a[i][j];
    }


    cout << endl << "Enter elements of matrix b[i][j]:" << endl;
    for(i=0; i<r2; ++i)
    for(j=0; j<c2; ++j)
    {
        cout << "Enter element b[" << i+1 <<"][" << j+1 << "] : ";
        cin >> b[i][j];
    }


    for(i=0; i<r1; ++i)
    for(j=0; j<c2; ++j)
    {
       mult[i][j]=0;
    }


    for(i=0; i<r1; ++i)
    for(j=0; j<c2; ++j)
    for(k=0; k<c1; ++k)
    {
        mult[i][j]+=a[i][k]*b[k][j];
    }

    cout << endl << "a[i][j]: " << endl;
    for(i=0; i<r1; ++i)
    for(j=0; j<c1; ++j)
    {
        cout << " " << a[i][j];
        if(j==c1-1)
            cout << endl;
    }

    cout << endl << "b[i][j]: " << endl;
    for(i=0; i<r2; ++i)
    for(j=0; j<c2; ++j)
    {
        cout << " " << b[i][j];
        if(j==c2-1)
            cout << endl;
    }


    cout << endl << "Output Matrix: " << endl;
    for(i=0; i<r1; ++i)
    for(j=0; j<c2; ++j)
    {
        cout << " " << mult[i][j];
        if(j==c2-1)
            cout << endl;
    }
    return 0;
}
