#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "protocol_handler.h"
#include "camera/camera.h"
#include "camera/camera_func.h"
#include "camera/camera_call_table.h"

void proc_camera (void)
{
    printf("카메라 프로토콜을 처리합니다!\n");
    
    int camera_func_number;
    printf("카메라 기능을 임의로 실행!\n");
    srand(time(NULL));
    camera_func_number= rand()%CAMERA_CALL_BUFFER_COUNT;
    printf("수신된 카메라 명령:%d\n",camera_func_number);
    camera_call_table[camera_func_number]();
}

void proc_dc_motor (void)
{
    printf("dc motor 프로토콜을 처리합니다!\n");
}

void proc_bldc_motor (void)
{
    printf("bldc motor 프로토콜을 처리합니다!\n");
}

void proc_pmsm_motor (void)
{
    printf("pmsm motor 프로토콜을 처리합니다!\n");
}

void proc_acim_motor (void)
{
    printf("acim motor 프로토콜을 처리합니다!\n");
}

void proc_power_led (void)
{
    printf("power led 프로토콜을 처리합니다!\n");
}

void proc_i2c (void)
{
    printf("i2c 프로토콜을 처리합니다!\n");
}

void proc_spi (void)
{
    printf("spi 프로토콜을 처리합니다!\n");
}

void proc_lidar (void)
{
    printf("lidar 프로토콜을 처리합니다!\n");
}

void proc_can (void)
{
    printf("can 프로토콜을 처리합니다!\n");
}

void proc_ecap (void)
{
    printf("ecap 프로토콜을 처리합니다!\n");
}
