#include "main.h"
struct PFC_VARIABLES PFC_Variables;
struct Allert_Portect Dyanmic_Portect;
// 申明變數
uint32_t Protect_12V, Protect_5V;
/*控制PWM 變數*/
uint16_t PWM_Duty;
uint16_t Str_PWM;
uint32_t Str_Freq;
uint32_t MAX_DUTY_Calculate;
uint32_t ARR_LAST_TIME_SAVE;
/*Flash 變數申明區*/

/*Flash 地址申明區*/
uint32_t Data_5V_Min_Addr;
uint32_t Data_5V_Max_Addr;
uint32_t Data_12V_Min_Addr;
uint32_t Data_12V_Max_Addr;
uint32_t Data_OTP_Addr;
uint32_t Data_OCP_Addr;
uint32_t Data_OVP_Addr;
uint16_t SPWM_OUT;
uint16_t PWM_Channel;
/*
 * 初始化變數變量
 * 請區分 所有結構體 為一組 以利於分辨
 *
 */
void Initail_Variable(void)
{
    // inital adc value of array adc
    for (int i = 0; i < 5; i++)
        PFC_Variables.adc_raw[i] = 0;
    // Inital Flash variable

    Protect_12V = 0, Protect_5V = 0;

    /*Flash 測試變數使用區*/

    /*Flash 宣告變數區*/

}
