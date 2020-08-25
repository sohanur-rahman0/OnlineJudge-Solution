#include<bits/stdc++.h>
using namespace std;

class Player
{
public:
	string name;
	int ovr;
	string position;
	string status;

	void addPlayer(string name, int ovr, string position, string status){
		this->name = name;
		this->ovr = ovr;
		this->position = position;
		this->status = status;
	}

	void display(){
		cout<<this->name<<" "<<this->ovr<<" "<<this->position<<" "<<this->status<<endl;
	}
};

bool comp(Player a, Player b){
	return a.ovr > b.ovr;
}

int main()
{

    freopen("OVR.txt", "r", stdin);

    Player players[40];

    string name,position,status;

    int ovr,n=0,playerCount = 11;
    
    while(cin>>name>>ovr>>position>>status){
    	players[n++].addPlayer(name,ovr,position,status);
    }

    sort(players, players+n, comp);

    int gk=1, defenders = 4, cdm = 1, cm = 2, cam = 1, forward = 2;  

    for (int i = 0; i < n && playerCount>0 ; ++i)
    {
    	if (players[i].status == "Fit")
    	{
    		if (players[i].position == "GK" && gk>0)
    		{
    			players[i].display();
    			playerCount--;
    			gk--;
    		}else if (players[i].position == "CDM" && cdm > 0)
    		{
    			players[i].display();
    			playerCount--;
    			cdm--;
    		}else if(players[i].position == "CM" && cm > 0)
    		{
    			players[i].display();
    			playerCount--;
    			cm--;
    		}else if(players[i].position == "CAM" && cam > 0){
    			playerCount--;
    			cam--;
    			players[i].display();
    		}else if((players[i].position == "LW" || players[i].position == "RW" || players[i].position == "ST") && forward >0){
    			players[i].display();
    			forward--;
    			playerCount--;
    		}else if((players[i].position == "LB" || players[i].position == "CB" || players[i].position == "RB") && defenders >0){
    			players[i].display();
    			defenders--;
    			playerCount--;
    		}
    	}
    }

}