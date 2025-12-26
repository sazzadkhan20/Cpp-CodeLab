#include<iostream>

using namespace std;

int main()
{
   const char smile_face_char=1;
    //cout<<"Inter Smile Face char: ";
    //cin>>smile_face_char;
    //auto n
    cout<<"\n\n";
    while(1)
    {
        cout<<smile_face_char;
    }
}
/*#include <SFML/Graphics.hpp>

int main() {
    // Define the screen dimensions
    const int screenWidth = 800;
    const int screenHeight = 600;

    // Create the window
    sf::RenderWindow window(sf::VideoMode(screenWidth, screenHeight), "Smiling Faces");

    // Load the smiling face image
    sf::Texture smileyTexture;
    if (!smileyTexture.loadFromFile("smiley.png")) {
        // Replace "smiley.png" with the path to your smiling face image file.
        // Make sure the image file is in the same directory as the executable.
        return 1;
    }

    // Create a sprite to hold the smiling face image
    sf::Sprite smileySprite(smileyTexture);

    // Run the program as long as the window is open
    while (window.isOpen()) {
        // Check for window events
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Clear the screen
        window.clear();

        // Draw smiling faces across the screen
        for (int x = 0; x < screenWidth; x += smileyTexture.getSize().x) {
            for (int y = 0; y < screenHeight; y += smileyTexture.getSize().y) {
                smileySprite.setPosition(static_cast<float>(x), static_cast<float>(y));
                window.draw(smileySprite);
            }
        }

        // Display everything on the screen
        window.display();
    }

    return 0;
}*/

/*#include <iostream>
#include <cstdlib>
#include <windows.h> // For Windows, to clear the console

int main() {
    // Define the screen dimensions
    const int screenWidth = 80;
    const int screenHeight = 24;

    // Define the smiling face character
    const char smilingFace = 1;

    // Clear the console (for Windows)
    system("cls");

    // Print the smiling face character repeatedly to fill the screen
    for (int y = 0; y < screenHeight; y++) {
        for (int x = 0; x < screenWidth; x++) {
            std::cout << smilingFace;
        }
        std::cout << std::endl;
    }

    return 0;
}*/

