#include <iostream>
#include <cstdlib>
using namespace std;
void triangle(int rows,std::string filler, bool left= true, bool inverted = false,bool right=false,bool pyramid=false) {
    for(int i=1;i<=rows;i++){
        if(left){
        if(inverted){
            for(int j=rows-i;j>=0;j--){
                cout << filler;
            }
        }
        else{
            for(int j=1;j<=i;j++){
                cout << filler;
            }
            }

        }
        if(right){
            if(!inverted){
                for(int k=rows-i;k>=0;k--){
                    cout << " ";
                }
                for(int j=1;j<=i;j++){
                    cout << filler;
                }
            }
            else{
                for(int k=1;k<=i-1;k++){
                    cout << " ";
                }
                for(int j=1;j<=rows-i+1;j++){
                    cout << filler;
                }

            }

        }
        if(pyramid){
            if(!inverted){
                for(int k=1;k<=rows-i;k++){
                    cout << " ";
                }
                for(int j=1;j<=2*i-1;j++){
                    cout << filler;
                }
            }

        
        else{
                for(int k=1;k<i;k++){
                    cout << " ";
                }
                for(int j=rows*2-1;j>=2*i-1;j--){
                    cout << filler;
                }
            }

        }
        cout << "\n";
        }

    }
void rectangle(int rows, int cols, std::string filler, bool hollow = false, bool hollowx = false) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (hollow&&!hollowx) {
                if (i == 1 || i == rows || j == 1 || j == cols) {
                    std::cout << filler;
                } else {
                    std::cout << " ";
                }
            } else if (hollowx) {
                if (i == 1 || i == rows || j == 1 || j == cols || i == j || j == cols - i + 1) {
                    std::cout << filler;
                } else {
                    std::cout << " ";
                }
            } else {
                std::cout << filler;
            }
        }
        std::cout << "\n";
    }
}

signed main(int argc, char** argv) {
    int rows, cols;
    int choice,subChoice;
    std::string filler;
    while(choice!=3){
        cout << "Welcome to shape maker\n";
        cout << "1. Rectangle\n";
        cout << "2. Triangles\n";
        cout << "3. Exit\n";
        cout << "Your Choice: ";
        cin >> choice;
        if(choice==1){
            while(subChoice!=4){
            cout << "**********Select the design*************\n";
            cout << "1. Normal\n";
            cout << "2. Hollow\n";
            cout << "3. Hollow with X\n";
            cout << "4. Main Menu\n";
            cout << "Your Choice: ";
            cin>>subChoice;
            if(subChoice==4){
                break;
            }
            if(subChoice>4){
                cout << "Invalid choice\n";
                continue;
            }
            cout << "Enter the number of rows: ";
            cin >> rows;
            cout << "Enter the number of columns: ";
            cin >> cols;
            cout << "Enter the filler: ";
            cin >> filler;
            if(subChoice==1){
                cout<<"\n\n";
                rectangle(rows,cols,filler);
                cout<<"\n\n";

            }
            else if(subChoice==2){
                cout<<"\n\n";
                rectangle(rows,cols,filler,true,false);
                cout<<"\n\n";
            }
            else if(subChoice==3){
                cout<<"\n\n";
                rectangle(rows,cols,filler,true,true);
                cout<<"\n\n";
            }
            }


        }
        else if(choice==2){
            bool inverted;
            while(subChoice!=4){
            cout << "**********Select the design*************\n";
            cout << "1. Left aligned\n";
            cout << "2. Right Aligned\n";
            cout << "3. Pyramid\n";
            cout << "4. Main Menu\n";
            cout << "Your Choice: ";
            cin>>subChoice;
            if(subChoice==4){
                break;
            }
            if(subChoice>4){
                cout << "Invalid choice\n";
                continue;
            }
            cout << "Enter the number of rows: ";
            cin >> rows;
            cout << "Inverted?(0 for no, 1 for yes)";
            cin >> inverted;
            cout << "Enter the filler: ";
            cin >> filler;
            if(subChoice==1){
                cout<<"\n\n";
                triangle(rows,filler,true,inverted);
                cout<<"\n\n";

            }
            else if(subChoice==2){
                cout<<"\n\n";
                triangle(rows,filler,false,inverted,true);
                cout<<"\n\n";
            }
            else if(subChoice==3){
                cout<<"\n\n";
                triangle(rows,filler,false,inverted,false,true);
                cout<<"\n\n";
            }

            }
        }

    }
    return 0;
}
