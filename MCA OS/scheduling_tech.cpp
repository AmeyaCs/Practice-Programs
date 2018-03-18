#include<iostream>
using namespace std;

class scheduling_tech{

public:
	void fcfs();
	void sjf();
	void priority();
	void round_robin();


};

void scheduling_tech::fcfs(){

 
    int n,bt[20],wt[20],tat[20],avwt=0,avtat=0,i,j;
    cout<<"Enter total number of processes(maximum 20):";
    cin>>n;
 
    
    for(i=0;i<n;i++)
    {cout<<"nEnter Process Burst Time";
        cout<<"P["<<i+1<<"]:";
        cin>>bt[i];
    }
 
    wt[0]=0;    
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
    }
 
    cout<<"nProcessBurstTime" "\t" "WaitingTime" "\t" "TurnaroundTime"<<endl;

    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        avwt+=wt[i];
        avtat+=tat[i];
        cout<<"["<<i+1<<"]"<<"\t"<<bt[i]<<"\t"<<wt[i]<<"\t"<<tat[i];
    }
 
    avwt/=i;
    avtat/=i;
    cout<<"nnAverage Waiting Time:"<<avwt;
    cout<<"nAverage Turnaround Time:"<<avtat;

}

void scheduling_tech::sjf(){

    int bt[20],p[20],wt[20],tat[20],i,j,n,total=0,pos,temp;
    float avg_wt,avg_tat;
    cout<<"Enter number of process:";
    cin>>n;
 
   cout<<"nEnter Burst Time:n";
    for(i=0;i<n;i++)
    {
        cout<<"p"<<i+1;
        cin>>bt[i];
        p[i]=i+1;           
    }
 
    
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(bt[j]<bt[pos])
                pos=j;
        }
 
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
 
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
 
    wt[0]=0;   
    
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
 
        total+=wt[i];
    }
 
    avg_wt=(float)total/n; 
    total=0;
 
    cout<<"nProcesst    Burst Time    tWaiting TimetTurnaround Time";
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];     
        total+=tat[i];
        cout<<"np"<<p[i]<<bt[i]<<wt[i]<<tat[i];
    }
 
    avg_tat=(float)total/n; 
    cout<<"nAverage Waiting Time="<<avg_wt;
    cout<<"nAverage Turnaround Time="<<avg_tat;
 
}



void scheduling_tech::priority(){
   int bt[20],p[20],wt[20],tat[20],pr[20],i,j,n,total=0,pos,temp,avg_wt,avg_tat;
    cout<<"Enter Total Number of Process:";
    cin>>n;
 
    cout<<"nEnter Burst Time and Priorityn";
    for(i=0;i<n;i++)
    {
        cout<<"nP["<<i+1<<"]n";
        cout<<"Burst Time:";
        cin>>bt[i];
        cout<<"Priority:";
        cin>>pr[i];
        p[i]=i+1;           //contains process number
    }
 
    //sorting burst time, priority and process number in ascending order using selection sort
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
                pos=j;
        }
 
        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;
 
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
 
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
 
    wt[0]=0;           
    
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
 
        total+=wt[i];
    }
 
    avg_wt=total/n;      
    total=0;
 
    cout<<"nProcesst    Burst Time    tWaiting TimetTurnaround Time";
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];   
        total+=tat[i];
        cout<<"nP["<<p[i]<<"]tt  "<<bt[i]<<"tt    "<<wt[i]<<"ttt"<<tat[i];
    }
 
    avg_tat=total/n;
    cout<<"nnAverage Waiting Time="<<avg_wt;
    cout<<"nAverage Turnaround Time="<<avg_tat;


}

void scheduling_tech::round_robin(){

int count,j,n,time,remain,flag=0,time_quantum; 
  int wait_time=0,turnaround_time=0,at[10],bt[10],rt[10]; 
  cout<<"Enter Total Process: "; 
  cin>>n; 
  remain=n; 
  for(count=0;count<n;count++) 
  { 
    cout<<"Enter Arrival Time and Burst Time for Process Process Number:"<<count+1; 
    cin>>at[count]; 
    cin>>bt[count]; 
    rt[count]=bt[count]; 
  } 
 cout<<"Enter Time Quantum:"; 
  cin>>time_quantum; 
  cout<<"\n\nProcess\t|Turnaround Time|Waiting Time\n\n"; 
  for(time=0,count=0;remain!=0;) 
  { 
    if(rt[count]<=time_quantum && rt[count]>0) 
    { 
      time+=rt[count]; 
      rt[count]=0; 
      flag=1; 
    } 
    else if(rt[count]>0) 
    { 
      rt[count]-=time_quantum; 
      time+=time_quantum; 
    } 
    if(rt[count]==0 && flag==1) 
    { 
      remain--; 
      cout<<count+1<<time-at[count]<<time-at[count]-bt[count]; 
      wait_time+=time-at[count]-bt[count]; 
      turnaround_time+=time-at[count]; 
      flag=0; 
    } 
    if(count==n-1) 
      count=0; 
    else if(at[count+1]<=time) 
      count++; 
    else 
      count=0; 
  } 
  cout<<"\nAverage Waiting Time= %f\n"<<wait_time*1.0/n; 
  cout<<"Avg Turnaround Time = %f"<<turnaround_time*1.0/n; 


}



int main(){
	int ch;
	scheduling_tech st;
	do{
		cout<<"select sccheduling technique you want to performs:"<<endl;
		cout<<"1.First come First Served: \n 2.shortest job First \n 3.priority: \n 4.Round robin: \n 5.Exit"<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				st.fcfs();
				break;
			case 2:
				st.sjf();
				break;
			case 3:
				st.priority();
				break;
			case 4:
				st.round_robin();
				break;
			case 5:
				break;			
	
		}

	}while(ch!=5);

	return 0;
}

