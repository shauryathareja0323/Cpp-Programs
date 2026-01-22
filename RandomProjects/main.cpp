#include<iostream>
#include<windows.h>
using namespace std;

int main(){
    PROCESS_INFORMATION pi;
    STARTUPINFO si;

    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);

    TCHAR command[] = TEXT("notepad.exe");

    if(!CreateProcess(NULL, command, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi)){
        cerr<<"Failed to create process. Error code:"<<GetLastError()<<endl;
    }

    WaitForSingleObject(pi.hProcess, INFINITE);

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);

    return 0;
}