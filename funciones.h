void print_tablero(char (*tablero)[3], char player_one, char player_two);
int verificar(char c,char (*tab)[3],int x, int y);
int generar_random(void);
int validate_position (char (*tablero)[3], int x, int y);
int validate_number (int n);
void ingresar_tablero(char (*tablero)[3],char *players, int x, int y, int turno);
int is_win(char (*tablero)[3], char player_one, char player_two);