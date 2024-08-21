#include<iostream>
using namespace std;

struct node
{
	string title;
	node *next;
};
	node *header=NULL ;
	
void Add_song(){
	node *nn;
	string song_name;
	nn=new node;
	cout<<"Enter title of a song  ";
	cin>>song_name;
	nn->title=song_name;
	nn->next=NULL;
	if(header==NULL){
		header=nn;
	}
	else{
		node *song;
		song=header;
		while(song->next!=NULL){
			song=song->next;
		}
		song->next=nn;
	}
}
void display(){
	node *song;
	song=header;
	while(song!=NULL){
		cout<<"Title "<<song->title<<endl;
		song=song->next;
	}
}
int main(){
	node n1;
	int n;
	cout<<"Enter number of songs in playlist";
	cin>>n;
	for(int i=0;i<n;i++){
		Add_song();
	}
	display();
	return 0;
}
