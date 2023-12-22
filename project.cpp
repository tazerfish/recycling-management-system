#include <iostream>
#include <string>
using namespace std;


string recycleB[5] = { "plastic", "silicon", "paper", "pen", "wrapper" };
string metal[3] = { "phone", "laptop", "scrap" };

void printarr();
bool foundR(string x, string& y);
bool emptybin(string y, int x);

void arrinit();
struct location
{
    int metalbin;
    int recbin;
};
location arrloc[3];
int checkloc();


int main() {
  string binarray,userinput;
  int loc;
 
  arrinit();
    do{
      cout<<"what do you want to dispose  ||type stop if u want to||  \n";
      printarr();
      cin>>userinput;
      if(foundR(userinput, binarray)){
	
	loc=checkloc();
	emptybin(binarray,loc);
	
	
      }
        
    }while(userinput!="stop");

    return 0;
}

bool foundR(string x, string& y) {
    y = "none";  // Set y to "none" initially

    for (int i = 0; i < sizeof(recycleB) / sizeof(recycleB[0]); i++) {
        if (x == recycleB[i]) {
            y = "recycleB";
            cout<<"\n use the green recylable bin\n ";
            return true;
        }
    }

    for (int i = 0; i < sizeof(metal) / sizeof(metal[0]); i++) {
        if (x == metal[i]) {
            y = "metal";
            cout<<"\nuse the red metal bin\n\n ";
            return true;
        }
    }

    return false;
}

void arrinit()
{
    location acb,fmce,tuc;
    arrloc[0]=acb;
    arrloc[1]=fmce;
    arrloc[2]=tuc;
    for (int i=0; i<3;i++)
    {
        arrloc[i].metalbin=10;
        arrloc[i].recbin=10;
    }
}

int checkloc()
{
    int userin;
    cout<<"where are you in giki:\n 1.boys hostel area 2.faculty area 3.girls hostel//tuc  ";
    cin>>userin;
    switch(userin){
        case 1:
            cout<<"acb is the closest location for you\n";
            break;
        case 2:
            cout<<"FMCE is the closest location for you\n";
            break;
        case 3:
            cout<<"tuc is the closest location for you\n";
            break;;
        default:
            cout<<"please enter 1,2,or3\n";
    }
    return userin;
}

bool emptybin(string y,int x)
{
  

  
      if (x==1){
         if(y=="metal"){ 
          if (arrloc[0].metalbin==0){
              return true;
          }
          else{
              cout<<"capacity left in bin: "<<arrloc[0].metalbin<<endl;
              arrloc[0].metalbin--;
              return false;
          }}
          else if(y=="recycleB"){
              if (arrloc[0].recbin==0){
              return true;
          }
          else{
              cout<<"capacity left "<<arrloc[0].recbin<<endl;
              arrloc[0].recbin--;
              return false;
          }
          }
      }
      else if (x==2){
      if(y=="metal"){ 
          if (arrloc[1].metalbin==0){
              return true;
          }
          else{
              cout<<"capacity left "<<arrloc[1].metalbin<<endl;
              arrloc[1].metalbin--;
              return false;
          }}
          else if(y=="recycleB"){
              if (arrloc[1].recbin==0){
              return true;
          }
          else{
              cout<<"capacity left "<<arrloc[1].recbin<<endl;
              arrloc[1].recbin--;
              return false;
          }
          }
              
        else if(x==3){
      if(y=="metal"){ 
          if (arrloc[2].metalbin==0){
              return true;
          }
          else{
              cout<<"capacity left "<<arrloc[2].metalbin<<endl;
              arrloc[2].metalbin--;
              return false;
          }}
          else if(y=="recycleB"){
              if (arrloc[2].recbin==0){
              return true;
          }
          else{
              cout<<"capacity left "<<arrloc[2].recbin<<endl;
              arrloc[2].recbin--;
              return false;
          }
          }    
    }
    
  }
 
    
}
void printarr(){
    for (int i = 0; i < sizeof(recycleB) / sizeof(recycleB[0]); i++) {
        cout<<recycleB[i]<<"    ";
    }

    for (int i = 0; i < sizeof(metal) / sizeof(metal[0]); i++) {
               cout<<metal[i]<<"    ";
    }
    cout<<endl;
}

