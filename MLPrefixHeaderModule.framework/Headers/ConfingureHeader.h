//
//  ConfingureHeader.h
//  MLPrefixHeaderModule
//
//  Created by 王雪剑 on 2020/2/3.
//  Copyright © 2020 com.zkml. All rights reserved.
//

#ifndef ConfingureHeader_h
#define ConfingureHeader_h


//App的项目开关
typedef enum  {
    LYXProject,        //络易行项目
    ToGProject,        //ToG的项目
    ToBProject,        //ToB的项目
    GSProject,         //供水的项目
    BGProject,         //宝钢的项目
    TestProject        //ToG测试项目,拥有络易行项目的所有功能,【络易行项目不要打开此开关】
} AppProject;


#pragma mark 云南【项目配置】
//云南新版公务用车易地图的AK值
#define kBaiduMapAK  @"cmkzl8FnpwZz7euN7lqtWH9a1bLHttZW"
//云南新版公务用车易bundleId
#define kBundleID @"com.zkml.app.EasyCarYunNan"
//云南新版公务用车易极光推送的key
#define jpushKey @"eb5a34c6af04dfe8893052a6"
//云南百度统计key
#define baiduMjtKey   @"8ab4a9d266"
//微信支付
#define wxAppId   @"wx3a1dc8baa3b81dac"
//云南AppSource
#define AppSource @"LYX0YN440"
//项目属性
static AppProject appProject = ToGProject;


//是否是监督App
static BOOL isSuperviseApp = NO;
//是否是络宝pp
static BOOL isLuoBaoApp = NO;
//是否是驾驶员App
static BOOL isDriverApp = NO;

//【正式环境】
//#define HostName_PERSON @"http://person.http.luoex.xin:6969/" //个人平台
//#define HostName_PERSON_Domain @"http://person.http.luoex.xin:6969/" //微信分享域名
//#define HostName_APIGATEWAY @"http://app-gateway.luoex.cn:8088/" //Api网关
//#define EMChatAppKey @"1120190321168045#zkml-im" //环信聊天的Appkey

////【测试环境-内网】
//#define HostName_PERSON @"http://10.5.4.35:2401/" //个人平台
//#define HostName_PERSON_Domain @"http://10.5.4.35:2401/" //微信分享域名
//#define HostName_APIGATEWAY @"http://10.5.4.35:2403/" //Api网关
//#define EMChatAppKey @"1101190218211735#shytest" //环信聊天的Appkey

//【测试环境-外网】
#define HostName_PERSON @"http://117.71.53.199:59038/" //个人平台
#define HostName_PERSON_Domain @"http://117.71.53.199:59038/" //微信分享域名
#define HostName_APIGATEWAY @"http://117.71.53.199:59039/" //Api网关
#define EMChatAppKey @"1101190218211735#shytest" //环信聊天的Appkey


//年终总结
#define YEAR_END_REPORT_URL @"http://drive-report.wyc.http.luoex.xin:45680"
#define DRIVER_WORK_DATE_URL @"http://driver-duty.h5.luoex.xin:16888/"

#define BuglyAppId @"a4152f1c4e"
#define BuglyAppKey @"647ff30b-cec7-467f-8421-b49fee0e94f7"

#define FacePlusApiKey   @"5iZliSZGTV_SDcTKiwMRr3mkSd_ZA6Q8"
#define FacePlusApiSecret   @"hgXoTX4gphJv-rWWn6ZoH68ikoJx-25C"

//Udesk
#define UdeskAppId @"4a59f863dd20a197"
#define UdeskAppKey @"101e5413aff06a1d3794772818be01c6"
#define UdeskDomain @"zkmlkf.udesk.cn"
#define ROBOT_MODEL_KEY @"robot_key_easy_car"

#endif /* ConfingureHeader_h */

