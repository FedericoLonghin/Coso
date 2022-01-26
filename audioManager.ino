
//detect audio peek and find out if it is music
void findForAudio()
{
    lastHeard=analogRead(AUDIO_PIN)?millis():lastHeard;
    if (millis() - lastHeard < TIME_BETWEEN_AUDIO)
    {
        isMusic = 1;
    }
    else
    {
        isMusic = 0;
    }


}