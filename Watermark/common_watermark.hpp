/*
	Watermark For Exile Mod	Script By AsReMix
	
	Filename : common_watermark.hpp

	remixasoom@gmail.com
*/
class AsReMix_RscPicture {
    shadow = 0;
    type = 0;
    style = 48;
    sizeEx = 0.023;
    font = "PuristaMedium";
    colorBackground[] = {};
    colorText[] = {};
    x = 0;
    y = 0;
    w = 0.2;
    h = 0.15;
    tooltipColorText[] = {1,1,1,1};
    tooltipColorBox[] = {1,1,1,1};
    tooltipColorShade[] = {0,0,0,0.65};
};

class watermark : AsReMix_RscPicture
 {
   idc = -1;
   text = "watermark\watermark.paa";
   x = 0.885 * safezoneW + safezoneX;
   y = 0.82 * safezoneH + safezoneY;
   w = 0.12 * safezoneW;
   h = 0.180 * safezoneH;
 };
