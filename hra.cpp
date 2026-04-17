#include <iostream>
#include <vector>
using namespace std;

void Druid(int &h, int &dmg, int &res, string name2, string zbran) {
    cout << "Jste druid, vas dmg je 15, resistance je 10, zivoty je 20." << endl;
   name2 = "Druid";
    dmg = +15;
    res = +10;
    h = +20;
    zbran = "kosa";
  
}
void Mage(int &h, int &dmg, int &res, string name2, string zbran) {
    cout << "Jste mage, vas dmg je 30, resistance je 5, zivoty je -10." << endl;
    name2 = "Mage";
    dmg = +30;
    res = 5;
    h = -10;
    zbran = "staff";
  
}
void Monk(int &h, int &dmg, int &res, string name2, string zbran) {
    cout << "Jste monk, vas dmg je 20, resistance je 10, zivoty je 15." << endl;
    name2 = "Monk";
    zbran = "fist";
    dmg = +20;
    res = +10;
    h = +15;
   
}
void Barbarian(int &h, int &dmg, int &res, string name2, string zbran) {
    cout << "Jste barbarian, vas dmg je 20, resistance je 15, zivoty je 50." << endl;
    name2 = "Barbarian";
    zbran = "axe";
    dmg = +20;
    res = +15;
    h = +50;
   
}
void Artificer(int &h, int &dmg, int &res, string name2, string zbran) {
    cout << "Jste artificer, vas dmg je 10, resistance je 20, zivoty je 10." << endl;
    name2 = "Artificer";
    zbran = "gloves";
    dmg = +10;
    res = +20;
    h = +10;
  
}
void Ninja(int &h, int &dmg, int &res, string name2, string zbran) {
    cout << "Jste ninja, vas dmg je 70, resistance je 10, zivoty je 90." << endl;
    name2 = "Ninja";
    zbran = "katana";
    dmg = +70;
    res = +10;
    h = +90;
  
}
void lide(int &h, int &dmg, int &res, string race) {
    cout << "Jste clovek, vas dmg je 35, resistance je 5, zivoty je -5." << endl;
    race = "Lide";
    dmg = +35;
    res = +5;
    h = -5;
  
}
void Elf(int &h, int &dmg, int &res, string race) {
    cout << "Jste elf, vas dmg je 20, resistance je 5, zivoty je 80." << endl;
    race = "Elf";
    dmg = +20;
    res = +5;
    h = +80;
  
}
void Dwarf(int &h, int &dmg, int &res, string race) {
    cout << "Jste Dwarf, vas dmg je 70, resistance je 5, zivoty je 120." << endl;
    race = "Dwarf";
    dmg = +70;
    res = +5;
    h = +120;
  
}
void Orc(int &h, int &dmg, int &res, string race) {
    cout << "Jste Orc, vas dmg je 15, resistance je 15, zivoty je 140." << endl;
    race = "Orc";
    dmg = +15;
    res = +15;
    h = +140;
  
}
void Dragonborn(int &h, int &dmg, int &res, string race) {
    cout << "Jste Dragonborn, vas dmg je 10, resistance je 25, zivoty je 110." << endl;
    race = "Dragonborn";
    dmg = +10;
    res = +25;
    h = +110;
  
}
void kocko_holka(int &h, int &dmg, int &res, string race) {
    cout << "Jste kocko holka, vas dmg je 15, resistance je 5, zivoty je 90." << endl;
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
int level;
int xp;

string name2;
string zbran;
string name;
string race;
int role;
  cout << "--- PROBUZENI ---" << endl;
    cout << "Otevres oci. Hlava te třeští a vubec netusis, kde jsi." << endl;
    cout << "Kolem tebe je jen tma a citis chladny kamen." << endl;
    cout << "\nNeznamy hlas: 'Konecne jsi vzhuru... Pamatujes si aspon sve jmeno?'" << endl;
    
    cout << "Zadej sve jmeno: ";
    cin >> name;

    cout << "\n" << name << "... To zni povedome," << endl;
    cout << "ale tvoje minulost je zatim jenom mlha." << endl;

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
        Druid(h, dmg, res, name2, zbran);
         name2 = "Druid";
        break;
    case 2:
        Mage(h, dmg, res, name2, zbran);
        name2 = "Mage";
        break;
    case 3:
        Monk(h, dmg, res, name2, zbran);
        name2 = "Monk";
        break;
    case 4:
        Barbarian(h, dmg, res, name2, zbran);
        name2 = "Barbarian";
        break;
    case 5:
        Artificer(h, dmg, res, name2, zbran);
        name2 = "Artificer";
        break;
    case 6:
        Ninja(h, dmg, res, name2, zbran);
        name2 = "Ninja";
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
        race = "Lide";
        break;
    case 2:
        Elf(h, dmg, res, race);
        race = "Elfove";
        break;
    case 3:
        Dwarf(h, dmg, res, race);
        race = "Trpaslici";
        break;
    case 4:
        Orc(h, dmg, res, race);
        race = "Orkove";
        break;
    case 5:
        Dragonborn(h, dmg, res, race);
        race = "Dragonborn";
        break;
    case 6:
        kocko_holka(h, dmg, res, race);
        race = "Kocko Holka";
        break;
    default:
        cout << "Neplatna volba, zadejte cislo mezi 1 a 6." << endl;

}

