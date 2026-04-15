#include <iostream>
#include <vector>
using namespace std;

void Druid(int &h, int &dmg, int &res, string name2) {
    cout << "Jste druid, vas dmg je 15, resistance je 10, zivoty je 20." << endl;
   name2 = "Druid";
    dmg = +15;
    res = +10;
    h = +20;
  
}
void Mage(int &h, int &dmg, int &res, string name2) {
    cout << "Jste mage, vas dmg je 30, resistance je 5, zivoty je -10." << endl;
    name2 = "Mage";
    dmg = +30;
    res = 5;
    h = -10;
  
}
void Monk(int &h, int &dmg, int &res, string name2) {
    cout << "Jste monk, vas dmg je 20, resistance je 10, zivoty je 15." << endl;
    name2 = "Monk";
    dmg = +20;
    res = +10;
    h = +15;
   
}
void Barbarian(int &h, int &dmg, int &res, string name2) {
    cout << "Jste barbarian, vas dmg je 20, resistance je 15, zivoty je 50." << endl;
    name2 = "Barbarian";
    dmg = +20;
    res = +15;
    h = +50;
   
}
void Artificer(int &h, int &dmg, int &res, string name2) {
    cout << "Jste artificer, vas dmg je 10, resistance je 20, zivoty je 10." << endl;
    name2 = "Artificer";
    dmg = +10;
    res = +20;
    h = +10;
  
}
void Ninja(int &h, int &dmg, int &res, string name2) {
    cout << "Jste ninja, mate 90 zdravi, 70 poskozeni a 10 odolnosti." << endl;
    name2 = "Ninja";
    dmg = +70;
    res = +10;
    h = +90;
  
}
void lide(int &h, int &dmg, int &res, string race) {
    cout << "Jste clovek, mate 100 zdravi, 50 poskozeni a 20 odolnosti." << endl;
    race = "Lide";
    dmg = +35;
    res = +5;
    h = -5;
  
}
void Elf(int &h, int &dmg, int &res, string race) {
    cout << "Jste elf, mate 120 zdravi, 60 poskozeni a 25 odolnosti." << endl;
    race = "Elf";
    dmg = +20;
    res = +5;
    h = +80;
  
}
void Dwarf(int &h, int &dmg, int &res, string race) {
    cout << "Jste Dwarf, mate 150 zdravi, 70 poskozeni a 30 odolnosti." << endl;
    race = "Dwarf";
    dmg = +70;
    res = +5;
    h = +120;
  
}
void Orc(int &h, int &dmg, int &res, string race) {
    cout << "Jste Orc, mate 140 zdravi, 80 poskozeni a 25 odolnosti." << endl;
    race = "Orc";
    dmg = +15;
    res = +15;
    h = +140;
  
}
void Dragonborn(int &h, int &dmg, int &res, string race) {
    cout << "Jste Dragonborn, mate 130 zdravi, 90 poskozeni a 35 odolnosti." << endl;
    race = "Dragonborn";
    dmg = +10;
    res = +25;
    h = +110;
  
}
void kocko_holka(int &h, int &dmg, int &res, string race) {
    cout << "Jste kocko holka, mate 110 zdravi, 60 poskozeni a 20 odolnosti." << endl;
    race = "Kocko Holka";
    dmg = +15;
    res = +5;
    h = +90;
  
}
int main() {
int dmg = 0;
int res = 0;
int h = 0;
int rasa;
string name2;
string name;
string race;
int role;
    cout << "Zadejte jmeno sve postavy: ";
    cin >> name;

cout << "Vyberte si roli postavy: " << endl;
    cout << "1. Druid" << endl;
    cout << "2. Mage" << endl;
    cout << "3. Monk" << endl;
    cout << "4. Barbarian" << endl;
    cout << "5. Artificer" << endl;
    cout << "6. Ninja" << endl;
    cin >> role;
switch(role){
    case 1:
        Druid(h, dmg, res, name2);
        break;
    case 2:
        Mage(h, dmg, res, name2);
        break;
    case 3:
        Monk(h, dmg, res, name2);
        break;
    case 4:
        Barbarian(h, dmg, res, name2);
        break;
    case 5:
        Artificer(h, dmg, res, name2);
        break;
    case 6:
        Ninja(h, dmg, res, name2);
        break;
    default:
        cout << "Neplatna volba, zadejte cislo mezi 1 a 6." << endl;
    }
cout << "Zadejte rasu své postavy: " << endl;
    cout << "1. Lide" << endl;
    cout << "2. Elfove" << endl;
    cout << "3. Trpaslici" << endl;
    cout << "4. Orkove" << endl;
    cout << "5. Dragonborn" << endl;
    cout << "6. Kocko Holka" << endl;
    cin >> rasa;
switch(rasa){
    case 1:
        lide(h, dmg, res, race);
        break;
    case 2:
        Elf(h, dmg, res, race);
        break;
    case 3:
        Dwarf(h, dmg, res, race);
        break;
    case 4:
        Orc(h, dmg, res, race);
        break;
    case 5:
        Dragonborn(h, dmg, res, race);
        break;
    case 6:
        kocko_holka(h, dmg, res, race);
        break;
    default:
        cout << "Neplatna volba, zadejte cislo mezi 1 a 6." << endl;

}
cout << "Vase postava se jmenuje " << name << " a je " << name2 << " a " << race << "." << endl;
cout << "Ma " << h << " zdravi, " << dmg << " poskozeni a " << res << " odolnosti." << endl;

    return 0;

}