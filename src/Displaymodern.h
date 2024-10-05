/**
 * @file Displaymodern.h
 *
 * @brief "Modern" display template
 */

/**
 * @brief Send data to display
 */
void printScreen()
{
    if ((machineState == kBelowSetPoint || machineState == kPidNormal || machineState == kBrewDetectionTrailing) ||
        ((machineState == kBrew || machineState == kShotTimerAfterBrew) && SHOTTIMER == 0) || // shottimer == 0, also show brew
        machineState == kCoolDown || ((machineState == kInit || machineState == kColdStart) && HEATINGLOGO == 0) ||
        ((machineState == kPidOffline) && OFFLINEGLOGO == 0))
    {
        tft.drawCentreString("YO it should work", 0, 10, 2);
        /*u8g2.clearBuffer();
        //u8g2.setFont(u8g2_font_profont11_tf);
        u8g2.setFont(u8g2_font_smart_patrol_nbp_tf);
        u8g2.setCursor(0,0);
        u8g2.drawStr(0, 0, "TEMP");
        u8g2.setFont(u8g2_font_logisoso18_tf);
        u8g2.setFontPosTop();
        u8g2.setCursor(0, 16);
        u8g2.print(temperature, 1);
        u8g2.print(" ");
        u8g2.print((char)176);
        u8g2.print("C");
        u8g2.drawFrame(0, 43, 128, 21);
        u8g2.sendBuffer();*/
    }
}