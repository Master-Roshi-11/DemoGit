#include<iostream>
using namespace std;
class Messenger
{
	public:
		virtual void sendMessage(string s)
		{
			cout<<"Messenger BASE Class Send Function() "<<s<<endl;
		}
};
class WhatsApp:public Messenger
{
	public :
		void sendMessage(string s)
		{
			cout<<"Sending Message from Whatsapp "<<s<<endl;
		}
};
class Telegram:public Messenger
{
	public:
		void sendMessage(string s)
		{
			cout<<"Sending Message from Telegram "<<s<<endl;
		}	
};
int main()
{
	Messenger *msg[2];
	WhatsApp wp;
	Telegram tp;
	msg[0]=&wp;
	//msg[0]->sendMessage();
	msg[1]=&tp;
	//msg[1]->sendMessage();
	
	Telegram t1;
	//t1.sendMessage();
	msg[1]=&t1;
	msg[1]->sendMessage("Normal Upcast Parent Holding Child Reference");
	
	Telegram *t2;
	//Dynamic Cast Required 
	// t2=&msg[1];
	t2=dynamic_cast<Telegram*>(msg[1]);
	t2->sendMessage("Dynamic Cast Object");
//	msg.sendMessage();
//	wp.sendMessage();
//	tp.sendMessage();
	
	return 0;
}
