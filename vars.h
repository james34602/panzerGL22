/*
	panzer GL 2.2 - vars.h
*/

typedef struct {		//player struct
	double highest_x;
	double highest_y;
	double highest_z;
	double lowest_x;
	double lowest_y;
	double lowest_z;
	double vector_x;
	double vector_y;
	double vector_z;
	double origin_x;
	double origin_y;
	double origin_z;
	double distance;
	double height;
	long vertices;
	bool iscorpse;
	bool get;
}player_s;

typedef struct { // cvars (of course ;P)
	int cross;
	int esp;
	int	aimthru;
	int	aim;
	int	fov;
	int lambert;
	int	recoil;
	int target;
	int shoot;
	int wall;
	int smoke;
	int flash;
	int scope;
	int sky;
	int menu_x;
	int menu_y;
	int pronefix;
	int aimkey;
	float stand_h;
	float duck_h;
}cvar_s;

typedef struct { // for menu controlling
	int count;
	bool up;
	bool down;
	bool select;
	bool select_r;
	bool select_l;
	bool active;
}menu_s;

typedef struct {	// controlling keys, basicly for menu
	bool up;
	bool down;
	bool left;
	bool right;
	bool active;
}key_s;

typedef struct {	// storing custom offset infos
	float s;
	float d;
	char npart1[52];
	char npart2[52];
	char npart3[52];
	char npart4[52];
	char npart5[52];
	char name[256];
}offset_s;

typedef struct {	// custom vertex infos go here
	char name[52];
	int vert01;		// this should have been done in an array i know ;)
	int vert02;		// but i made it like this when i tested the shit...
	int vert03;
	int vert04;
	int vert05;
	int vert06;
	int vert07;
	int vert08;
	int vert09;
	int vert10;
	int vert11;	
	int vert12;
} team_s;

static GLint	vp[4];			// viewport info (2 and 3 holds screen resolution)
static GLdouble mm[16],pm[16];	// infos about different positions e.g. mouse
static HMODULE hOriginalDll = 0;

int	aimat=-1;			// turned -1, 0 and 1 to check if player is target
int	recoilnum=0;		// compares how much mouse is moved down by cvar.recoil
int oldtarget;			// hold the target selected when hack is turned off
int viewportcount=0;	// counts viewport calls
int t_count=0;			// for timer
int offsetcount=0;
int curoffset=0;
int player_height_min=0;
int player_vertex_min=0;
int player_vertex_max=0;

float roffset;	// active offset

bool t_get=false;	// timer
bool bFlash=false;	// flags . . . 
bool bSmoke=false;
bool bScope=false;
bool bWall=false;
bool bSky=false;
bool ch=false;
bool key_init=false;
bool key_check=false;
bool key_ften=false;
bool aimkeychanged=false;
bool hookactive=false;
bool FirstInit=false;
bool modelviewport=false;
bool enabledraw=false;		// when viewport is called 5th time its true
bool message=false;
bool customoffset=false;	// for menu
bool checktext=false;		// F11, check text
bool gotflashed=false;
bool cfgfail=false;			// true if config couldnt be find
bool mdlfail=false;			// true if model file couldnt be find

char filename[256]="";
char dllpath[256]="";
char dllfile[14]="\\opengl32.dll";
char offsetname[256]="";
char modelfile[52]="";

char modelpath[256]="";
char configpath[256]="";
