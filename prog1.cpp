#include<iostream>
#include<vector>
#include <cstdlib>

using namespace std;

class Demo{
    private:
        vector<int> v1;

    public:
        void addElement(int element)
        {
            v1.push_back(element);
        }

        void updateElement(int index,int element)
        {
            v1[index] = element;
        }

        void deleteElement(int index)
        {
            v1.erase(v1.begin()+index);
        }

        void printElement()
        {
            cout<<"Vector is : ";
            for(int i = 0; i < v1.size(); i++)
            {
                cout<<v1[i]<<" ";
            }
            cout<<endl;
        }

};

int main()
{
    Demo d;

    int index,element,size;
    int choice;

    do
    {   

        cout<<endl;
        cout<<"Enter 1 for Add element"<<endl;
        cout<<"Enter 2 for Update element"<<endl;
        cout<<"Enter 3 for Delete element"<<endl;
        cout<<"Enter 4 for View element"<<endl;
        cout<<"Enter 5 for Clear vector"<<endl;
        cout<<"Enter 6 for Insert multiple data"<<endl;
        cout<<"Enter 0 for Exit"<<endl;
        cout<<endl;
        cout<<"Enter your Choice : ";
        cin>>choice;

        system("cls");

        if(choice == 4)
        {
            d.printElement(); 
        }

        switch(choice){
            case 1 :
                cout<<"Enter Element : ";
                cin>>element;
                d.addElement(element);
                break;
            case 2 :
                cout<<"Enter Index for Update : ";
                cin>>index;
                cout<<"Enter element : ";
                cin>>element;
                d.updateElement(index,element);
                break;
            case 3 :
                cout<<"Enter Index for Delete element : ";
                cin>>index;
                d.deleteElement(index);
                break;
            case 4 :
                break;
            case 5 :
                break;
            case 6 :
                cout<<"Enter size of vector : ";
                cin>>size;
                for(int i = 0; i < size; i++)
                {
                    cout<<"Enter Element v1["<<i<<"]: ";
                    cin>>element;

                    d.addElement(element);
                }
                break;
            case 0 :
                cout<<"Exiting....."<<endl;
                break;
            default :
                cout<<"Invalid Choice."<<endl;
        }

    }while(choice != 0);

    return 0;

}