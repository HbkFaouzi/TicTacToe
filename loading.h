# include <iostream>
# include <windows.h>

using namespace std;

void loadingBar()
{
    system("cls");
    system("color 0A");

    char a = 177, b = 218;
    cout<<"\n\n\n\n";
    cout<<"\n\n\n\n\t\t\t\t\tLoading ...\n";
    cout<<endl;
    cout<<"\t\t\t\t\t";

    for(int i = 0; i<26; i++)

    cout<<a;

    cout<<"\r";
    cout<<"\t\t\t\t\t";
    for(int i = 0; i<26; i++)
    {
        cout<<a;
        Sleep(200);
    }
    
}
