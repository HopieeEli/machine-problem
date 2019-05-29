#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
	string student[50];
	int q1, q2, q3, q4, i, totalq1[50], totalq2[50], totalq3[50], totalq4[50];
	int  quiz1[50], quiz2[50], quiz3[50], quiz4[50], quiztotal[50], show;
	int prelim[50], exam[50], totalp[50], totale[50], major[50];
	int notebook[50], fnotebook[50];
	int seatwork[50], seatworkt[50], seat7[50], seat1[50], seat2[50], seat3[50], seat4[50], seat5[50], seat6[50], seat8[50], seat9[50], seat10[50];
	int board[50], boardwork[50], classstanding[50];
	int final[50];
	int a[3], j, temp;
	cout << "enter the students names \n";
	
	for(i = 0; i < 50; i++)
	cin >> student[i];
	
	//entering students quiz grades
    
    cout << "enter students quiz 1 grade \n";
	for(q1 = 0; q1 < 50; q1++)
		cin >> quiz1[q1];

    cout << "enter students quiz 2 grade \n";
	for(q2 = 0; q2 < 50; q2++)
		cin >> quiz2[q2];

    cout << "enter students quiz 3 grade \n";
	for(q3 = 0; q3 < 50; q3++)
		cin >> quiz3[q3];

    cout << "enter students quiz 4 grade \n";
	for(q4 = 0; q4 < 50; q4++)
		cin >> quiz4[q4];
		
// entering of major grades

	cout << "enter preliminary grades \n";
	for(show = 0; show < 50; show++)	
		cin >> prelim[show];
	
	cout <<"enter final examination grades \n";
	for(i = 0; i < 50; i++)
		cin >> exam[i];
		
// entering of seatwork	notebook;

	cout << "enter grade for notebook \n";
	for(i = 0; i < 50; i++)
		cin >> notebook[i];
		
	cout <<"enter seatwork 1 score \n";
	for(i = 0; i < 50; i++)
	 	cin >> seat1[i];

    cout <<"enter seatwork 2 score \n";
	for(i = 0; i < 50; i++)
	 	cin >> seat2[i];		 	
	
	cout <<"enter seatwork 3 score \n";
	for(i = 0; i < 50; i++)
	 	cin >> seat3[i];
	
	cout <<"enter seatwork 4 score \n";
	for(i = 0; i < 50; i++)
	 	cin >> seat4[i];
		 
	cout <<"enter seatwork 5 score \n";
	for(i = 0; i < 50; i++)
	 	cin >> seat5[i];
		 
	cout <<"enter seatwork 6 score \n";
	for(i = 0; i < 50; i++)
	 	cin >> seat6[i];
	
	cout <<"enter seatwork 7 score \n";
	for(i = 0; i < 50; i++)
	 	cin >> seat7[i];	 	
	
	cout <<"enter seatwork 8 score \n";
	for(i = 0; i < 50; i++)
	 	cin >> seat8[i];
	
	cout <<"enter seatwork 9 score \n";
	for(i = 0; i < 50; i++)
	 	cin >> seat9[i];
	
	cout <<"enter seatwork 10 score \n";
	for(i = 0; i < 50; i++)
	 	cin >> seat10[i];
	 	
	cout <<"enter board work points \n";
	for(i = 0; i < 50; i++)
		cin >> board[i];
		
		
	
// calculations for quizzes;
	
	for(q1 = 0; q1 < 50; q1++)	
	totalq1[q1]= quiz1[q1] * .15;

	for(q2 = 0; q2 < 50; q2++)	
	totalq2[q2]= quiz2[q2] * .15;
	
	for(q3 = 0; q3 < 50; q3++)	
	totalq3[q3]= quiz3[q3] * .15;
	
	for(q4 = 0; q4 < 50; q4++)	
	totalq4[q4]= quiz4[q4] * .15;
	
	for(show = 0; show < 50; show++)
	quiztotal[show] = totalq1[show] + totalq2[show] + totalq3[show] + totalq4[show];

// calculations of majors
	for(i = 0; i < 50; i++)	
	totalp[i] = prelim[i] * .2;
	
	for(i = 0; i < 50; i++)
	totale[i] = exam[i] * .2;

	for(i = 0; i < 50; i++)
	major[i] = totalp[i] + totale[i];
	
// calculations for class standing

	for(i = 0; i < 50; i++)
	fnotebook[i] = notebook[i] * .01;
	
	for(i = 0; i < 50; i++)
	seatwork[i] = seat1[i] + seat2[i] + seat3[i] + seat4[i] + seat5[i] + seat6[i] + seat7[i] + seat8[i] + seat9[i] + seat10[i];
	
	for(i = 0; i < 50; i++)
	seatworkt[i] = seatwork[i] * .02;
	
	for(i = 0; i < 50; i++)
	boardwork[i] = board[i] * .67;
	
	for(i = 0; i < 50; i++)
	classstanding[i] = seatworkt[i] + fnotebook[i] + boardwork[i];
	 
	 
	// final calculations
	
	for(i = 0; i < 50; i++)
	final[i] = quiztotal[i] + major[i] + classstanding[i];
			
	// showing of quizzes		
	cout << "\n";
	
	cout << "Students      Quizzes        majors      class standing    \n";
	for(show = 0; show < 50; show++)	
	cout <<student[show] <<"            " << quiztotal[show] << "             " << major[show] << "                      " << classstanding[show]<< "\n";
	
	cout << "\n";
	cout << "\n";
	cout << "\n";
	for(show = 0; show < 50; show++)
			if( 95.57 <= final[show])
			cout << student[show] << " 1.00 \n ";
			
			else if( 91.12 <= final[show] && final[show] < 95.56)
			cout << student[show] << " 1.25 \n ";
			
			else if( 86.68 <= final[show] && final[show] <= 91.11)
			cout << student[show] << " 1.50 \n ";
			
			else if( 82.23 <= final[show] && final[show] <= 86.67)
			cout << student[show] << " 1.75 \n ";
			
			else if( 77.79 <= final[show] && final[show] <= 82.22)
			cout << student[show] << " 2.00 \n ";
			
			else if( 73.34 <= final[show] && final[show] <= 77.78)
			cout << student[show] << " 2.25 \n ";
			
			else if( 68.90 <= final[show] && final[show] <= 73.33)
			cout << student[show] << " 2.50 \n ";
			
			else if( 64.45 <= final[show] && final[show] <= 68.89)
			cout << student[show] << " 2.75 \n ";
			
			else if( 60.00 <= final[show] && final[show] <= 64.44)
			cout << student[show] << " 3.00 \n ";

cout << "\n";
cout << "\n";
cout << "\n";

	for(show = 0; show < 50; show++)
		if(final[show] < 60.00)
			cout << student[show] << " failed \n";
		else
			cout << student[show] << " passed \n";
			


//sorting
		
	for(i = 0; i < 50; i++)
		{
			for(j = i + 1; j < 50; j++)
			{
				if(final[i] > final[j])
				{
					temp = final[i];
					final[i] = final[j];
					final[j] = temp;
				}
			}
		}
	
	cout << "the top 10 are \n";
	for(i = 39; i < 50; i++)
		cout << student[i] << " "<< final[i] << " \n";	
			
	
	 
	
	
	
	getch();
	return 0;
}
