1#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;
class dbutility
{
	public:string str;
	       void utility()
	       {
	       	system("cls");
			 int i,ip;
			 cout<<"                                ______________________________\n\n";
			 cout<<"                                      SHOPPING ADVISOR\n";
			 cout<<"                                ______________________________\n\n\n";
		     cout<<"Welcome to shopping advisor, Please select any category from below list to shop\n\n";
		     fstream infile;
	  	     infile.open("dbutility.txt");
	  	      for(i=0;i<5;i++)
	  	       {
	  		     getline(infile,str);
	  		     cout<<str<<endl;		
		       }
		        cout<<"\nSelect the category to shop=";
		        cin>>ip;
		        if(ip>0 && ip<6)//checks if the user entered within the range or not
		        {
		        	if(ip==1)
		             {
		             	 int m;
		             	  const char fi[]="utilitya.txt";
		             	 subutility(fi);                //calls the subutility func which prints sub categories	 
		               cout<<"\nPlease,select the sub category=";
		               cin>>m;
		               if(m>0 && m<5)
		               {
		               	   if(m==1)
		               	   {
		               	   	int p;
		               	   	system("cls");
		               	   	cout<<"\nNow,I Would like to offer you the priority orders\n";
		               		cout<<"\nPlease select the priority order\n\n1.Price-high to low\n2.Price-low to high\n3.High rated devices";
		               		cout<<"\n\nEnter priority order=";
							   cin>>p;
							   if(p>0 && p<4)
							   {
							   	 if(p==1 || p==3 )//this block responds to price-high to low and high rated devices
							      {
							      int   p[5]={79999,16990,11999,11390,5999};//this array stores the price list of all mobiles 
							      const char filename[]="databaseaa.txt";
							      final(p,sizeof(p),filename);// this statement calls the func final to print list of items & finalise the bill
		                          }                           //and this repeated in all cases
		                              else        //this block responds to price-low to high priority
							          {
                                     int   p[5]={5999,11390,11999,16990,79999};//this array stores the price list of all mobiles
									 const char filename[]= "databaseab.txt";
									 final(p,sizeof(p),filename);
							          }
							       }
							        else   
							       {
							       	cout<<"Sorry!You have given wrong input,Please try again";
							   	    exit(0);
							        }
							   }
							   else if(m==2)
							   {
							   	int p;
		               	   	system("cls");
		               	   	cout<<"\nNow,I Would like to offer you the priority orders\n";
		               		cout<<"\nPlease select the priority order\n\n1.Price-high to low\n2.Price-low to high\n3.High rated devices";
		               		cout<<"\n\nEnter priority order=";
							   cin>>p;
							   if(p>0 && p<4)
							   {
							   	 if(p==1|| p==3 )//this block responds to price-high to low and high rated devices
							      {
                           int   p[5]={104990,81990,61990,32990,18900};//this array stores the price list of all mobiles 
                           const char filename[]= "databaseba.txt";
									 final(p,sizeof(p),filename);
		                              }
		                              else//this block responds to price-low to high priority
							          {					
                                     int   p[5]={18900,32990,61990,81990,104990};//this array stores the price list of all mobiles 
                                      const char filename[]= "databasebb.txt";
									 final(p,sizeof(p),filename);
							          }
							       }
							        else
							       {
							       	cout<<"Sorry!You have given wrong input,Please try again";
							   	    exit(0);
							        }
							   }
							   else if(m==3)
							   {
							   	int p;
		               	   	system("cls");
		               	   	cout<<"\nNow,I Would like to offer you the priority orders\n";
		               		cout<<"\nPlease select the priority order\n\n1.Price-high to low\n2.Price-low to high\n3.High rated devices";
		               		cout<<"\n\nEnter priority order=";
							   cin>>p;
							   if(p>0 && p<4)
							   {
							   	 if(p==1|| p==3 )//this block responds to price-high to low and high rated devices
							      {						
                           int   p[5]={26490,24990,23490,22890,22490};//this array stores the price list of all mobiles 
                           const char filename[]= "databaseca.txt";
									 final(p,sizeof(p),filename);	        	     	    
		                              }
		                              else  //this block responds to price-low to high priority
							          {							   	       
                                     int   p[5]={22490,22890,23490,24990,26490};//this array stores the price list of all mobiles 
                                     const char filename[]= "databasecb.txt";
									 final(p,sizeof(p),filename);	        	     	            
							          }
							       }
							        else
							       {
							       	cout<<"Sorry!You have given wrong input,Please try again";
							   	    exit(0);
							        }
							   }
							   else
							   {
							   	int p;
		               	   	system("cls");
		               	   	cout<<"\nNow,I Would like to offer you the priority orders\n";
		               		cout<<"\nPlease select the priority order\n\n1.Price-high to low\n2.Price-low to high\n3.High rated devices";
		               		cout<<"\n\nEnter priority order=";
							   cin>>p;
							   if(p>0 && p<4)
							   {
							   	 if(p==1|| p==3 )//this block responds to price-high to low and high rated devices
							      {							      	
                           int   p[5]={33499,29999,27490,15999,15799};//this array stores the price list of all mobiles 
                           const char filename[]= "databaseda.txt";
									 final(p,sizeof(p),filename);	        
		                              }
		                              else   //this block responds to price-low to high priority
							          {							   	      
                                     int   p[5]={15799,15999,27490,29999,33499};//this array stores the price list of all mobiles 
                                     const char filename[]= "databasedb.txt";
									 final(p,sizeof(p),filename);	        	     	             
							          }
							       }
							        else
							       {
							       	cout<<"Sorry!You have given wrong input,Please try again";
							   	    exit(0);
							        }
							   }
						   }
						   else
						   {
						   	cout<<"Sorry!You have given wrong input,Please try again";
							exit(0);
						   }
					   }
					   else if(ip==2)
					   {
					   	system("cls");
					   	cout<<"\nNow please choose the sub category from below list\n\n";
					   	const char fi[]="utilityb.txt";
		             	 subutility(fi);//calls the subutility func which prints sub categories	 	             	
		             	int m;   	                   
						 cout<<"\nPlease,select the sub category=";
		                 cin>>m;
		               if(m>0 && m<5)
		               {
							   	 if(m==1 || m==2 || m==3) //this block responds to men,women and children
							      { 
							      int f1;
							      system("cls");
								  cout<<"\nNow choose the type of clothes that you want to shop\n\n1.T-Shirt\n2.Shirt\n3.Trousers\n";
								  cout<<"\nEnter the type of cloth=";
								  cin>>f1;
							      	if(f1==1)
							      	{
							      	  int   p[7]={699,404,449,550,599,649,799};//this array stores the price list of all t-shirts 
							      	  const char filename[]= "databasee.txt";
									 final(p,sizeof(p),filename);	        	        	     	        
									}
		                              else if(f1==2)
							          {
                                     int   p[7]={1699,1404,1449,1550,1599,1649,1799};//this array stores the price list of all shirts
									  const char filename[]= "databasef.txt";
									 final(p,sizeof(p),filename);
							          }
							          else
							          {
							          	int   p[7]={1199,1104,1149,1150,1199,1149,1199};//this array stores the price list of all trousers
							          	const char filename[]= "databaseg.txt";
									 final(p,sizeof(p),filename);
									  }
							   }
							   else   //this block is directly linked to hoodies part
							   {
							   	int   p[7]={2190,2100,2140,2150,2190,2140,2190};//this array stores the price list of all hoddies
							   	const char filename[]= "databaseh.txt";
									 final(p,sizeof(p),filename);
							   }							  
						   }
						   else
						   {
						   	cout<<"\nSorry!You have given wrong input,Please try again";
							exit(0);
					       }
				        }
				        else if(ip==3)
				        {
				        	system("cls");
					   	cout<<"\nNow please choose the sub category from below list\n\n";
					   	const char fi[]="utilityc.txt";
		             	 subutility(fi);//calls the subutility func which prints sub categories	 	             	
		             	int m;   	                   
						 cout<<"\nPlease,select the sub category=";
		                 cin>>m;
		                  if(m>0 && m<5)
		                  {
		                  	if(m==1)
		                  	{
		                  	int   p[7]={165,185,85,225,195,160,160};	//this array stores the price list of all herbals
		                  	const char filename[]= "databasei.txt";
									 final(p,sizeof(p),filename);
							}
							else if(m==2)
							{
								int   p[7]={165,185,85,225,195,160,160};  //this array stores the price list of all face creams
								const char filename[]= "databasej.txt";
									 final(p,sizeof(p),filename);
							}
							else if(m==3)
							{
								int   p[7]={112,165,135,150,225,160,160};  //this array stores the price list of all soaps
								const char filename[]= "databasek.txt";
									 final(p,sizeof(p),filename);	
							}
							else
							{
								int   p[7]={212,265,235,200,225,180,185};  //this array stores the price list of all deodarants
								const char filename[]= "databasel.txt";
									 final(p,sizeof(p),filename);
							}
					      }
					      else
						   {
						   	cout<<"\nSorry!You have given wrong input,Please try again";
							exit(0);
					       }
				     }
				     else if(ip==4)
				     {
				     	system("cls");
					   	cout<<"\nNow please choose the sub category from below list\n\n";
					   	const char fi[]="utilityd.txt";
		             	 subutility(fi);	    //calls the subutility func which prints sub categories	          	
		             	int m;   	                   
						 cout<<"\nPlease,select the sub category=";
		                 cin>>m;
		                  if(m>0 && m<5)
		                  {
		                  	if(m==1)
		                  	{
		                  	int   p[7]={65,85,75,70,125,85,60};	//this array stores the price list of all soft drinks
		                  	const char filename[]= "databasem.txt";
									 final(p,sizeof(p),filename);
							}
							else if(m==2)
							{
								int   p[7]={20,35,75,30,35,25,40};  //this array stores the price list of all cookies
								const char filename[]= "databasen.txt";
									 final(p,sizeof(p),filename);
							}
							else if(m==3)
							{
								int   p[7]={100,225,150,90,105,65,50};  //this array stores the price list of all fruits
								const char filename[]= "databaseo.txt";
									 final(p,sizeof(p),filename);	
							}
							else
							{
								int   p[7]={30,40,35,60,50,25,30};  //this array stores the price list of all vegetables
								const char filename[]= "databasep.txt";
									 final(p,sizeof(p),filename);
							}
					      }
					      else
						   {
						   	cout<<"\nSorry!You have given wrong input,Please try again";
							exit(0);
					       }
					 }
					 else
					{
						system("cls");
					   	cout<<"\nNow please choose the sub category from below list\n\n";
					   	const char fi[]="utilitye.txt";
		             	 subutility(fi);//calls the subutility func which prints sub categories	             	
		             	int m;   	                   
						 cout<<"\nPlease,select the sub category=";
		                 cin>>m;
		                  if(m>0 && m<5)
		                  {
		                  	if(m==1)
		                  	{
		                  	int   p[7]={398,660,238,777,375,428,448};	//this array stores the price list of all pendrives
		                  	const char filename[]= "databaseq.txt";
									 final(p,sizeof(p),filename);
							}
							else if(m==2)
							{
								int   p[7]={3799,5499,4998,4095,10999,21199,7800};  //this array stores the price list of all hard disks
								const char filename[]= "databaser.txt";
									 final(p,sizeof(p),filename);
							}
							else if(m==3)
							{
								int   p[7]={899,359,749,570,779,639,764};  //this array stores the price list of all hair dryers
								const char filename[]= "databases.txt";
									 final(p,sizeof(p),filename);	
							}
							else
							{
								int   p[7]={18990,19000,399,2199,799,7490,649};  //this array stores the price list of all headsets
								const char filename[]= "databaset.txt";
									 final(p,sizeof(p),filename);
							}
					      }
					      else//this says no,if user enter other than sub category which is printed on screen
						   {
						   	cout<<"\nSorry!You have given wrong input,Please try again";
							exit(0);
					       }
					}
			}//this says no,if user enter other than main category which is printed on screen
			else
			{
			    cout<<"\nSorry!You have given wrong input,Please try again";
				exit(0);
			}    
				}
      void subutility(const char strr[])//takes name of file as argument
      {
      	           int i=0;
      	             system("cls");
		             	cout<<"\nNow please choose the sub category from below list\n\n";	
		              fstream infile;//creates object of file
					  infile.open(strr);
					  	for(i=0;i<4;i++)//this for loop is used to print all sub categories of main category
	  	                {
	  		             getline(infile,str);
			            cout<<str<<endl;//print the data read and stored in string str through getline function
		               }
	  }
	  void final(int brr[],int l,const char data[] )//takes price list,length of price list and name of file as arguments
	  {
	  		system("cls");
	        	     	    fstream infile;
					  infile.open(data);
					  string str;
					 /* 000000int qunarr[l],j;
					  while(!infile.eof())
					  {
					  	for(j=1;j<7;j++)
	  	                {
	  	                	if(j==6)
	  	                	{
	  	                		 fstream infile;
					  infile.open(data);
	  	                		int q=0,qun=0;
	  	                		getline(infile,str,',');
	  	                		//infile>>qun;
	  	                		//qun= stoi(str);
	  	                		qunarr[q]=qun;
	  	                		q++;
							  }
						}
				       }
						for(j=0;j<l;j++)
						{
							cout<<qunarr[j];
						}0000*/
	  	                while(getline(infile,str,','))
	  	                {
	  		              cout<<str<<" ";		
		                }//prints the list of items in order
							 	cout<<"\n\nEnter the S.no of the item you want to buy=";	
							int	 a[l]={0},i=0;//the array a[l] stores the user i/p
							int bill=0;
							string c;
							do   //this do while loop executes upto l iterations,so that user can shop atmost l things
							{
								cin>>a[i];
								if(a[i]>0 && a[i]<=l)//it checks the user i/p,that he entered in the given range
							    {
								cout<<"\nThank you\n";
							    }
							     else// this is used to indicate that user entered wrong i/p
							    {
									cout<<"\nSorry!The item that you want to shop is out of stock";
							     }
								int index=a[i];
								i++;
								cout<<"\nDo You Want To Add Item Again yes / no ";
								cin>>c;
								bill=bill+brr[--index];//this is used to update the bill every time when user enter the option
							}
							while(c=="yes" || c=="YES");
								cout<<"\n\nYour final bill is Rs."<<bill;
								int z;
								cout<<"\n\nIf you want to shop from other categories,please select HOME\n\n1.HOME\n2.QUIT\nEnter=";
								cin>>z;
								if(z==1)
								{
									utility();
								}
								else
								{
									exit(0);
								}
	  }
}ut;
int main()
{
	ut.utility();
}
