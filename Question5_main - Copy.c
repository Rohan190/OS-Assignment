/*5. CPU schedules N processes which arrive at different time intervals and each process is
 allocated the CPU for a specific user input time unit, processes are scheduled using a preemptive
 round robin scheduling algorithm. Each process must be assigned a numerical priority, with a
 higher number indicating a higher relative priority. In addition to the processes one task has
 priority 0. The length of a time quantum is T units, where T is the custom time considered as
 time quantum for processing. If a process is preempted by a higher-priority process, the
 preempted process is placed at the end of the queue. Design a scheduler so that the task with
 priority 0 does not starve for resources and gets the CPU at some time unit to execute. Also
 compute waiting time, turn around.

 Algorithm Used -->  Round Robin algorithm with preempted High Prioritizing scheduler

Author : Rohan
 */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdnoreturn.h>
#include<string.h>


// Function srting for the arrival and burst timmings
void ArrivalBurst(){ for(i=0;i<scheduleProcess;i++)
       {        int arriTime,acno[4],buriTime,processe
              printf("Enter arrival time and Burst time for Process proce%d : ",i);
              scanf("%d%d",&acno[i].arriTime,&a[i].buriTime);
              acno[i].processe= i;
              acno[i].remainingTime = acno[i].burstTime;
}


// Time manager --> storing time varibles
struct timeManagement
{
       int proce,arrivalTime;
       int burstTime,waitTime;
       int TurnaroundTime,remainingTime;
       int timeshooter,priorityScheduler;
};

// Prioritzing the process on the basis of arrival time respectively

void SortingProcesses(struct timeManagement a[],int scheduleProcess)
{
       int i=0,j=0;
       struct timeManagement temp;
       for(i=0;i<scheduleProcess;i++){
              for(j=i+1;j<scheduleProcess;j++)
                     if(a[i].arrivalTime > a[j].arrivalTime)
                     { temp = a[i];a[i] = a[j]; a[j] = temp;}
                           }
       }
       return;
 
int main()
{
       int i,j,scheduleProcess;
       int time,remaining;
       int changingParam=0,timeQuantum;
       struct timeManagement a[50];
       float averageTime = 0,
       int averageTurnTime=0;
       bool flagingVariable;
       double PrioritizingNumber;

// Intialzing the raw inputs of the processes along with time allocatoin to queues.
 
 void IntializingProcess(){
       printf("Enter Number Of Processes : ");
       scanf("%d",&scheduleProcess);
       remaining=scheduleProcess;
       for(i=0;i<scheduleProcess;i++)
       {
              printf("Enter arrival time and Burst time for Process proce%d : ",i);
              scanf("%d%d",&a[i].arrivalTime,&a[i].burstTime);
              a[i].proce = i;
              a[i].remainingTime = a[i].burstTime;
       }
 }
       IntializingProcess();
       SortingProcesses(a,scheduleProcess);
       printf("Enter Quantum Number : ");
       scanf("%d",&timeQuantum);
       printf("\n____________________________________\n");
       printf("0");
       for(time=0,i=0;remaining!=0;)
       {
              if(a[i].remainingTime<=timeQuantum){
                  if (a[i].remainingTime>0 ){
                     time = time + a[i].remainingTime;
                     printf("  proce time %d <- %d",a[i].proce,time);
                     a[i].remainingTime=0;
                     changingParam=1;}
              else if(a[i].remainingTime > 0){
                     a[i].remainingTime = a[i].remainingTime - timeQuantum;
                     time = time + timeQuantum;
                     printf(" proce time %d <- %d",a[i].proce,time);
              }
              if(a[i].remainingTime==0 && changingParam==1)
              {
                     remaining--;
                     a[i].TurnaroundTime = time-a[i].arrivalTime;
                     a[i].waitTime = time-a[i].arrivalTime-a[i].burstTime;
                     averageTime = averageTime + time-a[i].arrivalTime-a[i].burstTime;
                     averageTurnTime = averageTurnTime + time-a[i].arrivalTime;
                     changingParam=0;
              }
              if(i==scheduleProcess-1)
                     i=0;
              else if(a[i+1].arrivalTime <= time)
                     i++;
              else
                     i=0;
       }
       printf("\n\n");
       printf("scheduleProcess\t | ArrivaTime\t | BurstTime\t | TurnaroundTime\n | waitTime\n");
       printf("________________________________________________________________________________\n");
       for(i=0;i<scheduleProcess;i++){
              printf("proce%d\t%d\t%d\t%d\t%d\n",
              a[i].proce,a[i].arrivalTime,
              a[i].burstTime,
              a[i].TurnaroundTime,
              a[i].waitTime);
       }
       printf("________________________________________________________________________________\n");
       averageTime = averageTime/scheduleProcess;
       averageTurnTime = averageTurnTime/scheduleProcess;
       printf("Average Waiting Time : %.2f\n",averageTime);
       printf("Average Turnaround Time : %.2f\n",averageTurnTime);
       return 0;
}
