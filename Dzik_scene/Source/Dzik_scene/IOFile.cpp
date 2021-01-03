// Fill out your copyright notice in the Description page of Project Settings.

#include "IOFile.h"

bool UIOFile::ValidateLogin(FString login, FString password)
{
    vector<string> users;
    vector<string> passwords;
    vector<string> logged;

    string loginStringify = TCHAR_TO_UTF8(*login);
    string passwordStringify = TCHAR_TO_UTF8(*password);
    string directory = TCHAR_TO_UTF8(*FPaths::ProjectContentDir());

    string line;
    ifstream usersFile(directory + "Files/users.txt");
    ifstream loggedFile(directory + "Files/logged.txt");

    bool isUser = true;

    if (usersFile.is_open())
    {
        while (getline(usersFile, line))
        {
            if (isUser)
            {
                users.push_back(line);
            }
            else
            {
                passwords.push_back(line);
            }

            isUser = !isUser;
        }

        usersFile.close();
    }

    if (loggedFile.is_open())
    {
        while (getline(loggedFile, line))
        {
            logged.push_back(line);
        }

        loggedFile.close();
    }

    for (int i = 0; i < users.size(); i ++)
    {
        if (users[i] == loginStringify)
        {
            UE_LOG(LogTemp, Warning, TEXT("valid login1"));

            ofstream myfile1;
            myfile1.open(directory + "Files/logged.txt");
            myfile1 << passwords[i];
            myfile1.close();


            if (passwords[i] == "qwe")
                UE_LOG(LogTemp, Warning, TEXT("password saved ok"));

            if (passwordStringify == "qwe")
                UE_LOG(LogTemp, Warning, TEXT("password from file ok"));

            if (passwords[i] == passwordStringify)
            {
                UE_LOG(LogTemp, Warning, TEXT("valid password"));

                bool userIsLogged = false;

                for (int j = 0; j < logged.size(); j++)
                {
                    if (users[i] == logged[j])
                        userIsLogged = true;
                }

                if (!userIsLogged)
                {
                    ofstream myfile;
                    myfile.open(directory + "Files/logged.txt");
                    myfile << users[i];
                    myfile.close();

                    return true;
                }              
            }           
        }
    }

    return false;

}

void UIOFile::StartSession()
{
    string directory = TCHAR_TO_UTF8(*FPaths::ProjectContentDir());
    string filename = directory + "Files/logged.txt";

    ofstream MyFile(filename, std::ofstream::trunc);

    // Close the file
    MyFile.close();
}