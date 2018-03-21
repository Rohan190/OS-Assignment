/*4.  Consider a scheduling approach which is non pre-emptive similar to shortest job next in
nature. The priority of each job is dependent on its estimated run time, and also the amount of
time it has spent waiting. Jobs gain higher priority the longer they wait, which prevents indefinite
postponement. The jobs that have spent a long time waiting compete against those estimated to
have short run times. The priority can be computed as :
Priority = 1+ Waiting time / Estimated run time
Using the data given below compute the waiting time and turnaround time for each process and
average waiting time and average turnaround time.
Process Arrival time Burst time
P1 0 20
P2 5 36
P3 13 19
P4 17 42
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdnoreturn.h>
#include<string.h>
void main()
{
	int timerManager=0,i=0,burstTimer=0,noProcess,m=0,n=0;
	int process[4]={0},arrivalTime[4]={0};
	int burstTime[4]={20,36,19,42},burst[4]={20,36,19,42},complete[4]={0};
	int processArrived[4]={1};
	double priorityQueue[4]={0};


    // Initializing the inputs processes and arrival times 

    printf("enter the number of processes : -\n");
    scanf("%d",&noProcess);
    for(m =0; m<=3;m++){
    scanf("%d",process[m]);
}

printf("enter the Arrival time of the process : -\n");
for(n =0; n<=3;n++){
    scanf("%d",arrivalTime[n]);
}
	while(1){
		int k;
		for(k=0;k<4;k++){
			if(timeManager>=arrivalTime[k] && burst[k]!=(-1)){
				priorityQueue[k]=1+((timeManager-arrivalTime[k])/burst[k]); // as given priorizing algorithmm in the question.
			}
		}

           void TimerBurst(){ for(i=0;i<scheduleProcess;i++)
       {        int arriTime,acno[4],buriTime,processe
              printf("Enter arrival time and Burst time for Process proce%d : ",i);
              scanf("%d%d",&acno[i].arriTime,&a[i].buriTime);
              acno[i].processe= i;
              acno[i].remainingTime = acno[i].burstTime;
}

		int p,q;
		for(p=0;p<4;p++){
			for(q=0;q<4-1-p;q++){
				if(priorityQueue[q]<priorityQueue[q+1]){
                    if(processArrived[q]!=0){
                         if(processArrived[q+1]!=0){
					double t1=priorityQueue[q];
					priorityQueue[q]=priorityQueue[q+1];
					priorityQueue[q+1]=t1;
					int t2=processArrived[q];
					processArrived[q]=processArrived[q+1];
					processArrived[q+1]=t2;}
                    }
				}
				else if(priorityQueue[q]==priorityQueue[q+1])
				{
                    if(processArrived[q]!=0){
                         if(processArrived[q+1]!=0){
					         if(burst[q]<burst[q+1]){
						int t=processArrived[q];
						processArrived[q]=processArrived[q+1];
						processArrived[q+1]=t;
					}
                    }
                }
				}
			}
		}

        void ArrivalBurst(){ for(i=0;i<scheduleProcess;i++)
       {        int arriTime,acno[4],buriTime,processe
              printf("Enter arrival time and Burst time for Process proce%d : ",i);
              scanf("%d%d",&acno[i].arriTime,&a[i].buriTime);
              acno[i].processe= i;
              acno[i].remainingTime = acno[i].burstTime; }
                    int arrivedProcess=processArrived[0];
                    burstTimer=burst[arrivedProcess-1];
                    do{
                        int loopingVar;
                        for(loopingVar=0;loopingVar<4;x++){
                            if(timeManager==arrivalTime[x]){		
                                processArrived[loopingVar]=loopingVar+1;
                                printf("process %d arrived\n",loopingVar);}
			burstTimer=burstTimer-1;
			timeManager=timeManager+1;
			if(burstTimer==0){
				printf("process %d completed\n",arrivedProcess );
				complete[arrivedProcess-1]=timeManager;
				i=i+1;
				burst[arrivedProcess-1]=-1;
				//Given the Priority starts from index 0 of array priority[0]=0;
				for(x=0;x<4;x++){
					priorityQueue[x]=0;
					if(processArrived[x]!=0){processArrived[x]=x+1;}
				}
				break;
			}
		}while(1);
		if(i==4)
			break;

	}
	int turnaround_time[4]={0};
	int waitingTime[4]={0};
	for(i=0;i<4;i++)
	{
		turnaround_time[i]=complete[i]-arrivalTime[i];
		waitingTime[i]=turnaround_time[i]-burstTime[i];
	}
	printf("process\t | arrival Time | burst time\t | turnaround time\t | waiting time \n");
	for(i=0;i<4;i++){
		printf("1\t | %d\t | \t | %d\t | \t | %d\t | \t | %d\n",arrivalTime[i],burstTime[i],turnaround_time[i],waitingTime[i]);
	}
	printf("average waiting time is %f .",(waitingTime[0]+waitingTime[1]+waitingTime[2]+waitingTime[3])/4.0);
	printf("average turnaround time is %f .",(turnaround_time[0]+turnaround_time[1]+turnaround_time[2]+turnaround_time[3])/4.0);
}
