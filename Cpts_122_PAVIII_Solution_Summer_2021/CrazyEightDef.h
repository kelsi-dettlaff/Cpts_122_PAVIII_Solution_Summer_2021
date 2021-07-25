#include<SFML/Graphics.hpp>
#include<iostream>

#define WINDOW_WIDTH 1024
#define WINDOW_HEIGHT 768

//def face marco
#define FACE_HEARTS 0
#define FACE_DIAMONDS 1
#define FACE_CLUBS 2
#define FACE_SPADES 3

typedef enum
{
    hide,
    show,
    drop
    
}CE_CardShowState;

typedef enum
{
	Phase_Init,
	Phase_In_Menu,
	Phase_FirstRound,
	Phase_SecondRound
	
}CE_Phase; 