#include <windows.h>
#include <iostream>
int main() {
    // Play WAV file
    PlaySound(TEXT("cat.wav"), NULL, SND_FILENAME | SND_ASYNC);
    
    // Keep the program running until the osund has finished playing
    Sleep(3000);

     // Adjusting volume (example: set to 50%)
    // This sets the volume for all sounds played via waveOut functions
    DWORD volume = 0x80008000; // Left and Right channels at 50%
    if (waveOutSetVolume(NULL, volume) != MMSYSERR_NOERROR) {
        std::cerr << "Error: Unable to set volume." << std::endl;
    }

    return 0;
}

