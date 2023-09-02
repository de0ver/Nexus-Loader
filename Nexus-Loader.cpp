// Nexus-Loader.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <Windows.h>
#include <colorfunctions.h>
#include <conio.h>
#include <TlHelp32.h>
#include <functions.h>
#include <urlmon.h>
#include <tchar.h>
#include <fstream>
#include <string>

#pragma comment (lib, "urlmon.lib")

int main()
{
    system("title Nexus-Loader");
    system("mode con cols=85 lines=25");
    std::string appdata = getenv("APPDATA");
    int choosed;
    char next{};
    HRESULT hr;
    setColor(0, 15);
    std::cout << ".....................................................................................\n";
    std::cout << ".....................................................................................\n";
    std::cout << ".....................................................................................\n";
    std::cout << ".....................................................................................\n";
    std::cout << "................:++,...:++,,+++****:,+*+...;*+,.+++....;++..,;****+;,................\n";
    std::cout << "................+SS%:..;S%,:SS?++++,,+SS+.;SS*,,%S?....?S%,,?S%+;+?*,................\n";
    std::cout << "................+S%%%:.;S%,:SS+.......;%S*%%+..,%S?....?S%.:SS?:.....................\n";
    std::cout << "................+S?:%S;;S%,:S%%???;....:%SS+...,%S?....?S%,.:*%S%*;,.................\n";
    std::cout << "................+S?.:%%*S%,:SS*:::,...,?S%S%:..,%S?....?S%,...,:+%S%:................\n";
    std::cout << "................+S?..:?S%%,:SS+......:%S?,*S%;.,?S%,..,?S?..:,...;SS;................\n";
    std::cout << "................+S?...,?S%,:SS%????::%S?,..*SS+.;%S%*?%%?:.,%%%??%%*,................\n";
    std::cout << ".....................................................................................\n";
    std::cout << ".....................................................................................\n";
    std::cout << ".....................................................................................\n";
    std::cout << ".....................................................................................\n";

    setColor(15, 0);
    std::cout << "\nDiscord: dsc.gg/nexushvh; @de0ver;                                                   \n";

    setColor(0, 7);
    std::cout << "\n> Choose cheat: \n";
    std::cout << " 1. Onetap V3          5. Pandora           9. Airflow            13. 1tapgang \n 2. Onetap V2          6. Weave V1          10. Eternity V16      14. Mutiny.pw \n 3. Legendware V3      7. Weave V2          11. KIDUAHOOK         15. StickRpg \n 4. Legendware V2      8. Weave V2.5        12. BlazeHack         16. Nixware (2019)\n";
    std::cout << "\n> Number: ";
    std::cin >> choosed;

    if (choosed > 0) {
        system("cls");
        system("title $Nexus-Loader$ ");
        switch (choosed) {
        case 1:
            std::cout << "> Onetap V3\n";
            appdata += "\\1lugi3g.dll";
            if (!Functions::DoesFileExist(appdata.c_str())) {
                hr = URLDownloadToFile(NULL, "https://raw.githubusercontent.com/de0ver/Cheats-2020/main/1lugi3g.dll", appdata.c_str(), 0, 0);
                Sleep(5000);
                if (hr == S_OK) {
                    std::cout << "File downloaded! \n";
                 
                }
            }
            else {
                std::cout << "File exist... \n";
            }
            break;
        case 2:
            std::cout << "> Onetap V2\n";
            appdata += "\\OTC_1.dll";
            if (!Functions::DoesFileExist(appdata.c_str())) {
                hr = URLDownloadToFile(NULL, "https://raw.githubusercontent.com/de0ver/Cheats-2020/main/OTC_1.dll", appdata.c_str(), 0, 0);
                Sleep(5000);
                if (hr == S_OK) {
                    std::cout << "File downloaded! \n";
                }
            }
            else {
                std::cout << "File exist... \n";
            }
            break;
        case 3:
            std::cout << "> Legendware V3\n";
            appdata += "\\legendware.dll";
            if (!Functions::DoesFileExist(appdata.c_str())) {
                hr = URLDownloadToFile(NULL, "https://raw.githubusercontent.com/de0ver/Cheats-2020/main/legendware.dll", appdata.c_str(), 0, 0);
                Sleep(5000);
                if (hr == S_OK) {
                    std::cout << "File downloaded! \n";
                }
            }
            else {
                std::cout << "File exist... \n";
            }
            break;
        case 4:
            std::cout << "> Legendware V2\n";
            appdata += "\\legend2.dll";
            if (!Functions::DoesFileExist(appdata.c_str())) {
                hr = URLDownloadToFile(NULL, "https://raw.githubusercontent.com/de0ver/Cheats-2020/main/legend2.dll", appdata.c_str(), 0, 0);
                Sleep(5000);
                if (hr == S_OK) {
                    std::cout << "File downloaded! \n";
                }
            }
            else {
                std::cout << "File exist... \n";
            }
            break;
        case 5:
            std::cout << "> Pandora\n";
            std::cout << "Create, pdr, folder in Documents!\n";
            appdata += "\\memedora.dll";
            if (!Functions::DoesFileExist(appdata.c_str())) {
                hr = URLDownloadToFile(NULL, "https://raw.githubusercontent.com/de0ver/Cheats-2020/main/memedora.dll", appdata.c_str(), 0, 0);
                Sleep(5000);
                if (hr == S_OK) {
                    std::cout << "File downloaded! \n";
                }
            }
            else {
                std::cout << "File exist... \n";
            }
            break;
        case 6:
            std::cout << "> Weave V1\n";
            appdata += "\\weavev1.dll";
            if (!Functions::DoesFileExist(appdata.c_str())) {
                hr = URLDownloadToFile(NULL, "https://raw.githubusercontent.com/de0ver/Cheats-2020/main/weavev1.dll", appdata.c_str(), 0, 0);
                Sleep(5000);
                if (hr == S_OK) {
                    std::cout << "File downloaded! \n";
                }
            }
            else {
                std::cout << "File exist... \n";
            }
            break;
        case 7:
            std::cout << "> Weave V2\n";
            appdata += "\\weave.dll";
            if (!Functions::DoesFileExist(appdata.c_str())) {
                hr = URLDownloadToFile(NULL, "https://raw.githubusercontent.com/de0ver/Cheats-2020/main/weave.dll", appdata.c_str(), 0, 0);
                Sleep(5000);
                if (hr == S_OK) {
                    std::cout << "File downloaded! \n";
                }
            }
            else {
                std::cout << "File exist... \n";
            }
            break;
        case 8:
            std::cout << "> Weave V2.5\n";
            appdata += "\\weave2.52020.dll";
            if (!Functions::DoesFileExist(appdata.c_str())) {
                hr = URLDownloadToFile(NULL, "https://raw.githubusercontent.com/de0ver/Cheats-2020/main/weave2.52020.dll", appdata.c_str(), 0, 0);
                Sleep(5000);
                if (hr == S_OK) {
                    std::cout << "File downloaded! \n";
                }
            }
            else {
                std::cout << "File exist... \n";
            }
            break;
        case 9:
            std::cout << "> Airflow\n";
            appdata += "\\airflow.dll";
            if (!Functions::DoesFileExist(appdata.c_str())) {
                hr = URLDownloadToFile(NULL, "https://raw.githubusercontent.com/de0ver/Cheats-2020/main/airflow_2020.dll", appdata.c_str(), 0, 0);
                Sleep(5000);
                if (hr == S_OK) {
                    std::cout << "File downloaded! \n";
                }
            }
            else {
                std::cout << "File exist... \n";
            }
            break;
        case 10:
            std::cout << "> Eternity V16\n";
            appdata += "\\Eternity_abcdefghijklmnopqrstuvwxyz.dll";
            if (!Functions::DoesFileExist(appdata.c_str())) {
                hr = URLDownloadToFile(NULL, "https://raw.githubusercontent.com/de0ver/Cheats-2020/main/Eternity_abcdefghijklmnopqrstuvwxyz.dll", appdata.c_str(), 0, 0);
                Sleep(5000);
                if (hr == S_OK) {
                    std::cout << "File downloaded! \n";
                }
            }
            else {
                std::cout << "File exist... \n";
            }
            break;
        case 11:
            std::cout << "> KIDUAHOOK\n";
            appdata += "\\KiduaHook2.dll";
            if (!Functions::DoesFileExist(appdata.c_str())) {
                hr = URLDownloadToFile(NULL, "https://raw.githubusercontent.com/de0ver/Cheats-2020/main/KiduaHook2.dll", appdata.c_str(), 0, 0);
                Sleep(5000);
                if (hr == S_OK) {
                    std::cout << "File downloaded! \n";
                }
            }
            else {
                std::cout << "File exist... \n";
            }
            break;
        case 12:
            std::cout << "> BlazeHack\n";
            appdata += "\\blazehack.dll";
            if (!Functions::DoesFileExist(appdata.c_str())) {
                hr = URLDownloadToFile(NULL, "https://raw.githubusercontent.com/de0ver/Cheats-2020/main/blazehack.dll", appdata.c_str(), 0, 0);
                Sleep(5000);
                if (hr == S_OK) {
                    std::cout << "File downloaded! \n";
                }
            }
            else {
                std::cout << "File exist... \n";
            }
            break;
        case 13:
            std::cout << "> 1tapgang.cc\n";
            appdata += "\\1tapgang.dll";
            if (!Functions::DoesFileExist(appdata.c_str())) {
                hr = URLDownloadToFile(NULL, "https://raw.githubusercontent.com/de0ver/Cheats-2020/main/1tapgang.dll", appdata.c_str(), 0, 0);
                Sleep(5000);
                if (hr == S_OK) {
                    std::cout << "File downloaded! \n";
                }
            }
            else {
                std::cout << "File exist... \n";
            }
            break;
        case 14:
            std::cout << "> Mutiny.pw\n";
            appdata += "\\Mutiny.dll";
            if (!Functions::DoesFileExist(appdata.c_str())) {
                hr = URLDownloadToFile(NULL, "https://raw.githubusercontent.com/de0ver/Cheats-2020/main/Mutiny.dll", appdata.c_str(), 0, 0);
                Sleep(5000);
                if (hr == S_OK) {
                    std::cout << "File downloaded! \n";
                }
            }
            else {
                std::cout << "File exist... \n";
            }
            break;
        case 15:
            std::cout << "> StickRpg\n";
            appdata += "\\stickrpg.dll";
            if (!Functions::DoesFileExist(appdata.c_str())) {
                hr = URLDownloadToFile(NULL, "https://raw.githubusercontent.com/de0ver/Cheats-2020/main/stickrpg.dll", appdata.c_str(), 0, 0);
                Sleep(5000);
                if (hr == S_OK) {
                    std::cout << "File downloaded! \n";
                }
            }
            else {
                std::cout << "File exist... \n";
            }
            break;
        case 16:
            std::cout << "> Nixware (2019)\n";
            appdata += "\\nixware20.dll";
            if (!Functions::DoesFileExist(appdata.c_str())) {
                hr = URLDownloadToFile(NULL, "https://raw.githubusercontent.com/de0ver/Cheats-2020/main/nixware20.dll", appdata.c_str(), 0, 0);
                Sleep(5000);
                if (hr == S_OK) {
                    std::cout << "File downloaded! \n";
                }
            }
            else {
                std::cout << "File exist... \n";
            }
            break;
        default:
            setColor(0, 4);
            std::cout << "> Wrong number!\n";
        }

        system("title %Nexus-Loader% ");
        DWORD Process = Functions::GetProcessId("csgo.exe");
        setColor(0, 4);
        if (!Process) {
            std::cout << "> Open game and press any key...\n";
            system("pause");
            Process = Functions::GetProcessId("csgo.exe");
        }
        setColor(0, 7);

        
        HANDLE Game = OpenProcess(PROCESS_ALL_ACCESS, FALSE, Process);
        uintptr_t ModuleBase = Functions::GetModuleBaseAddress(Process, "client.dll");

        if (Process) {
            if (Functions::LoadLibraryInject(Process, appdata.c_str())) {
                Functions::Internal::Backup(Game);
                std::cout << ">>> Injected! \n";
                system("title *Nexus-Loader*");
                system("pause");
                ExitProcess(0);
            }
            else {
                Functions::Internal::Backup(Game);
                std::cout << ">>> Injection failed...\n";;
                system("title ^Nexus-Loader^");
                system("pause");
            }
        }
        else {
            std::cout << ">>> Process not found!\n";
            system("pause");
            exit(-1);
        }
    }
    return 0;
}



