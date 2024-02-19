 #include<iostream>
 using namespace std;
 class match
 {
  static int score;
 	float overs;
 	public:
 	  void show()
 		{
 			cout<<score<<" ";
 			score++;
		 }
		 static void update()
        {
        	cout<<score;

		 	
		 }
 };
 int match::score=250;
 main()
 {
 	match::update();
 }
 
