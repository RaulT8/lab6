#include <iostream>
#include "Patrat.h"
#include "Repo.h"

void menu()
{
    cout<<"1.Adauga o entitate: "<<endl;
    cout<<"2.Afiseaza o entitate dupa id: "<<endl;
    cout<<"3.Afiseaza cea mai mare entitate: "<<endl;
    cout<<"4.Afisati patratele din primul cadran: "<<endl;
    cout<<"5.Afisati cea mai lunga secventa de patrate egale: "<<endl;
}


int main() {
    Repo repository;
    bool ok = true;
    char optiune;
    int n;
    while(ok)
    {
        Patrat p;
        menu();
        cout<<"Introduceti o optiune: ";
        cin>>optiune;
        switch(optiune)
        {
            case '1':
                cout<<"Dati numarul de patrate pe care doriti sa le adaugati: "<<endl;
                cin>>n;
                for(int i=0;i<n;i++)
                {
                    float x1,x2,y1,y2;
                    cout<<endl;
                    cout<<"Introduceti coordonatele pentru patratul: "<<i+1<<endl;
                    cout<<"x1= ";
                    cin>>x1;
                    cout<<"y1= ";
                    cin>>y1;
                    cout<<"x2= ";
                    cin>>x2;
                    cout<<"y2= ";
                    cin>>y2;
                    p.set_coordonate(x1,x2,y1,y2);
                    repository.addEntity(p);
                }
                cout<<endl;
                break;
            case '2':
            {
                int id;
                cout<<"Introduceti id-ul: ";
                cin>>id;
                cout<<repository.getEntity(id);
                cout<<endl;
                break;
            }
            case '3':
            {
                cout<<"Cel mai mare patrat este: ";
                cout<<repository.getBiggest()<<endl;
                break;
            }
            case '4':
            {
                vector<Patrat> rezultat;
                cout<<"Patratele care se afla in primul cadran sunt: "<<endl;
                rezultat = repository.squareInFirstQuadrant();
                if(rezultat.size()!=0)
                    for(auto i= rezultat.begin();i< rezultat.end();i++)
                        cout<<*i<<" ";
                break;
            }
            case '5':
            {
                int start = 0;
                int end =0;
                repository.biggestEqualSecv(n,start,end);
                for(int i=start;i<end;i++)
                    cout<<repository.getEntity(i);
            }
            case 'x':
                ok = false;
                break;
            default:
                cout<<"Optiune gresita! reincercati: ";
        }
    }

    return 0;
}
