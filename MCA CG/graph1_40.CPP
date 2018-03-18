#include<iostream>
#include<iomanip>

using namespace std;
int n,edge[10][10],visited[1],i,j;
char* color[]={"red","yellow","green","blue","pink"};
int vertex[10];
char* vertexcolor[10];
int col[10];
void adjacency();
void colorv();
int main()
{

adjacency();
colorv();
return 0;
}

void adjacency()
{
cout<<"Enter number of vertices: "<<endl;
cin>>n;

for(i=1;i<n+1;i++)
  {
   for(j=1;j<n+1;j++)
     {
       cout<<"Enter 1 if there is an edge between "<<i<<" and "<<j<<" : ";
       cout<<i<<j;
       cin>>edge[i][j];
      cout<<i<<j;
     }
  }
 for(i=1;i<n+1;i++)
 {

  vertex[i]=i;
 }
/* for(i=1;i<n+1;i++)
 {
  cout<<vertex[i];
 }   */

for(i=1;i<n+1;i++)
  {
   for(j=1;j<n+1;j++)
     {
      cout<<edge[i][j];

     }
   cout<<endl;
   }
}

void colorv()
{
vertexcolor[1]=color[0];

 for(i=1;i<n+1;i++)
 {
   for(j=i+1;j<n+1;j++)
   {
    //if(vertexcolor[j]!=" ")
    
    //vertexcolor[i]=color[i-1];
    if(edge[i][j]==0 && col[j]!=1)
    {
      vertexcolor[j]=vertexcolor[i];

   }
     else
     {
      vertexcolor[j]=color[i];
      col[j]=1;
     }
//   i=j;
   }
 }

/*for(i=1;i<n+1;i++)
{
  if(vertexcolor[i]==" ")
  {
   vertexcolor[i]=color[i];
  }
}    */

   for(i=1;i<n+1;i++)
   {
   cout<<" Vertex "<<vertex[i]< <" : "<<vertexcolor[i];
   }
}
