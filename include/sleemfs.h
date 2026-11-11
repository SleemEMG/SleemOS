#pragma once

int findshit(const char* forfindingshit);
int createshit(const char* shitforcreating);
void listshit(int modesssst);
int writeshit();
void checkif();
void saveshit();
void loadshit();
int readshit();
int removeshit();
void hexshitdump();
struct filings {
    char namings[256];
    char doomscroll[256];
    int sizeofdoomscroll;
    bool ifusedornotused;
}; 
extern filings shit[15];
extern int nameofshit;
extern int forwritingshit;
extern int forremovingshit;
extern int forlistingshit;
extern const char forhexdumping2[];
extern int forhexdumpingshit;