cout << "Vase postava se jmenuje " << name << endl;
cout << "Rasa: " << rasa << endl;
cout << "Role: " << name2 << endl;
cout << "===Staty===" << endl;
cout << h << " zivoty" << endl;
cout << dmg << " dmg" << endl;
cout << res << " resistance" << endl;


    cout << "\n*Najednou se ti pred ocima mihne obraz: horici hrad a postava v cerne zbroji...*" << endl;
    cout << "Citis, ze mas dulezity ukol. Musis si vzpomenout, proc jsi tady." << endl;

    cout << "\n--- TVOJE CESTA ZACINA ---" << endl;
    cout << "Nekde na konci teto cesty na tebe ceka Oddound ." << endl;
    cout << "Az si vzpomenes na vse, co ti vzal, budes pripraven ho porazit." << endl;
    cout << "Hodne stesti, " << name << "!" << endl;

     cout << "\nVstanes a vydas se po uzke stezce." << endl;
    cout << "Na zemi najdes rezavy meč. Seberes ho a citis se o neco jisteji." << endl;
    
    cout << "\n*Najednou z krovi vyskoci Stinovy vlk!*" << endl;
    cout << "Co udelas? (1 = Utéct / 2 = Bojovat): ";
    int volba;
    cin >> volba;

    if (volba == 1) {
        cout << "Rozhodl ses utéct. Běžíš co nejrychleji, az vlk zmizi v dalce." << endl;
    } else if (volba == 2) {
        cout << "Rozhodl ses bojovat. Bojujes s vlkem a nakonec ho porazis, ale jsi zraneny." << endl;
        h = -10;
        cout << "Ztratil jsi 10 zivotu." << endl;
        cout << "Zivoty: " << h << endl;
        cout << "Pokračujes v ceste a doufas, ze se ti uz nic horsiho nestane." << endl;
    } else {
        cout << "Neplatná volba." << endl;
        return 0;
    }
 cout << "\nKonecne vidis v dali svetla." << endl;
    cout << "Prichazis k brane vesnice Kamenný Újezd." << endl;
    cout << "Straz u brany na tebe krici: 'Stuj! Kdo jsi a co tu chces takhle pozde?'" << endl;

    int odpoved;
    cout << "1. 'Nepamatuji si, kdo jsem. Probudil jsem se v lese a hledám pomoc.'" << endl; 
    cout << "2. 'To není tvoje věc. Uhni mi z cesty, nebo uvidíš'" << endl;
    cout << "3. 'sem jen poutník a hledám nocleh. Mám u sebe pár mincí.'" << endl;
    cin >> odpoved;

    if (odpoved == 1) {
        cout << "\nSTRAZ: 'Vypadas fakt blede. Jdi do hospody \"U Rudeho Draka\", tam te daji dohromady.'" << endl;
    } 
    else if (odpoved == 2) {
        cout << "\nSTRAZ: 'Takhle se mnou mluvit nebudes! Zmiz!'" << endl;
        cout << "*Obešel jsi hradby a nasel jsi diru v plote. Po chvili ses ocitl na namesti.*" << endl;
    } 
    else {
        cout << "\nSTRAZ: 'Poutnik s mincemi? To rad slysim. Nejlepsi pivo maji hned tamhle v hospode.'" << endl;
    }

    cout << "\n[Vstoupil jsi do hospody U Rudeho Draka. Je tu teplo a citis vuni jidla.]" << endl;
    cout << "U baru stoji stary hostinsky a utira sklenici. Kdyz te uvidi, strne..." << endl;
    
    cout << "\nHOSTINSKY: 'Ty... To neni mozne. Myslel jsem, ze jsi mrtvy!'" << endl;
    cout << "Hlava se ti zatoci. Prichazi dalsi silna vzpominka..." << endl;
    cout << "*Vidis tohoto muze, jak ti predava dopis pro krale. On te znal!*" << endl;

    cout << "\nHOSTINSKY: 'Pojd ke mne, " << name << ". Musime si promluvit o tom, co se stalo te noci, kdy se zjevil Oddound .'" << endl;

    if (odpoved == 1) {
        cout << "\nSTRAZ: 'Vypadas zmatene, clovece. Jdi do hospody, hostinsky ti snad poradi.'" << endl;
    } 
    else if (odpoved == 2) {
        cout << "\nSTRAZ: 'Takhle se mnou mluvit nebudes! Koukej zmizet!'" << endl;
        cout << "(Budes muset najit jinou cestu dovnitř...)" << endl;
    } 
    else {
        cout << "\nSTRAZ: 'Poutniku s mincemi v kapse? Takove tu vidime radi. Pokracuj.'" << endl;
    }







}