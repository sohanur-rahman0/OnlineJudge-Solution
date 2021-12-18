// priority scheduling algorithm in cpp

#include <bits/stdc++.h>
using namespace std;
int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
    int process[n],burstTime[n],priority[n],waitingTime[n],turnAroundTime[n],i,j,temp,totalWaitingTime=0,totalTurnAroundTime=0;
    for(i=0; i<n; i++)
    {
        cin>>process[i];
        cin>>burstTime[i];
        cin>>priority[i];
    }

    // sort based on priority
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(priority[i]>priority[j])
            {
                temp = priority[i];
                priority[i] = priority[j];
                priority[j] = temp;
                temp = burstTime[i];
                burstTime[i] = burstTime[j];
                burstTime[j] = temp;
                temp = process[i];
                process[i] = process[j];
                process[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        cout<<process[i]<<" "<<burstTime[i]<<" "<<priority[i]<<endl;
    }


    temp = 0;
    waitingTime[0] = 0;

    for(i=1; i<n; i++) {
        temp = temp + burstTime[i-1];
        waitingTime[i] = temp;
    }

    for(i=0; i<n; i++) {
        totalWaitingTime +=waitingTime[i];
    }
    cout<<"Waiting Time: ";

    for(i=0; i<n; i++) {
        cout<<waitingTime[i]<<" ";
    }
    cout<<endl;

    cout<<"Avg waitng time: "<<(float)totalWaitingTime/n<<endl;
    cout<<"Gannt Chart: ";
    temp = 0;
    cout<<temp<<" "<<"P"<<process[0]<<" ";
    for ( i = 1; i < n; i++)
    {
        temp = temp + burstTime[i-1];
        cout<<temp<<" "<<"P"<<process[i]<<" ";
    }

    cout<<temp+burstTime[i-1]<<endl;

}