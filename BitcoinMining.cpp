#include <iostream>
#include <ctime>
#include <cstdlib>
#include<cmath>

using namespace std;

double RandomInitBalance(double dMin, double dMax){
	//Casting to int for the rand function.
	return static_cast<double>(rand()%static_cast<int>(dMax-dMin+1));
}

double Mining(int selectedMiner, int blockNumber){
	double miningReward=0;
	if(selectedMiner==1)
	{
		if(blockNumber==1)
		{
			miningReward=10;
		}
		else
		{	
			//Basic Reward of Alice.
			double AReward=10;
			for(int i=0;i<blockNumber;i++){
				//Computing Mining Reward on the sequential Mining
				miningReward+=AReward;
				AReward+=10;
			}
		}
	}else if(selectedMiner==2)
	{
		miningReward=20*blockNumber;		
	}else{
		if(blockNumber==1)
		{
			miningReward=40;
		}
		else 	//Sequential Mining
		{
			//Basic Reward of the Carl
			double CReward=40;
			for(int i=0;i<blockNumber;i++){
				miningReward+=CReward;
				CReward-=5;
			}
		}
	}	
	return miningReward;
}

double ComputeFinalBalance(double a, double b, double c)
{
	return (a+b+c)/3;	
}

//to check whether two double values are equal or not.
bool isDoubleEqual(double a, double b){
	const double eps=1e-6;
	return fabs(a-b)<eps;	
}

//Passing Parameters Call by Reference so that it get change to original Balance.
double ComputeTransferValuePBV(double &fromBalance, double &toBalance, double finalBalance){
		//only Transfer when fromBalance is Greater than toBalance
		if(fromBalance>toBalance){
			if(!isDoubleEqual(finalBalance,fromBalance)){
				double balance= fromBalance - finalBalance;
				toBalance+=balance;
				fromBalance-=balance;
				return balance;
			}
		}
	
}

int main()
{
	cout<<"---------------------------------------------------------------"<<endl;
	cout<<"Welcome to Lab3! This is simulated mining pool for 2011Coin!"<<endl;
	cout<<"---------------------------------------------------------------"<<endl<<endl;
	
	double AliceBalance = RandomInitBalance(1,100);
	double BobBalance = RandomInitBalance(1,100);
	double CarlBalance = RandomInitBalance(1,100);
	
	//Show the user's balance after initilization.
	cout<<"-----------------------------------------------------------"<<endl;
	cout<<"The balance of Alice after initialization: "<<AliceBalance<<endl;
	cout<<"The balance of Bob after initialization: "<<BobBalance<<endl;
	cout<<"The balance of Carl after initialization: "<<CarlBalance<<endl;
	cout<<"-----------------------------------------------------------"<<endl<<endl;
	
	int chooseMinerCommand;
	int blockNumber;
	
	cout<<"Please input the number of the blocks that need to be mined (1 - 5) in each round:"<<endl;
	cin>>blockNumber;
	
	if(blockNumber>=1 && blockNumber<=5){
		cout<<"The miner will mine "<<blockNumber<<" blocks."<<endl<<endl;
		cout<<"-------------------------------------------------------"<<endl;
	}else{
		blockNumber=1;
		cout<<"Wrong input, The miner will only mine "<<blockNumber<<" block."<<endl<<endl;
		cout<<"----------------------------------------------------------"<<endl;
	}
	
	do
	{
		cout<<"Choose the first miner: "<<endl;
		cout<<"1. Alice "<<endl;
		cout<<"2. Bob "<<endl;
		cout<<"3. Carl "<<endl;
		cin>>chooseMinerCommand;
		
		cout<<".....Mining Start ...."<<endl<<endl;
		
		if(chooseMinerCommand == 1){
			cout<<"Alice is the first selected miner."<<endl<<endl;
			AliceBalance = AliceBalance + Mining(1,blockNumber);
			break;
		}else if(chooseMinerCommand == 2){
			cout<<"Bob is the first selected miner."<<endl<<endl;
			BobBalance = BobBalance + Mining(2, blockNumber);
			break;
		}else if(chooseMinerCommand == 3){
			cout<<"Carl is the first selected miner."<<endl<<endl;
			CarlBalance = CarlBalance + Mining(3, blockNumber);
			break;
		}
		else{
			cout<<"Wrong input, please re-enter your selection."<<endl;
		}
	}while(true);
	
	do
	{
		cout<<"Choose the Second miner: "<<endl;
		cout<<"1. Alice "<<endl;
		cout<<"2. Bob "<<endl;
		cout<<"3. Carl "<<endl;
		cin>>chooseMinerCommand;
		
		cout<<".....Mining Start ...."<<endl<<endl;
		
		if(chooseMinerCommand == 1){
			cout<<"Alice is the second selected miner."<<endl;
			AliceBalance = AliceBalance + Mining(1,blockNumber);
			break;
		}else if(chooseMinerCommand == 2){
			cout<<"Bob is the second selected miner."<<endl;
			BobBalance = BobBalance + Mining(2, blockNumber);
			break;
		}else if(chooseMinerCommand == 3){
			cout<<"Carl is the second selected miner."<<endl;
			CarlBalance = CarlBalance + Mining(3, blockNumber);
			break;
		}
		else{
			cout<<"Wrong input, please re-enter your selection."<<endl;
		}
	}while(true);
	
	cout<<".....Minind Done....."<<endl<<endl;
	
	cout<<"----------------------------Mining-------------------------"<<endl;
	cout<<"The balance of Alice after mining: "<<AliceBalance<<endl;
	cout<<"The balance of Bob   after mining: "<<BobBalance<<endl;
	cout<<"The balance of Carl  after mining: "<<CarlBalance<<endl;
	cout<<"-----------------------------------------------------------"<<endl<<endl;
	
	double FinalBalance=ComputeFinalBalance(AliceBalance,BobBalance,CarlBalance);
	cout<<"Alice transfers "<<ComputeTransferValuePBV(AliceBalance,CarlBalance,FinalBalance)<<" to Carl."<<endl;
	cout<<"Bob transfers "<<ComputeTransferValuePBV(BobBalance,CarlBalance,FinalBalance)<<" to Carl."<<endl<<endl;
	
	
	cout<<"----------------------------Transferring-------------------"<<endl;
	cout<<"The balance of Alice after crypto transferring: "<<AliceBalance<<endl;
	cout<<"The balance of Bob   after crypto transferring: "<<BobBalance<<endl;
	cout<<"The balance of Carl  after crypto transferring: "<<CarlBalance<<endl;
	cout<<"-----------------------------------------------------------"<<endl<<endl;

	return 0;
}
