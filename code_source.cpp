// programme 1 :
#include <iostream>
#include <string>
using namespace std;
class MyClass {   // declaration et definition de la classe
    string nom ; //par defaut privee
public:
    MyClass() ; //creationn du constructeur
    ~MyClass() ;//creationn du destructeur
};
MyClass :: MyClass()// definition du constructeur  en dehors de la classee
{
    cout<< "entrer votre nom " <<endl;
    cin >> nom ;
    cout << "bonjour monsieur: " << nom << endl;
}
MyClass :: ~MyClass() // definition du constructeur  en dehors de la classee
{
    cout << "aurevoir monsieur: " << nom << endl;
}
int main(void) {
    MyClass e1 ; // creation de l'objet

    return 0;}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// programme 2
float hauteur , largeur ;
class shape{ // declaration de class principale
public:
    shape(float a , float b  ){  //constructeur parametres

        hauteur = a ;
        largeur = b ;  // initialisation des variables
    }
};
class rectangle : public shape  // classe derivee de la classe principale shape
{
public:
    rectangle(float a, float b) : shape(a, b) {} //declaration de type de variables
     float area_rectangle(){    // fonction qui calcule l aire
        return (hauteur*largeur);
    }

};
class triangle: public shape
{
public:
    triangle(float a, float b) : shape(a, b) {}
    float area_triangle(){
        return (hauteur*largeur)/2;    // ici on a fait la meme chose que dans la sous classe rectangle
    }
};
int main() {
    rectangle Rectangle(2,3);
    triangle Triangle(2,3);      //declaration des deux variables de types rectangles et triangles
    cout << "l'aire du rectangle est : " << Rectangle.area_rectangle() << endl;   //6
    cout << "l'aire du triangle: " << Triangle.area_triangle() << endl;    //3
return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Programme 3 :
int choix;
int R ;
int I ;
int r1,im1;
int r2,im2;
class complex {  //declaration de la classe complexe
    public :
complex(){    //dans le constructeur j'ai donne le choi a l'utilisateur pour choisir l operation
        cout << "entrer la partie imaginaire du premier complexe"<<endl;
        cin >> im1 ;
        cout << "entrer la partie reele du premier complexe"<<endl;
        cin >> r1 ;
    cout << "complex 1: "  << r1<< "+ i * " << im1 << endl;
        cout << "entrer la partie imaginaire du deuxieme complexe"<<endl;
        cin >> im2 ;
        cout << "entrer la partie reele du deuxieme complexe"<<endl;
        cin >> r2 ;
        cout << "complex 2: "  << r2<< "+ i * " << im2 << endl;
        cout << "veuillez choisir une operation du menu suivant :"<<endl;
        string menu[4];   //Déclaration du menu sous forme de tableau
        menu[0] = "1. +" ;  //Remplissage de la première case
        menu[1] = "2. -";  //Remplissage de la deuxième case
        menu[2] = "3. * ";   //Remplissage de la troisième case
        menu[3] = "4. / ";   //Remplissage de la quatrième case
for(int i(0); i<4; ++i)
        {
            cout << menu[i] << endl;   //affichage de menu
        }
        cin >> choix ;
       }
    void operation()  // on dehors du constructeur et toujours dans la classe la creation de la fonction operation
     {
     if (choix == 1 ){
            R = r1+r2 ;
            I = im1+im2 ;   // si l utilisateur choisi 1 : la fonction calcule la somme des deux complexes
cout << "SOMME EST : " << R<< "+ i * " << I << endl;
     }
       else if (choix == 2){     // si l utilisateur choisi 2 : la fonction calcule la soustraction des deux complexes
           R = r1-r2 ;
           I = im1-im2 ;
cout << "SOUSTRACTION EST : " << R<< "+ i * " << I << endl;
}
        else if (choix == 3)      // si l utilisateur choisi 3 : la fonction calcule le produit des deux complexes
        {   R = r1*r2 - im1* im2 ;
            I = r1*im2+im1*r2 ;
            cout << "PRODUIT EST : " << R<< "+ i * " << I << endl;
        }
else if (choix == 4)
       { R = r1*r2+im1*im2 / r1^2+im2^2;        //  si l utilisateur choisi 4 : la fonction calcule la division  des deux complexes
           cout << "LA DIVISION EST : " << R<< "+ i * " << I << endl;
        }
else {
    cout << "choisir une valeur entre 1 et 4 "  << endl;
    }
    }

};
int main(){
    complex c1 ;   //creation de l objet
    c1.operation();   // appel de la fonction
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// programme 4 :

class MERE {
    public :
    void display()
    {
        cout<< "HELLO MERE !" <<endl;
    }
};
class FILLE : public MERE {   // classe file herite de la class mere la fonction diplay
    public :
    void display(){
        cout<< "HELLO FILLE !" <<endl;       // la classe fille affiche le message hello fille
    }
};
int main (){
   FILLE f1 ;
    f1.display();
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 // programme 5 :
class ANIMAL {      //classe principal animal
    public :
    string nom= "chaimae";                         //intialisation de variable nom
    string nom1;             // la variable dont je vais stoquer la nouvelle valeur dans la fonction set
    int age ;
    int age1;           // meme chose pour l age
    void set_value(){
        cout << " entrer nouveau nom et age :" <<endl ;
        cin >> nom1 ;
        cin >> age1 ;   // lutilisateur qui choisi les nouvelles valeures que va modifier set_value()
        nom  = nom1 ;
        age =age1 ;                       // dans set value la modification des valeurs de l age et dauphin

 }

};
class ZEBRA : public ANIMAL { // sous-classe zebra herite declass principal animal
public:

    ZEBRA(){
        string origine =" tanger" ;                                 // nouvelle information sur l origine

    set_value();
       cout << "LE NOM Du zebra : " << nom1<< " et l age du zebra est " << age1 << "et l origine zebra est: " << origine << endl;
    }                     // dans cette classe on herite la fonction set value et on ajoute nouvelle info sur l origine


};
class DAUPHIN : public ANIMAL {            // sous-classe dauphin herite declass principal animal
public:
    DAUPHIN(){
        string origine =" larache" ;             // dans  zebra on fait la meme chose que dans dauphin
        set_value();
        cout << "LE NOM Du dauphin : " << nom1<< " et l age du dauphinest " << age1 << "et l origine dauphin est: " << origine << endl;    }


};

int main (){
    ZEBRA zebra ;
    DAUPHIN dauphin ;

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// PROGRAMME 6 :
#include <iostream>
#include <string>
using namespace std;
class Personne{   // class principale
private:
string nom ;
string prenom;
string datedenaissance;
public:
Personne(string n,string p,string d  ):nom{n},prenom{p},datedenaissance{d}{         // declaration du constructeur avec ses parametres n,p,d

}
 virtual void afficher()            // la fonction virtuelle qui affiche les atricuts initialise dans le constructeur
 {
     cout<<"FIRSTNAME : "<<nom<<endl<<"LAST NAME: "<<prenom<<endl<<"BIRTHDAY: "<<datedenaissance<<endl;
 }
};
class Employe : Personne         // sous classe employee qui herite la fonction virtuelle de la classe persone
{
    private:
   string salaire;
    public:
    Employe(string n,string p,string d,string s):Personne(n,p,d){
        salaire = s;
    }
  void afficher(){
        Personne::afficher();         // deuxieme sous classe qui herite cette fois de la sous clase employee qui elle meme herite de  classe principale personne
         cout<<"SALARY : "<< salaire <<endl;          // affichage du nouvel attribut salaire
    }
};
class Chef : Employe{        // 3eme sous classe qui herite cette fois de la sous clase chef  qui elle meme herite de sous-classe employee  qui herite de la classe principale personne
    private :
    string service ;
    public:
    Chef(string n,string p ,string d ,string s ,string ser):Employe(n,p,d,s){
       service=ser;

    }
  void  afficher(){
Employe::afficher();

cout<<"SERVICE : "<< service <<endl; // affichage du nouvel attribut service

    }
};
class Directeur : Chef{
private:
     string societe;   // variable par defaut privee
     public:
     Directeur(string n,string p ,string d ,string s ,string ser,string soc):Chef(n,p,d,s,ser){
         societe=soc;
     }
   void  afficher(){
         Chef::afficher();                    //  la sous  classe  directeur herite la fonction afficher de la sous classe chef
         cout<<"SOCIETY : "<< societe <<endl;
     }
};
int main(){
    Directeur dir ("chaimae","aboulouafa","02/08/2000" ,"10000 DH","DEVELOPEMENT","NEAR.YOU"); // creation d'objet de la derniere sous classe dir qui va herite  toutes les atributs et  methodes des sous classes qui precedent
    dir.afficher(); // appel de la fonction afficher
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// programme 7 :
#include<iostream>
#include<cmath>
using namespace std;
class vecteur3d{

        float x;
        float y;
        float z;
        public:
        vecteur3d(float a=0,float b=0,float c=0){      //on initialise toutes les valeurs a 0
            x=a;
            y=b;
            z=c;

        }
        void afficher(){                               // on affiche le vecteur
            cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
        }

        vecteur3d somme (const vecteur3d & v){             //calcule la somme
            vecteur3d w;

        w.x=x+v.x;
        w.y=y+v.y;
        w.z=z+v.z;
        return w;                                        //retourner vecteur3d(x+x.v,y+v.y,z+v.z)
        }
        float produit(const vecteur3d & v ){            // icic je calcule par la fonction produisle produit scalaire de deux vecteurs
            return x*v.x+y*v.y+z*v.z;
        }
        bool coincid(const vecteur3d & v){             //tester si les deux vecteurs ont les memes composantes
            return (x==v.x && y==v.y && z==v.z);
        }
    float norme() {
        return sqrt(x*x + y*y + z*z);                  //resulat: la norme du vecteur
    }


        vecteur3d normax(vecteur3d v){               //resulat: le vecteur qui la plus grande norme: par valeur
            if (this->norme() > v.norme() )
                return *this;

            return v;
        }
        vecteur3d * normax(vecteur3d * v){        //resulat: le vecteur qui la plus grande norme: par pointeur
            if (this->norme() > v->norme())
                return this;

            return v;
        }
        vecteur3d & normaxRE(vecteur3d &v){         //resulat: le vecteur qui la plus grande norme: par referance
            if (this->norme() > v.norme())
            return  *this;

            return v;

        }

};
int main (){


    vecteur3d v1(1,6,5);
    cout<<"le vecteur 1 est:"<<endl;
    v1.afficher();
    vecteur3d v2(1,7,9);
    cout<<"le vecteur 2 est:"<<endl;
    v2.afficher();

    cout<<endl;
    cout<<"la somme des vecteurs est :"<<endl;
    (v1.somme(v2)).afficher();
    cout<<"le produit de deux vecteurs est :"<<endl;
    v1.produit(v2);
    cout<<endl;

    cout<<"la norme du vecteur est :"<<endl;
    v1.norme();
    cout<<endl;
    if (v1.coincid(v2))
    cout<<"les 2 vecteurs ont memes composantes"<<endl;
    else
    cout<<"les 2 vecteurs ont memes composantes"<<endl;
    cout<<endl;
    cout<<"le resultat est renvoye par valeur"<<endl;
    (v1.normax(v2)).afficher();
    cout<<endl;
    cout<<"le resultat est renvoye par adresse"<<endl;
    v1.normax(&v2)->afficher();
    cout<<endl;
    cout<<"le resultat est renvoye par referance"<<endl;
    v1.normax(v2).afficher();




//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // programme 9
#include <iostream>

using namespace std  ;
 
class Test {
    
    public:
        static int count ; // on cree une variable public statique
    Test(){};
    void call(){
        count=count+1; // implementation de la valeur count
       
    }
    
};
int Test::count =0;
int main() {
    Test t;
    t.call();
    t.call();t.call();t.call();
    t.call();t.call();t.call();t.call();t.call(); //9 la valeur s'implemente a chaque fois on appelle la fonction
    
    
     cout << "la valeur du count est  c:" <<t.count<< endl;

    return 0;
}
