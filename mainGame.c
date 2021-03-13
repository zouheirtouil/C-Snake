
#include "Snake_v2.c"


#if defined(PLATFORM_WEB)
    #include <emscripten/emscripten.h>
#endif



//---------------------------------------------------------------------------------------------
// 								Program main entry point
//---------------------------------------------------------------------------------------------
int main(void)
{   
    // Initialization (Note windowTitle is unused on Android)
    //---------------------------------------------------------
    InitWindow(screenWidth, screenHeight, "sample game: snake V2");
    InitAudioDevice();
    

    Sound intro = LoadSound("ressources/introTheme.mp3");
    SetTargetFPS(15);

	
	Texture2D background;
	Sound menuTheme = LoadSound("ressources/menuTheme.mp3");
    Sound mainTheme;
	Sound addFood = LoadSound("ressources/addFood.mp3");
	
	
	gameIntro(&intro);
	
	    
    gameMenu(&menuTheme);
	

	InitGame();
	Texture2D easyBackground = LoadTexture("ressources/easy.png");
	Rectangle SeasyBackground = {0, 0, easyBackground.width, easyBackground.height};
	
	Texture2D mediumBackground = LoadTexture("ressources/medium.png");
	Rectangle SmediumBackground = {0, 0, mediumBackground.width, mediumBackground.height};

	Texture2D hardBackground = LoadTexture("ressources/hardcore.png");
	Rectangle ShardBackground = {0, 0, hardBackground.width, hardBackground.height};

    
    
    
#if defined(PLATFORM_WEB)
    emscripten_set_main_loop(UpdateDrawFrame, 60, 1);
#else
    SetTargetFPS(60);
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update and Draw
        //----------------------------------------------------------------------------------
        UpdateGame(&addFood);
		if(dif==0){DrawGame(easyBackground,SeasyBackground);}
		if(dif==1){DrawGame(mediumBackground,SmediumBackground);}
		if(dif==2){DrawGame(hardBackground,ShardBackground);}
        //----------------------------------------------------------------------------------
    }
	
#endif
    // De-Initialization
    //--------------------------------------------------------------------------------------
    UnloadGame();         // Unload loaded data (textures, sounds, models...)
	UnloadTexture(background);
    UnloadSound(intro);
    UnloadSound(menuTheme);
    UnloadSound(mainTheme);
    UnloadSound(addFood);
    CloseAudioDevice();
    
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

