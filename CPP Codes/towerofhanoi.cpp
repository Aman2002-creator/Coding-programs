// Tower of Hanoi

#include<iostream>
using namespace std;

void toh(int n,char from_rod, char to_rod,char aux_rod)
{
    if(n==0)
        return ;
    else 
    {
        toh(n-1,from_rod,aux_rod,to_rod);
        cout<<"Move disk "<<n<<" from rod "<<from_rod<<" to rod "<<to_rod<<endl;
        toh(n-1,aux_rod,to_rod,from_rod);
    }

}

int main()
{
    cout<<"Enter the number of disks:";
    int n;
    char A,B,C;
    cin>>n;
    toh(n,'A','B','C');
    return 0;
}
