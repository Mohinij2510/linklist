#include<iostream>
using namespace std;

struct node{
	string artist;
	string title;
	double dur;
	node *next;
};
	node *header=NULL ;
	
void Add_song(){
	node *nn;
	string song_name,song_artist;
	double time;
	nn=new node;
	cout<<"Enter title of a song  ,Name of the artist, Song duration";
	cin>>song_name>>song_artist>>time;
	nn->title=song_name;
	nn->artist=song_artist;
	nn->dur=time;
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
		cout<<"Artist: "<<song->artist<<endl;
		cout<<"Duration: "<<song->dur<<endl;
		song=song->next;
	}
}
void search(string s){
	node*song;
	song=header;
	while(song->title!=s){
		song=song->next;
	}
	cout<<"Playing "<<song->artist<<endl<<"song"<<song->title<<endl<<"Duration"<<song->dur<<endl;
}
void Removal(){
	node *song;
	song=header;
	node *prev=NULL;
	string s;
	cout<<"enter the song you want to delete";
	cin>>s;
	while(song->title!=s)
	{
		prev=song;
		song=song->next;
	}
	prev->next=song->next;
}
int main(){
	node n1;
	int n;
	string s;
	cout<<"Enter number of songs in playlist";
	cin>>n;
	for(int i=0;i<n;i++){
		Add_song();}
	cout<<"Display playlist "<<endl;
	display();
	cout<<"Enter song you want to play";
	cin>>s;
	search(s);
	Removal();
	cout<<"Display playlist after removing a song ";
	display();
	return 0;
}
