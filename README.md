# M480BSP_IAP_lite
 M480BSP_IAP_lite


update @ 2023/12/26

1. simple boot , app project

- boot project : jump to app project , address : 0x10 000

- app project : boot from address 0x10 000 , header store in 0x3F 000 ( ONE page = 4K bytes )

2. need to programming ICP CONFIG : APROM with IAP

![image](https://github.com/released/M480BSP_IAP_lite/blob/main/ICP_config_aprom_with_iap.jpg)
	
	
3. below is app project : KEIL LINKER setting ( load app.sct file ) 

![image](https://github.com/released/M480BSP_IAP_lite/blob/main/app_KEIL_Linker.jpg)
	
4. below is app project map file , 

- app code address : 0x10 000

- header file address : 0x3F 000

![image](https://github.com/released/M480BSP_IAP_lite/blob/main/map_app.jpg)


5. below is app project : sct file and programming boot code , app code (app.bin , header.bin) by ICP tool (multi-binary)

![image](https://github.com/released/M480BSP_IAP_lite/blob/main/sct_by_icp.jpg)


6. below is log capture ,

- boot code log message 

- app code log message (print header result)

![image](https://github.com/released/M480BSP_IAP_lite/blob/main/log.jpg)


