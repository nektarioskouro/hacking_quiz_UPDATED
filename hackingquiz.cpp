#include <iostream>
#include <string>

using namespace std;

int Guess;
int Total;

class Question
{
  private:
        string Question_Text;
        string Answer_1;
        string Answer_2;
        string Answer_3;
        string Answer_4;
        
        int Correct_Answer;
        int Question_Score;
        
  public:
     void setValues (string, string, string, string, string, int, int);
     void askQuestion ( );
     
};

int main()
{

     cout << "*****************************************************" << endl;
     cout << "*           #    #      #      ######## #  #        *" << endl;
     cout << "*           #    #     # #     #        # #         *" << endl;
     cout << "*           #    #    #   #    #        ##          *" << endl;
     cout << "*           ######   #######   #        # #         *" << endl;
     cout << "*           #    #  #       #  #        #  #        *" << endl;
     cout << "*           #    # #         # ######## #   #       *" << endl;
     cout << "*          ____________________________________     *" << endl;
     cout << "*                                                   *" << endl;
     cout << "*          #######  #    #   #   #######            *" << endl;
     cout << "*          #     #  #    #   #         #            *" << endl;
     cout << "*          #   # #  #    #   #        #             *" << endl;
     cout << "*          #    #   #    #   #       #              *" << endl;
     cout << "*          ##### #  ######   #      #######         *" << endl;
     cout << "*                                                   *" << endl;
     cout << "*                                                   *" << endl;
     cout << "*                 by nektarioskouro                 *" << endl;
     cout << "*                                                   *" << endl;
     cout << "*                Follow me on GitHub                *" << endl;
     cout << "*                                                   *" << endl;
     cout << "*****************************************************" << endl;
    
     
     cout << "Press enter to start the quiz...." << endl;
     cin.get();
     
     string Name;
     int Age;
     cout << "What's your name? " << endl;
     cin >> Name;
     cout << "How old are you? " << endl;
     cin >> Age;
     cout << endl;
     string Respond;
     cout << "Are you ready to take the quiz " << Name << "? yes/no." << endl;
     cin >> Respond;
     if (Respond == "yes")
     {
     cout << endl;
     cout << "Okay then. Good luck :)" << endl;
     cout << endl;
     }
     
        else
        {
        cout << "Goodbye then :(" << endl;
        return 0;
        }
        
    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    Question q6;
    Question q7;
    Question q8;
    Question q9;
    Question q10;
    
    
    
    q1.setValues("What is the emblem of Anonymous?",
                 "Man without a head()",
                 "A bird()",
                 "The anarchy symbol()",
                 "Man with costume()",
                 1,
                 10);
    
    q2.setValues("Which software is best for hacking?",
                 "Windows()",
                 "Android()",
                 "Linux()",
                 "iOS()",
                 3,
                 10);
                 
    q3.setValues("Which method of the above is for password attacks?",
                 "DDoS()",
                 "Phishing()",
                 "BruteForce()",
                 "Man in the middle()",
                 3,
                 10);
                 
    q4.setValues("Which method is made to steal passwords?",
                 "BruteForce()",
                 "Phishing()",
                 "DDoS()",
                 "Unknown()",
                 2,
                 10);
                 
    q5.setValues("Which program is best for finding website's information?",
                 "Nmap or Zenmap()",
                 "ophcrack()",
                 "aircrack()",
                 "Firefox()",
                 1,
                 10);
                 
    q6.setValues("With which email's service, emails are encrypted?",
                 "Gmail()",
                 "Yahoo()",
                 "Outlook()",
                 "Protonmail()",
                 4,
                 10);
                 
    q7.setValues("Can you always trust VPN services?",
                 "Yes()",
                 "No()",
                 "Sometimes()",
                 "Depends on the software()",
                 2,
                 10);
                 
    q8.setValues("With which command you can find the IP address of websites?",
                 "run()",
                 "telnet()",
                 "ping()",
                 "showmeaddressof()",
                 3,
                 10);
                 
    q9.setValues("How can you install Linux on Windows?",
                 "With VirtualBox()",
                 "You can't()",
                 "You have to pay for it()",
                 "With your browser()",
                 1,
                 10);
                 
    q10.setValues("Which Linux software is best for hacking attacks?",
                  "Parrot()",
                  "Ubuntu()",
                  "Kali()",
                  "All of them()",
                  3,
                  10);
                  
   q1.askQuestion();
   q2.askQuestion();
   q3.askQuestion();
   q4.askQuestion();
   q5.askQuestion();
   q6.askQuestion();
   q7.askQuestion();
   q8.askQuestion();
   q9.askQuestion();
   q10.askQuestion();   
   
      cout << "Your total score is " << Total << " out of 100" << endl;
      cout << endl;
      
      if (Total >= 70)
      {
          cout << "You are on a good level. Keep learning!" << endl;  
          cout << endl;
      } 
      else 
      {
         cout << "You need to practice your skills more" << endl;
         cout << endl;
         cout << "It's never too late bro :)" << endl; 
       }    
       return 0;
}  
void Question::setValues (string q, string a1, string a2, string a3, string a4, int ca, int pa)
{
     Question_Text = q;
     Answer_1 = a1;
     Answer_2 = a2;
     Answer_3 = a3;
     Answer_4 = a4;
     Correct_Answer = ca;
     Question_Score = pa;
} 

void Question::askQuestion()
{
    cout << endl;
    cout << Question_Text << endl;
    cout << "1. " << Answer_1 << endl;
    cout << "2. " << Answer_2 << endl;
    cout << "3. " << Answer_3 << endl;
    cout << "4. " << Answer_4 << endl;
    cout << endl;
    
    cout << "What is your answer?" << endl;
    cin >> Guess;
     if (Guess == Correct_Answer)
     { 
      cout << endl;
      cout << "Correct." << endl;
      Total = Total + Question_Score;
      cout << "Score: " << Question_Score << " out of " << Question_Score << "!" << endl;
      cout << endl;
     }
     else
     {
        cout << endl;
        cout << "Wrong!" << endl;
        cout << "Score: 0" << " out of " << Question_Score << "!" << endl;
        cout << "The correct answer is " << Correct_Answer << "." << endl;
        cout << endl;
     }
}
