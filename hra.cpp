#include <iostream>
#include <vector>
using namespace std;

void Druid(int &h2, int &dmg2, int &res2, string name2, string zbran) {
    cout << "Jste druid, vas dmg je 15, resistance je 10, zivoty je 20." << endl;
   name2 = "Druid";
    dmg2 = +15;
    res2 = +10;
    h2 = +20;
    zbran = "kosa";
  
}
void Mage(int &h2, int &dmg2, int &res2, string name2, string zbran) {
    cout << "Jste mage, vas dmg je 30, resistance je 5, zivoty je -10." << endl;
    name2 = "Mage";
    dmg2 = +30;
    res2 = 5;
    h2 = -10;
    zbran = "staff";
  
}
void Monk(int &h2, int &dmg2, int &res2, string name2, string zbran) {
    cout << "Jste monk, vas dmg je 20, resistance je 10, zivoty je 15." << endl;
    name2 = "Monk";
    zbran = "fist";
    dmg2 = +20;
    res2 = +10;
    h2 = +15;
   
}
void Barbarian(int &h2, int &dmg2, int &res2, string name2, string zbran) {
    cout << "Jste barbarian, vas dmg je 20, resistance je 15, zivoty je 50." << endl;
    name2 = "Barbarian";
    zbran = "axe";
    dmg2 = +20;
    res2 = +15;
    h2 = +50;
   
}
void Artificer(int &h2, int &dmg2, int &res2, string name2, string zbran) {
    cout << "Jste artificer, vas dmg je 10, resistance je 20, zivoty je 10." << endl;
    name2 = "Artificer";
    zbran = "gloves";
    dmg2 = +10;
    res2 = +20;
    h2 = +10;
  
}
void Ninja(int &h2, int &dmg2, int &res2, string name2, string zbran) {
    cout << "Jste ninja, vas dmg je 70, resistance je 10, zivoty je 90." << endl;
    name2 = "Ninja";
    zbran = "katana";
    dmg2 = +70;
    res2 = +10;
    h2 = +90;
  
}
void lide(int &h3, int &dmg3, int &res3, string race) {
    cout << "Jste clovek, vas dmg je 35, resistance je 5, zivoty je -5." << endl;
    race = "Lide";
    dmg3 = +35;
    res3 = +5;
    h3 = -5;
  
}
void Elf(int &h3, int &dmg3, int &res3, string race) {
    cout << "Jste elf, vas dmg je 20, resistance je 5, zivoty je 80." << endl;
    race = "Elf";
    dmg3 = +20;
    res3 = +5;
    h3 = +80;
  
}
void Dwarf(int &h3, int &dmg3, int &res3, string race) {
    cout << "Jste Dwarf, vas dmg je 70, resistance je 5, zivoty je 120." << endl;
    race = "Dwarf";
    dmg3 = +70;
    res3 = +5;
    h3 = +120;
  
}
void Orc(int &h3, int &dmg3, int &res3, string race) {
    cout << "Jste Orc, vas dmg je 15, resistance je 15, zivoty je 140." << endl;
    race = "Orc";
    dmg3 = +15;
    res3 = +15;
    h3 = +140;
  
}
void Dragonborn(int &h3, int &dmg3, int &res3, string race) {
    cout << "Jste Dragonborn, vas dmg je 10, resistance je 25, zivoty je 110." << endl;
    race = "Dragonborn";
    dmg3 = +10;
    res3 = +25;
    h3 = +110;
  
}
void kocko_holka(int &h3, int &dmg3, int &res3, string race) {
    cout << "Jste kocko holka, vas dmg je 15, resistance je 5, zivoty je 90." << endl;
    race = "Kocko Holka";
    dmg3 = +15;
    res3 = +5;
    h3 = +90;
}
void pridat(int &xp, int &level, int &limit, int body) {
    xp += body;
    if (xp >= limit) {
        level += 1;
        xp -= limit;
        limit += 20;
    }
}
void vylecit(int &h, int lektvar, int hmax) {
    h += lektvar;
    if(h > hmax) {
        h = hmax;
    }
}
int main() {
int dmg = 0;
int dmg2, dmg3;
int res = 0;
int res2, res3;
int h = 0;
int h2, h3;
int rasa;
int level = 1;
int xp = 0;
int limit = 100;
int body;


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
h = h2 + h3;
dmg = dmg2 + dmg3;
res = res2 + res3;

cout << "Vase postava se jmenuje " << name << endl;
cout << "Rasa: " << rasa << endl;
cout << "Role: " << name2 << endl;
cout << "===Staty===" << endl;
cout << h << " zivoty" << endl;
int hmax = h;
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

        cout << "\nHOSTINSKY: 'Byl jsi jednim z nejlepsich bojovniku krale. Oddound se objevil a porazil te v boji. Myslel jsem, ze jsi mrtvy...'" << endl;
        cout << "\nHOSTINSKY: 'Musis si vzpomenout, co se stalo a proc jsi tady. Je to dulezite pro tvoji cestu.'" << endl;
        cout << "\nHOSTINSKY: 'Kdyz si vzpomenes, co ti vzal, budes mit sanci porazit Oddound a zachranit krale.'" << endl;
        cout << "\nHOSTINSKY: 'Zacni hledat stopy a vzpominky. Vsechny informace, ktere najdes, ti pomohou v boji proti Oddoundovi.'" << endl;

        cout << "\n[Hostinsky ti dal dopis pro krale. Je to tvoje prvni stopa.]" << endl;
        cout << "Co udelas? (1 = Prohledat dopis / 2 = Ignorovat dopis): ";
        int volba_dopisu;
        cin >> volba_dopisu;

        if (volba_dopisu == 1) {
            cout << "\n[Dopis obsahuje informace o Oddoundovi a jeho plánech.]" << endl;
        } else if (volba_dopisu == 2) {
            cout << "\n[Ignorujes dopis a pokracujes ve svem hledani.]" << endl;
        } else {
            cout << "Neplatná volba." << endl;
            return 0;
    }
cout << "\nHOSTINSKY: 'zde je par veci co te muze pomoct na tve ceste.'" << endl;
cout << "\n1. 'Vezmi tato zbran. Je to" << zbran << ", neni to tva zbran co jsi pouzil proti Oddoundovi, je to ale aspon neco.'" << endl;
cout << "2. 'Tady je tento amulet. Je to amulet, ktery jsi my dal jako dar, tady chci abys to mel pomuze ti vic nez me'" << endl;
cout << "3. 'Tady je tento lektvar. Je to lektvar, ktery ti pomuze ziskat zpet tvoje zivoty a posilnit tvoje schopnosti.'" << endl;
cout << "[vypijes si lektvar a citis, jak se ti zivoty obnovuji a tvoje schopnosti posilují.]" << endl;
cout << "\nHOSTINSKY: 'Nezapomente, " << name << ", ze kazda z techto veci ti muze pomoci v boji proti Oddoundovi. Pouzij je moudre.'" << endl;

cout << "\n--- TVOJE CESTA POKRACUJE ---" << endl;
    cout << "Musis se vydat na cestu, abys nasel dalsi stopy a vzpominky." << endl;
    cout << "Hodne stesti, " << name << "!" << endl;
h = hmax;
cout << "\nVydas se na cestu a po chvili narazis na rozcestí. Cesta vlevo vede do temneho lesa, cesta vpravo vede k opuštěnému hradu." << endl;
    cout << "Kterou cestou se vydas? (1 = Les / 2 = Hrad): ";
    int volba_cesty;
    cin >> volba_cesty;

    if (volba_cesty == 1) {
        cout << "\nVydal ses do temneho lesa. Po chvili narazis na skupinu banditu!" << endl;
        cout << "Co udelas? (1 = Utéct / 2 = Bojovat): ";
        int volba_banditu;
        cin >> volba_banditu;

        if (volba_banditu == 1) {
            cout << "Rozhodl ses utéct. Běžíš co nejrychleji, az banditi zmizi v dalce." << endl;
        } else if (volba_banditu == 2) {
            cout << "Rozhodl ses bojovat. Bojujes s bandity a nakonec je porazis, ale jsi zraneny." << endl;
            h = -20;
            cout << "Ztratil jsi 20 zivotu." << endl;
            cout << "Zivoty: " << h << endl;
            xp = +50;
            cout << "Ziskal jsi 50 zkusenostnich bodu." << endl;
            cout << "Pokračujes v ceste a doufas, ze se ti uz nic horsiho nestane." << endl;
        } else {
            cout << "Neplatná volba." << endl;
            return 0;
        }
    } else if (volba_cesty == 2) {
        cout << "\nVydal ses k opuštěnému hradu. Po chvili narazis na ducha strazce!" << endl;
        cout << "Co udelas? (1 = Utéct / 2 = Bojovat): ";
        int volba_ducha;
        cin >> volba_ducha;

        if (volba_ducha == 1) {
            cout << "Rozhodl ses utéct. Běžíš co nejrychleji, az duch zmizi v dalce." << endl;
        } else if (volba_ducha == 2) {
            cout << "Rozhodl ses bojovat. Bojujes s duchem a nakonec ho porazis, ale jsi zraneny." << endl;
            h = -30;
            cout << "Ztratil jsi 30 zivotu." << endl;
            cout << "Zivoty: " << h << endl;
            xp = +80;
            cout << "Ziskal jsi 80 zkusenostnich bodu." << endl;
            
        } else {
            cout << "Neplatná volba." << endl;
            return 0;
        }
    } else {
        cout << "Neplatná volba." << endl;
        return 0;
    }
}