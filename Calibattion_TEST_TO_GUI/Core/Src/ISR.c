#include "main.h"
void UART_TEST_SEND(void);
/*ISR call Back Handler*/
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
    if (htim == &htim10)
    {
        // ADC Scan
        //  Multi_ADC_Sample();
        HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
        // C# LOG獲得命令
        // Get_Command_From_C_shrap();

        // PWM_Duty_Freq_Change();
        PWM_Duty_Freq_Dual_Channel();
        // SPWM_Method();
        if (mointer_Enable == True)
            Display_message_on_gui();
    }
}

/**
 * @brief
 * 初始化PWM紀錄訊息
 */
void initail_PWM_info(void)
{
    /*計算初始化頻率*/
    uint32_t initail_Freq = (uint32_t)((SystemCoreClock) / ((TIM1->PSC + 1) * (TIM1->ARR)));
    mointer_Freq = initail_Freq / 1000;
    /*計算初始化DUTY*/
    mointer_Duty = (float)TIM1->CCR1 / TIM1->ARR;
}
