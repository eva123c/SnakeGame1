# SnakeGame

## Descrierea proiectului

SnakeGame este un proiect care implementează, în limbajul C++, clasicul joc Snake. Proiectul este structurat pe mai multe clase și tipuri de date, fiecare responsabilă de o componentă specifică a jocului: șarpele, mărul, tabla de joc, motorul jocului și afișarea grafică. Clasele de date sunt compilate într-o bibliotecă statică proprie (`libdata.a`), iar pentru salvarea și încărcarea stării jocului este folosită biblioteca externă [nlohmann/json](https://github.com/nlohmann/json).

## Regulile jocului Snake

Jocul Snake se joacă pe o tablă de dimensiuni fixe. Jucătorul controlează un șarpe care se mișcă continuu pe tablă, în una din cele patru direcții: sus, jos, stânga sau dreapta. Scopul jocului este ca șarpele să mănânce mere care apar pe tablă, iar de fiecare dată când mănâncă un măr, lungimea șarpelui crește cu un segment. Jocul se termină dacă șarpele se ciocnește de marginea tablei sau de propriul corp.

## Tipurile de date noi declarate

- **Point** — reprezintă o coordonată pe tablă, definită prin doi întregi, `x` și `y`.
- **Apple** — reprezintă mărul din joc, cu poziția lui pe tablă.
- **Direction** — reprezintă direcția de mișcare a șarpelui (`Top`, `Left`, `Right`, `Bottom`).
- **Snake** — reprezintă șarpele jucătorului, format dintr-un șir de segmente (`std::vector<Point>`).
- **Board** — reprezintă tabla de joc, definită prin lățime și înălțime.
- **GameEngine** — motorul jocului, care coordonează șarpele, mărul și tabla.
- **AbstractPainter / Painter** — interfața abstractă și implementarea concretă pentru desenarea jocului în consolă.

## Dependențe ale proiectului

- **Mediu de dezvoltare:** Visual Studio Code
- **Compilator:** MinGW G++ (instalat prin MSYS2, toolchain UCRT64)
- **Sistem de control al versiunilor:** Git
- **Bibliotecă externă:** [nlohmann/json](https://github.com/nlohmann/json) (header-only, fișierul `json.hpp` este inclus în proiect)
- **Sistem de construire:** GNU Make (instalat prin MSYS2)

## Construirea aplicației

Proiectul folosește un fișier `Makefile` pentru compilare. Pentru a construi aplicația, este necesar să rulați următoarele comenzi în directorul proiectului:

```bash
# curăță fișierele compilate anterior (opțional)
make clean

# compilează clasele de date într-o bibliotecă statică (libdata.a)
# și leagă aplicația finală (Snake.exe)
make
```

În urma compilării, va fi creat fișierul executabil `Snake.exe`, alături de biblioteca statică `libdata.a` și fișierele obiect (`.o`) corespunzătoare fiecărei clase.

Pentru a rula aplicația:

```bash
.\Snake.exe
```

## Testare

Testele unitare pentru clasele de date se găsesc în directorul `tests`. Pentru compilarea și rularea testelor, consultați secțiunea dedicată din `Makefile` (ținta `test`).