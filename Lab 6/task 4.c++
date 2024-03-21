// 23k-0077
// Sajid Ali

#include<iostream>
using namespace std;
inline float battingAverage(int TotalRunsScored, int toatalDismisals)
{
  float average = (float)TotalRunsScored/toatalDismisals;
  return average;
}
inline float strikeRate(int runsScored, int ballsFaced)
{
  float strikeRate = ((float)runsScored/ballsFaced)*100;
  return strikeRate;
}
int main()
{
  int runsScored, ballsFaced, TotalRunsScored, toatalDismisals;
  float average, PlayerstrikeRate;
  cout<<"Enter the runs scored by the batsman: ";
  cin>>runsScored;
  cout<<"Enter the balls faced by the batsman: ";
  cin>>ballsFaced;
  cout<<"Enter the total runs scored by the batsman: ";
  cin>>TotalRunsScored;
  cout<<"Enter the total dismisals by the batsman: ";
  cin>>toatalDismisals;
  average = battingAverage(TotalRunsScored, toatalDismisals);
  PlayerstrikeRate = strikeRate(runsScored, ballsFaced);
  cout<<"The batting average of the batsman is: "<<average<<endl;
  cout<<"The strike rate of the batsman is: "<<PlayerstrikeRate<<endl;
  return 0;
}
