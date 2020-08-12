//
//  NotificationNameHeader.h
//  MLPrefixHeaderModule
//
//  Created by 王雪剑 on 2020/2/3.
//  Copyright © 2020 com.zkml. All rights reserved.
//

#ifndef NotificationNameHeader_h
#define NotificationNameHeader_h

//公务自驾-地图界面返回后通知
#define kNotificationGongWuDriveringFromMapBack @"kNotificationGongWuDriveringFromMapBack"
//个人出行-当前的详细位置
#define kNotificationPersonTravelCurrentLocation @"kNotificationPersonTravelCurrentLocation"
//个人出行-用车（市内）
#define kNotificationPersonTravelCarApplyInCity @"kNotificationPersonTravelCarApplyInCity"
//个人出行-用车（跨城）
#define kNotificationPersonTravelCarApplyOutCity @"kNotificationPersonTravelCarApplyOutCity"
//个人出行-接送机（接机）
#define kNotificationPersonTravelFlightReceive @"kNotificationPersonTravelFlightReceive"
//个人出行-接送机（送机）
#define kNotificationPersonTravelFlightSend @"kNotificationPersonTravelFlightSend"
//个人出行-接送站（接站）
#define kNotificationPersonTravelTrainReceive @"kNotificationPersonTravelTrainReceive"
//个人出行-接送站（送站）
#define kNotificationPersonTravelTrainSend @"kNotificationPersonTravelTrainSend"


//登录相关的通知
#define kNotificationLoginSuccess  @"NotificationLoginSuccess"
//登录驾驶员相关的通知
#define kNotificationDriverLoginSuccess  @"NotificationDriverLoginSuccess"
//忘记密码倒计时
#define kCountDownForForgetPassword @"CountDownForForgetPassword"
//同一用户切换不同平台的通知
#define kNotificationChangeRoleOrgan @"kNotificationChangeRoleOrgan"
#define kNotificationResetBanner @"kNotificationResetBanner"
#define kNotificationDriverChangeRoleOrgan @"kNotificationDriverChangeRoleOrgan"
#define kChangeRoleOrgan @"kChangeRoleOrgan"
#define kLoginMessage @"kLoginMessage"
//头像更新
#define kNotificationRefreshPersonHeadPhoto @"kNotificationRefreshPersonHeadPhoto"
//退出登录
#define kNotificationLogout @"kNotificationLogout"
//转订单成功后发送通知订单列表刷新
#define kLeaseDispatchOrderRefresh @"kLeaseDispatchOrderRefresh"
//集中调度成功后发送通知订单列表刷新
#define kGongwuCenterDispatchOrderRefresh @"kgongwuCenterDispatchOrderRefresh"


//交车审核-用户操作成功
#define kNotificationGongWuOrderSuccess @"kNotificationGongWuOrderSuccess"
//交车审核-租赁操作成功
#define kNotificationRentOrderSuccess @"kNotificationRentOrderSuccess"
//交车审核-用户补单操作
#define kNotificationGongWuBudanSuccess @"kNotificationGongWuBudanSuccess"
//交车审核-租赁补单操作
#define kNotificationRentBudanSuccess @"kNotificationRentBudanSuccess"

//对司机评价成功后
#define kNotificationEvaluateSuccess @"kNotificationEvaluateSuccess"
//对车辆评价成功后
#define kNotificationEvaluateCarSuccess @"kNotificationEvaluateCarSuccess"
//加入单位审核刷新
#define kNotificationCheckJoinDepartmentRefresh @"checkJoinDepartment"
//新版通勤班车刷新
#define kNotificationNewRegularBusRefresh @"NewRegularBusRefresh"
//新版通勤班车刷新
#define kNotificationNewRegularBusRefreshTwo @"NewRegularBusRefreshTwo"

//新版通勤班车获取常用数据
#define kNotificationNewRegularBusData @"NewRegularBusData"

//公务我的订单刷新
#define kNotificationNewGovMyOrderRefresh @"kNotificationNewGovMyOrderRefresh"
//租赁我的订单刷新
#define kNotificationNewRentMyOrderRefresh @"kNotificationNewRentMyOrderRefresh"


//公务出行-选择路线通知
#define kNotificationChooseRouteLine @"notificationChooseRouteLine"
//维保竞价报价后刷新订单列表
#define kNotificationRefreshCompetitivePriceList @"notificationRefreshCompetitivePriceList"
//身份认证成功后刷新认证状态
#define kNotificationRefreshIdentifyStatus @"kNotificationRefreshIdentifyStatus"
//驾驶证认证成功后刷新认证状态
#define kNotificationRefreshDriverIdentifyStatus @"kNotificationRefreshDriverIdentifyStatus"
//刷脸/指纹认证后刷新安全设置状态
#define kNotificationRefreshSafeSettingStatus @"kNotificationRefreshSafeSettingStatus"

//考勤
#define YFAttendanceMonthlyTitleChangeNotification @"YFAttendanceMonthlyTitleChangeNotification"
//个人自驾订单状态改变
#define kNotificationRefreshSelfDrivingStatus @"kNotificationRefreshselfDrivingStatus"

//司机任务录入加油信息弹框
#define kNotificationInputOilOrderMessage @"kNotificationInputOilOrderMessage"
#define kNotificationRentInputOilOrderMessage @"kNotificationRentInputOilOrderMessage"

//调拨是否显示红色圆圈
#define kNotificationRedCircleStatus @"notificationRedCircleStatus"


#define kNotificationtest @"kNotificationRedCircleStatus"

#endif /* NotificationNameHeader_h */
