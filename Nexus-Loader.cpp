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
#include <filesystem>
#include <intrin.h>
#include <shlobj.h>
#include <cstdlib>
#include <vector>

namespace fs = std::filesystem;
#pragma comment (lib, "urlmon.lib")

int main()
{
    system("title Nexus-Loader");
    system("mode con cols=85 lines=25");
    std::string appdata = getenv("APPDATA");
    int choosed;
    int color, color2, color3;
    char next{};
    char my_documents_folder[MAX_PATH];
    char onetap_path[MAX_PATH];
    long res = SHGetFolderPath(NULL, CSIDL_PERSONAL, NULL, SHGFP_TYPE_CURRENT, my_documents_folder);
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
    std::cout << " 1. Onetap V3          5. Pandora           9. Airflow            13. 1tapgang \n";
    std::cout << " 2. Onetap V2          6. Weave V1          10. Eternity V16      14. Mutiny.pw \n";
    std::cout << " 3. Legendware V3      7. Weave V2          11. KIDUAHOOK         15. StickRpg \n";
    std::cout << " 4. Legendware V2      8. Weave V2.5        12. BlazeHack         16. Nixware (2019)\n";
    std::cout << " 17. Nemesis           19. Onetap V3 Menu Color Changer\n";
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
            std::cout << "Created *pdr* folder in Documents!\n";
            if (res == S_OK)
            {
                std::string pdr_folder = std::string(my_documents_folder) + "\\pdr\\";
                fs::create_directory(pdr_folder);
            }
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
            if (res == S_OK)
            {
                std::string air_folder = std::string(my_documents_folder) + "\\airflow\\";
                fs::create_directory(air_folder);
            }
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
        case 17:
            std::cout << "> Nemesis.tech\n";
            appdata += "\\nem(1).dll";
            if (!Functions::DoesFileExist(appdata.c_str())) {
                hr = URLDownloadToFile(NULL, "https://raw.githubusercontent.com/de0ver/Cheats-for-legacy-CS-GO-2020-Nexus-Loader/main/nem(1).dll", appdata.c_str(), 0, 0);
                Sleep(5000);
                if (hr == S_OK) {
                    std::cout << "File downloaded! \n";
                }
            }
            else {
                std::cout << "File exist... \n";
            }
            break;
        case 18:
            std::cout << "> Onetap V3 Menu Color Changer (thx ey4egky for help)\n";
            std::cout << "> Put path to your dll: ";
            std::cin >> onetap_path;
            std::ifstream inputFile(onetap_path, std::ios::binary);
            std::vector<char> fileBytes((std::istreambuf_iterator<char>(inputFile)),
                (std::istreambuf_iterator<char>()));
            if (inputFile) {
                std::cout << "> R(0-255) = ";
                std::cin >> color;
                std::cout << "> G(0-255) = ";
                std::cin >> color2;
                std::cout << "> B(0-255) = ";
                std::cin >> color3;
                if (color >= 0 && color <= 255 && color2 >= 0 && color2 <= 255 && color3 >= 0 && color3 <= 255) {
                    fileBytes[0x077631] = (byte)color;
                    fileBytes[0x077631 + 1] = (byte)color2;
                    fileBytes[0x077631 + 2] = (byte)color3;

                    fileBytes[0x077DF0] = (byte)color;
                    fileBytes[0x077DF0 + 1] = (byte)color2;
                    fileBytes[0x077DF0 + 2] = (byte)color3;

                    fileBytes[0x077EC1] = (byte)color;
                    fileBytes[0x077EC1 + 1] = (byte)color2;
                    fileBytes[0x077EC1 + 2] = (byte)color3;

                    fileBytes[0x07A217] = (byte)color;
                    fileBytes[0x07A217 + 1] = (byte)color2;
                    fileBytes[0x07A217 + 2] = (byte)color3;

                    fileBytes[0x07A9CD] = (byte)color;
                    fileBytes[0x07A9CD + 1] = (byte)color2;
                    fileBytes[0x07A9CD + 2] = (byte)color3;

                    fileBytes[0x0C3C76] = (byte)color;
                    fileBytes[0x0C3C76 + 1] = (byte)color2;
                    fileBytes[0x0C3C76 + 2] = (byte)color3;

                    fileBytes[0x0C3CA1] = (byte)color;
                    fileBytes[0x0C3CA1 + 1] = (byte)color2;
                    fileBytes[0x0C3CA1 + 2] = (byte)color3;

                    fileBytes[0x88E880] = (byte)color;
                    fileBytes[0x88E880 + 1] = (byte)color2;
                    fileBytes[0x88E880 + 2] = (byte)color3;

                    fileBytes[0x88E894] = (byte)color;
                    fileBytes[0x88E894 + 1] = (byte)color2;
                    fileBytes[0x88E894 + 2] = (byte)color3;

                    fileBytes[0x88E8A8] = (byte)color;
                    fileBytes[0x88E8A8 + 1] = (byte)color2;
                    fileBytes[0x88E8A8 + 2] = (byte)color3;

                    fileBytes[0x88E8BC] = (byte)color;
                    fileBytes[0x88E8BC + 1] = (byte)color2;
                    fileBytes[0x88E8BC + 2] = (byte)color3;

                    fileBytes[0x88E8D0] = (byte)color;
                    fileBytes[0x88E8D0 + 1] = (byte)color2;
                    fileBytes[0x88E8D0 + 2] = (byte)color3;

                    fileBytes[0x88E8E4] = (byte)color;
                    fileBytes[0x88E8E4 + 1] = (byte)color2;
                    fileBytes[0x88E8E4 + 2] = (byte)color3;

                    fileBytes[0x88E8F8] = (byte)color;
                    fileBytes[0x88E8F8 + 1] = (byte)color2;
                    fileBytes[0x88E8F8 + 2] = (byte)color3;

                    fileBytes[0x88E90C] = (byte)color;
                    fileBytes[0x88E90C + 1] = (byte)color2;
                    fileBytes[0x88E90C + 2] = (byte)color3;

                    fileBytes[0x88E920] = (byte)color;
                    fileBytes[0x88E920 + 1] = (byte)color2;
                    fileBytes[0x88E920 + 2] = (byte)color3;

                    fileBytes[0x88E934] = (byte)color;
                    fileBytes[0x88E934 + 1] = (byte)color2;
                    fileBytes[0x88E934 + 2] = (byte)color3;


                    fileBytes[0x88E948] = (byte)color;
                    fileBytes[0x88E948 + 1] = (byte)color2;
                    fileBytes[0x88E948 + 2] = (byte)color3;


                    fileBytes[0x88E95C] = (byte)color;
                    fileBytes[0x88E95C + 1] = (byte)color2;
                    fileBytes[0x88E95C + 2] = (byte)color3;

                    fileBytes[0x88E970] = (byte)color;
                    fileBytes[0x88E970 + 1] = (byte)color2;
                    fileBytes[0x88E970 + 2] = (byte)color3;

                    fileBytes[0x88E984] = (byte)color;
                    fileBytes[0x88E984 + 1] = (byte)color2;
                    fileBytes[0x88E984 + 2] = (byte)color3;

                    fileBytes[0x88E998] = (byte)color;
                    fileBytes[0x88E998 + 1] = (byte)color2;
                    fileBytes[0x88E998 + 2] = (byte)color3;


                    fileBytes[0x88E9AC] = (byte)color;
                    fileBytes[0x88E9AC + 1] = (byte)color2;
                    fileBytes[0x88E9AC + 2] = (byte)color3;

                    fileBytes[0x88E9C0] = (byte)color;
                    fileBytes[0x88E9C0 + 1] = (byte)color2;
                    fileBytes[0x88E9C0 + 2] = (byte)color3;

                    fileBytes[0x88E9D4] = (byte)color;
                    fileBytes[0x88E9D4 + 1] = (byte)color2;
                    fileBytes[0x88E9D4 + 2] = (byte)color3;

                    fileBytes[0x88E9E8] = (byte)color;
                    fileBytes[0x88E9E8 + 1] = (byte)color2;
                    fileBytes[0x88E9E8 + 2] = (byte)color3;

                    fileBytes[0x88E9FC] = (byte)color;
                    fileBytes[0x88E9FC + 1] = (byte)color2;
                    fileBytes[0x88E9FC + 2] = (byte)color3;

                    fileBytes[0x88EA10] = (byte)color;
                    fileBytes[0x88EA10 + 1] = (byte)color2;
                    fileBytes[0x88EA10 + 2] = (byte)color3;

                    fileBytes[0x88EA24] = (byte)color;
                    fileBytes[0x88EA24 + 1] = (byte)color2;
                    fileBytes[0x88EA24 + 2] = (byte)color3;

                    fileBytes[0x88EA38] = (byte)color;
                    fileBytes[0x88EA38 + 1] = (byte)color2;
                    fileBytes[0x88EA38 + 2] = (byte)color3;

                    fileBytes[0x88EA4C] = (byte)color;
                    fileBytes[0x88EA4C + 1] = (byte)color2;
                    fileBytes[0x88EA4C + 2] = (byte)color3;

                    fileBytes[0x88EA60] = (byte)color;
                    fileBytes[0x88EA60 + 1] = (byte)color2;
                    fileBytes[0x88EA60 + 2] = (byte)color3;

                    fileBytes[0x88EA74] = (byte)color;
                    fileBytes[0x88EA74 + 1] = (byte)color2;
                    fileBytes[0x88EA74 + 2] = (byte)color3;

                    fileBytes[0x88EA88] = (byte)color;
                    fileBytes[0x88EA88 + 1] = (byte)color2;
                    fileBytes[0x88EA88 + 2] = (byte)color3;

                    fileBytes[0x88EA9C] = (byte)color;
                    fileBytes[0x88EA9C + 1] = (byte)color2;
                    fileBytes[0x88EA9C + 2] = (byte)color3;

                    fileBytes[0x88EAB0] = (byte)color;
                    fileBytes[0x88EAB0 + 1] = (byte)color2;
                    fileBytes[0x88EAB0 + 2] = (byte)color3;

                    fileBytes[0x88EAC4] = (byte)color;
                    fileBytes[0x88EAC4 + 1] = (byte)color2;
                    fileBytes[0x88EAC4 + 2] = (byte)color3;

                    fileBytes[0x88EAD8] = (byte)color;
                    fileBytes[0x88EAD8 + 1] = (byte)color2;
                    fileBytes[0x88EAD8 + 2] = (byte)color3;

                    fileBytes[0x88EAEC] = (byte)color;
                    fileBytes[0x88EAEC + 1] = (byte)color2;
                    fileBytes[0x88EAEC + 2] = (byte)color3;

                    fileBytes[0x88EB00] = (byte)color;
                    fileBytes[0x88EB00 + 1] = (byte)color2;
                    fileBytes[0x88EB00 + 2] = (byte)color3;

                    fileBytes[0x88EB14] = (byte)color;
                    fileBytes[0x88EB14 + 1] = (byte)color2;
                    fileBytes[0x88EB14 + 2] = (byte)color3;


                    fileBytes[0x88EB28] = (byte)color;
                    fileBytes[0x88EB28 + 1] = (byte)color2;
                    fileBytes[0x88EB28 + 2] = (byte)color3;


                    fileBytes[0x88EB3C] = (byte)color;
                    fileBytes[0x88EB3C + 1] = (byte)color2;
                    fileBytes[0x88EB3C + 2] = (byte)color3;

                    fileBytes[0x88EB50] = (byte)color;
                    fileBytes[0x88EB50 + 1] = (byte)color2;
                    fileBytes[0x88EB50 + 2] = (byte)color3;

                    fileBytes[0x88EB64] = (byte)color;
                    fileBytes[0x88EB64 + 1] = (byte)color2;
                    fileBytes[0x88EB64 + 2] = (byte)color3;

                    fileBytes[0x88EB78] = (byte)color;
                    fileBytes[0x88EB78 + 1] = (byte)color2;
                    fileBytes[0x88EB78 + 2] = (byte)color3;

                    fileBytes[0x88EB8C] = (byte)color;
                    fileBytes[0x88EB8C + 1] = (byte)color2;
                    fileBytes[0x88EB8C + 2] = (byte)color3;

                    fileBytes[0x88EBA0] = (byte)color;
                    fileBytes[0x88EBA0 + 1] = (byte)color2;
                    fileBytes[0x88EBA0 + 2] = (byte)color3;

                    fileBytes[0x88EBB4] = (byte)color;
                    fileBytes[0x88EBB4 + 1] = (byte)color2;
                    fileBytes[0x88EBB4 + 2] = (byte)color3;

                    fileBytes[0x88EBC8] = (byte)color;
                    fileBytes[0x88EBC8 + 1] = (byte)color2;
                    fileBytes[0x88EBC8 + 2] = (byte)color3;

                    fileBytes[0x88EBDC] = (byte)color;
                    fileBytes[0x88EBDC + 1] = (byte)color2;
                    fileBytes[0x88EBDC + 2] = (byte)color3;

                    fileBytes[0x88EBF0] = (byte)color;
                    fileBytes[0x88EBF0 + 1] = (byte)color2;
                    fileBytes[0x88EBF0 + 2] = (byte)color3;

                    fileBytes[0x88EC04] = (byte)color;
                    fileBytes[0x88EC04 + 1] = (byte)color2;
                    fileBytes[0x88EC04 + 2] = (byte)color3;

                    fileBytes[0x88EC18] = (byte)color;
                    fileBytes[0x88EC18 + 1] = (byte)color2;
                    fileBytes[0x88EC18 + 2] = (byte)color3;

                    fileBytes[0x88EC2C] = (byte)color;
                    fileBytes[0x88EC2C + 1] = (byte)color2;
                    fileBytes[0x88EC2C + 2] = (byte)color3;

                    fileBytes[0x88EC40] = (byte)color;
                    fileBytes[0x88EC40 + 1] = (byte)color2;
                    fileBytes[0x88EC40 + 2] = (byte)color3;

                    fileBytes[0x88EC54] = (byte)color;
                    fileBytes[0x88EC54 + 1] = (byte)color2;
                    fileBytes[0x88EC54 + 2] = (byte)color3;


                    fileBytes[0x88EC68] = (byte)color;
                    fileBytes[0x88EC68 + 1] = (byte)color2;
                    fileBytes[0x88EC68 + 2] = (byte)color3;

                    fileBytes[0x88EC7C] = (byte)color;
                    fileBytes[0x88EC7C + 1] = (byte)color2;
                    fileBytes[0x88EC7C + 2] = (byte)color3;

                    fileBytes[0x88EC90] = (byte)color;
                    fileBytes[0x88EC90 + 1] = (byte)color2;
                    fileBytes[0x88EC90 + 2] = (byte)color3;


                    fileBytes[0x88ECA4] = (byte)color;
                    fileBytes[0x88ECA4 + 1] = (byte)color2;
                    fileBytes[0x88ECA4 + 2] = (byte)color3;


                    fileBytes[0x88ECB8] = (byte)color;
                    fileBytes[0x88ECB8 + 1] = (byte)color2;
                    fileBytes[0x88ECB8 + 2] = (byte)color3;


                    fileBytes[0x88ECCC] = (byte)color;
                    fileBytes[0x88ECCC + 1] = (byte)color2;
                    fileBytes[0x88ECCC + 2] = (byte)color3;


                    fileBytes[0x88ECE0] = (byte)color;
                    fileBytes[0x88ECE0 + 1] = (byte)color2;
                    fileBytes[0x88ECE0 + 2] = (byte)color3;


                    fileBytes[0x88ECF4] = (byte)color;
                    fileBytes[0x88ECF4 + 1] = (byte)color2;
                    fileBytes[0x88ECF4 + 2] = (byte)color3;


                    fileBytes[0x88ED08] = (byte)color;
                    fileBytes[0x88ED08 + 1] = (byte)color2;
                    fileBytes[0x88ED08 + 2] = (byte)color3;


                    fileBytes[0x88ED1C] = (byte)color;
                    fileBytes[0x88ED1C + 1] = (byte)color2;
                    fileBytes[0x88ED1C + 2] = (byte)color3;


                    fileBytes[0x88ED30] = (byte)color;
                    fileBytes[0x88ED30 + 1] = (byte)color2;
                    fileBytes[0x88ED30 + 2] = (byte)color3;


                    fileBytes[0x88ED44] = (byte)color;
                    fileBytes[0x88ED44 + 1] = (byte)color2;
                    fileBytes[0x88ED44 + 2] = (byte)color3;


                    fileBytes[0x88ED58] = (byte)color;
                    fileBytes[0x88ED58 + 1] = (byte)color2;
                    fileBytes[0x88ED58 + 2] = (byte)color3;


                    fileBytes[0x88ED6C] = (byte)color;
                    fileBytes[0x88ED6C + 1] = (byte)color2;
                    fileBytes[0x88ED6C + 2] = (byte)color3;


                    fileBytes[0x88ED80] = (byte)color;
                    fileBytes[0x88ED80 + 1] = (byte)color2;
                    fileBytes[0x88ED80 + 2] = (byte)color3;


                    fileBytes[0x88ED94] = (byte)color;
                    fileBytes[0x88ED94 + 1] = (byte)color2;
                    fileBytes[0x88ED94 + 2] = (byte)color3;


                    fileBytes[0x88EDA8] = (byte)color;
                    fileBytes[0x88EDA8 + 1] = (byte)color2;
                    fileBytes[0x88EDA8 + 2] = (byte)color3;


                    fileBytes[0x88EDBC] = (byte)color;
                    fileBytes[0x88EDBC + 1] = (byte)color2;
                    fileBytes[0x88EDBC + 2] = (byte)color3;


                    fileBytes[0x88EDD0] = (byte)color;
                    fileBytes[0x88EDD0 + 1] = (byte)color2;
                    fileBytes[0x88EDD0 + 2] = (byte)color3;


                    fileBytes[0x88EDE4] = (byte)color;
                    fileBytes[0x88EDE4 + 1] = (byte)color2;
                    fileBytes[0x88EDE4 + 2] = (byte)color3;


                    fileBytes[0x88EDF8] = (byte)color;
                    fileBytes[0x88EDF8 + 1] = (byte)color2;
                    fileBytes[0x88EDF8 + 2] = (byte)color3;


                    fileBytes[0x88EE0C] = (byte)color;
                    fileBytes[0x88EE0C + 1] = (byte)color2;
                    fileBytes[0x88EE0C + 2] = (byte)color3;


                    fileBytes[0x88EE20] = (byte)color;
                    fileBytes[0x88EE20 + 1] = (byte)color2;
                    fileBytes[0x88EE20 + 2] = (byte)color3;


                    fileBytes[0x88EE34] = (byte)color;
                    fileBytes[0x88EE34 + 1] = (byte)color2;
                    fileBytes[0x88EE34 + 2] = (byte)color3;


                    fileBytes[0x88EE48] = (byte)color;
                    fileBytes[0x88EE48 + 1] = (byte)color2;
                    fileBytes[0x88EE48 + 2] = (byte)color3;


                    fileBytes[0x88EE5C] = (byte)color;
                    fileBytes[0x88EE5C + 1] = (byte)color2;
                    fileBytes[0x88EE5C + 2] = (byte)color3;


                    fileBytes[0x88EE68] = (byte)color;
                    fileBytes[0x88EE68 + 1] = (byte)color2;
                    fileBytes[0x88EE68 + 2] = (byte)color3;


                    fileBytes[0x88EE7C] = (byte)color;
                    fileBytes[0x88EE7C + 1] = (byte)color2;
                    fileBytes[0x88EE7C + 2] = (byte)color3;

                    fileBytes[0x88EEA4] = (byte)color;
                    fileBytes[0x88EEA4 + 1] = (byte)color2;
                    fileBytes[0x88EEA4 + 2] = (byte)color3;

                    fileBytes[0x88EEB8] = (byte)color;
                    fileBytes[0x88EEB8 + 1] = (byte)color2;
                    fileBytes[0x88EEB8 + 2] = (byte)color3;

                    fileBytes[0x88EECC] = (byte)color;
                    fileBytes[0x88EECC + 1] = (byte)color2;
                    fileBytes[0x88EECC + 2] = (byte)color3;

                    fileBytes[0x88EEE0] = (byte)color;
                    fileBytes[0x88EEE0 + 1] = (byte)color2;
                    fileBytes[0x88EEE0 + 2] = (byte)color3;

                    fileBytes[0x88EEF4] = (byte)color;
                    fileBytes[0x88EEF4 + 1] = (byte)color2;
                    fileBytes[0x88EEF4 + 2] = (byte)color3;

                    fileBytes[0x88EF08] = (byte)color;
                    fileBytes[0x88EF08 + 1] = (byte)color2;
                    fileBytes[0x88EF08 + 2] = (byte)color3;

                    fileBytes[0x88EF1C] = (byte)color;
                    fileBytes[0x88EF1C + 1] = (byte)color2;
                    fileBytes[0x88EF1C + 2] = (byte)color3;

                    fileBytes[0x88EF30] = (byte)color;
                    fileBytes[0x88EF30 + 1] = (byte)color2;
                    fileBytes[0x88EF30 + 2] = (byte)color3;

                    fileBytes[0x88EF44] = (byte)color;
                    fileBytes[0x88EF44 + 1] = (byte)color2;
                    fileBytes[0x88EF44 + 2] = (byte)color3;

                    fileBytes[0x88EF58] = (byte)color;
                    fileBytes[0x88EF58 + 1] = (byte)color2;
                    fileBytes[0x88EF58 + 2] = (byte)color3;

                    fileBytes[0x88EF6C] = (byte)color;
                    fileBytes[0x88EF6C + 1] = (byte)color2;
                    fileBytes[0x88EF6C + 2] = (byte)color3;

                    fileBytes[0x88EF80] = (byte)color;
                    fileBytes[0x88EF80 + 1] = (byte)color2;
                    fileBytes[0x88EF80 + 2] = (byte)color3;

                    fileBytes[0x88EF94] = (byte)color;
                    fileBytes[0x88EF94 + 1] = (byte)color2;
                    fileBytes[0x88EF94 + 2] = (byte)color3;

                    fileBytes[0x88EFA8] = (byte)color;
                    fileBytes[0x88EFA8 + 1] = (byte)color2;
                    fileBytes[0x88EFA8 + 2] = (byte)color3;

                    fileBytes[0x88EFBC] = (byte)color;
                    fileBytes[0x88EFBC + 1] = (byte)color2;
                    fileBytes[0x88EFBC + 2] = (byte)color3;

                    fileBytes[0x88EFD0] = (byte)color;
                    fileBytes[0x88EFD0 + 1] = (byte)color2;
                    fileBytes[0x88EFD0 + 2] = (byte)color3;

                    fileBytes[0x88EFE4] = (byte)color;
                    fileBytes[0x88EFE4 + 1] = (byte)color2;
                    fileBytes[0x88EFE4 + 2] = (byte)color3;

                    fileBytes[0x88EFF8] = (byte)color;
                    fileBytes[0x88EFF8 + 1] = (byte)color2;
                    fileBytes[0x88EFF8 + 2] = (byte)color3;

                    fileBytes[0x88F00C] = (byte)color;
                    fileBytes[0x88F00C + 1] = (byte)color2;
                    fileBytes[0x88F00C + 2] = (byte)color3;

                    fileBytes[0x88F020] = (byte)color;
                    fileBytes[0x88F020 + 1] = (byte)color2;
                    fileBytes[0x88F020 + 2] = (byte)color3;

                    fileBytes[0x88F034] = (byte)color;
                    fileBytes[0x88F034 + 1] = (byte)color2;
                    fileBytes[0x88F034 + 2] = (byte)color3;

                    fileBytes[0x88F048] = (byte)color;
                    fileBytes[0x88F048 + 1] = (byte)color2;
                    fileBytes[0x88F048 + 2] = (byte)color3;

                    fileBytes[0x88F05C] = (byte)color;
                    fileBytes[0x88F05C + 1] = (byte)color2;
                    fileBytes[0x88F05C + 2] = (byte)color3;

                    fileBytes[0x88F070] = (byte)color;
                    fileBytes[0x88F070 + 1] = (byte)color2;
                    fileBytes[0x88F070 + 2] = (byte)color3;

                    fileBytes[0x88F084] = (byte)color;
                    fileBytes[0x88F084 + 1] = (byte)color2;
                    fileBytes[0x88F084 + 2] = (byte)color3;

                    fileBytes[0x88F098] = (byte)color;
                    fileBytes[0x88F098 + 1] = (byte)color2;
                    fileBytes[0x88F098 + 2] = (byte)color3;

                    fileBytes[0x88F0AC] = (byte)color;
                    fileBytes[0x88F0AC + 1] = (byte)color2;
                    fileBytes[0x88F0AC + 2] = (byte)color3;

                    fileBytes[0x88F0C0] = (byte)color;
                    fileBytes[0x88F0C0 + 1] = (byte)color2;
                    fileBytes[0x88F0C0 + 2] = (byte)color3;

                    fileBytes[0x88F0D4] = (byte)color;
                    fileBytes[0x88F0D4 + 1] = (byte)color2;
                    fileBytes[0x88F0D4 + 2] = (byte)color3;

                    fileBytes[0x88F0E8] = (byte)color;
                    fileBytes[0x88F0E8 + 1] = (byte)color2;
                    fileBytes[0x88F0E8 + 2] = (byte)color3;

                    fileBytes[0x88F0FC] = (byte)color;
                    fileBytes[0x88F0FC + 1] = (byte)color2;
                    fileBytes[0x88F0FC + 2] = (byte)color3;

                    fileBytes[0x88F110] = (byte)color;
                    fileBytes[0x88F110 + 1] = (byte)color2;
                    fileBytes[0x88F110 + 2] = (byte)color3;

                    fileBytes[0x88F124] = (byte)color;
                    fileBytes[0x88F124 + 1] = (byte)color2;
                    fileBytes[0x88F124 + 2] = (byte)color3;

                    fileBytes[0x88F138] = (byte)color;
                    fileBytes[0x88F138 + 1] = (byte)color2;
                    fileBytes[0x88F138 + 2] = (byte)color3;

                    fileBytes[0x88F14C] = (byte)color;
                    fileBytes[0x88F14C + 1] = (byte)color2;
                    fileBytes[0x88F14C + 2] = (byte)color3;

                    fileBytes[0x88F160] = (byte)color;
                    fileBytes[0x88F160 + 1] = (byte)color2;
                    fileBytes[0x88F160 + 2] = (byte)color3;

                    fileBytes[0x88F174] = (byte)color;
                    fileBytes[0x88F174 + 1] = (byte)color2;
                    fileBytes[0x88F174 + 2] = (byte)color3;

                    fileBytes[0x88F188] = (byte)color;
                    fileBytes[0x88F188 + 1] = (byte)color2;
                    fileBytes[0x88F188 + 2] = (byte)color3;

                    fileBytes[0x88F19C] = (byte)color;
                    fileBytes[0x88F19C + 1] = (byte)color2;
                    fileBytes[0x88F19C + 2] = (byte)color3;

                    fileBytes[0x88F1B0] = (byte)color;
                    fileBytes[0x88F1B0 + 1] = (byte)color2;
                    fileBytes[0x88F1B0 + 2] = (byte)color3;

                    fileBytes[0x88F1C4] = (byte)color;
                    fileBytes[0x88F1C4 + 1] = (byte)color2;
                    fileBytes[0x88F1C4 + 2] = (byte)color3;

                    fileBytes[0x88F1D8] = (byte)color;
                    fileBytes[0x88F1D8 + 1] = (byte)color2;
                    fileBytes[0x88F1D8 + 2] = (byte)color3;

                    fileBytes[0x88F1EC] = (byte)color;
                    fileBytes[0x88F1EC + 1] = (byte)color2;
                    fileBytes[0x88F1EC + 2] = (byte)color3;

                    fileBytes[0x88F200] = (byte)color;
                    fileBytes[0x88F200 + 1] = (byte)color2;
                    fileBytes[0x88F200 + 2] = (byte)color3;

                    fileBytes[0x88F214] = (byte)color;
                    fileBytes[0x88F214 + 1] = (byte)color2;
                    fileBytes[0x88F214 + 2] = (byte)color3;

                    fileBytes[0x88F228] = (byte)color;
                    fileBytes[0x88F228 + 1] = (byte)color2;
                    fileBytes[0x88F228 + 2] = (byte)color3;

                    fileBytes[0x88F23C] = (byte)color;
                    fileBytes[0x88F23C + 1] = (byte)color2;
                    fileBytes[0x88F23C + 2] = (byte)color3;

                    fileBytes[0x88F250] = (byte)color;
                    fileBytes[0x88F250 + 1] = (byte)color2;
                    fileBytes[0x88F250 + 2] = (byte)color3;

                    fileBytes[0x88F264] = (byte)color;
                    fileBytes[0x88F264 + 1] = (byte)color2;
                    fileBytes[0x88F264 + 2] = (byte)color3;

                    fileBytes[0x88F278] = (byte)color;
                    fileBytes[0x88F278 + 1] = (byte)color2;
                    fileBytes[0x88F278 + 2] = (byte)color3;

                    fileBytes[0x88F28C] = (byte)color;
                    fileBytes[0x88F28C + 1] = (byte)color2;
                    fileBytes[0x88F28C + 2] = (byte)color3;

                    fileBytes[0x88F2A0] = (byte)color;
                    fileBytes[0x88F2A0 + 1] = (byte)color2;
                    fileBytes[0x88F2A0 + 2] = (byte)color3;

                    fileBytes[0x88F2B4] = (byte)color;
                    fileBytes[0x88F2B4 + 1] = (byte)color2;
                    fileBytes[0x88F2B4 + 2] = (byte)color3;

                    fileBytes[0x88F2C8] = (byte)color;
                    fileBytes[0x88F2C8 + 1] = (byte)color2;
                    fileBytes[0x88F2C8 + 2] = (byte)color3;

                    fileBytes[0x88F2DC] = (byte)color;
                    fileBytes[0x88F2DC + 1] = (byte)color2;
                    fileBytes[0x88F2DC + 2] = (byte)color3;

                    fileBytes[0x88F2F0] = (byte)color;
                    fileBytes[0x88F2F0 + 1] = (byte)color2;
                    fileBytes[0x88F2F0 + 2] = (byte)color3;

                    fileBytes[0x88F304] = (byte)color;
                    fileBytes[0x88F304 + 1] = (byte)color2;
                    fileBytes[0x88F304 + 2] = (byte)color3;

                    fileBytes[0x88F318] = (byte)color;
                    fileBytes[0x88F318 + 1] = (byte)color2;
                    fileBytes[0x88F318 + 2] = (byte)color3;
                }
            }
            else {
                std::cout << "> Failed to open file...\n";
            }
            inputFile.close();
            std::ofstream outputFile(onetap_path, std::ios::binary | std::ios::trunc);
            outputFile.write(fileBytes.data(), fileBytes.size());

            outputFile.close();
            std::cout << "> Done!\n";
            system("pause");
            exit(-1);
            break;
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