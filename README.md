# SnakeGame1
# SnakeGame

## Descrierea proiectului

SnakeGame este un proiect care implementează, în limbajul C++, clasicul joc Snake. Proiectul este structurat pe mai multe clase și tipuri de date, fiecare responsabilă de o componentă specifică a jocului: șarpele, mărul, tabla de joc, motorul jocului și afișarea grafică.

## Regulile jocului Snake

Jocul Snake se joacă pe o tablă de dimensiuni fixe. Jucătorul controlează un șarpe care se mișcă continuu pe tablă, în una din cele patru direcții: sus, jos, stânga sau dreapta. Scopul jocului este ca șarpele să mănânce mere care apar pe tablă, iar de fiecare dată când mănâncă un măr, lungimea șarpelui crește cu un segment. Jocul se termină dacă șarpele se ciocnește de marginea tablei sau de propriul corp.

## Tipurile de date noi declarate

- **Point** — reprezintă o coordonată pe tablă, definită prin doi întregi, `x` și `y`. Este folosit pentru a marca poziția oricărui element din joc (segmentele șarpelui, mărul, etc.).

- **Apple** — reprezintă mărul din joc. Are o poziție (`Point`) pe tablă și poate fi mâncat de șarpe.

- **Direction** — reprezintă direcția de mișcare a șarpelui. Poate avea una din valorile: `Top`, `Left`, `Right`, `Bottom`.

- **Snake** — reprezintă șarpele jucătorului. Este format dintr-un șir de segmente (puncte pe tablă) și poate fi mișcat într-o direcție sau poate mânca un măr, crescând în lungime.

- **Board** — reprezintă tabla de joc, definită prin lățime și înălțime.

- **GameEngine** — reprezintă motorul jocului. Coordonează interacțiunea dintre șarpe, măr și tabla de joc, și controlează rularea jocului.

- **Painter** — este responsabil de partea de afișare grafică a jocului: desenarea imaginilor și a textului pe ecran.