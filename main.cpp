#include <iostream>
#include <opencv2/opencv.hpp>
#include <string>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
    char* keys =
    "{help h ? |  ddd|    | print help message}"
    "{count    | fdfs| 100| print the count number}";

    CommandLineParser cmd(argc, argv, keys);

//    if(cmd.has("help"))
//        cout << "help has" << endl;
//    if(cmd.has("count"))
    {
        cout << "count has" << endl;
        cout << "count = " << cmd.get<int>("count");
    }
    return 0;
}
