//
//  MaintainInterfaceHeader.h
//  NewRefactorEasyCar
//
//  Created by 王雪剑 on 2020/3/6.
//  Copyright © 2020 张凯翔. All rights reserved.
//

#ifndef MaintainInterfaceHeader_h
#define MaintainInterfaceHeader_h

//获取当前人员的维保角色
#define MAINTAIN_GET_Permission_RoleInfo_URL @"appGateway/repair/repair/mobile/permission/obtRepairRoleInfo"
//申请页面获取车辆列表、维保类型、送检方式
#define MAINTAIN_GET_Apply_ToAddApply_URL @"appGateway/repair/repair/mobile/apply/toAddApply"
//获取维保项目
#define MAINTAIN_GET_Apply_ObtOwnCategory_URL @"appGateway/repair/repair/mobile/apply/obtOwnCategory"
//获取维保公司列表
#define MAINTAIN_GET_Apply_ObtCooperationOrganList_URL @"appGateway/repair/repair/mobile/organ/obtCooperationOrganList"
//获取维保签批列表
#define MAINTAIN_GET_Auditor_PageCheck_URL @"appGateway/repair/repair/mobile/auditor/pageCheck"
//提交审核
#define MAINTAIN_Post_Auditor_DoCheck_URL @"appGateway/repair/repair/mobile/auditor/doCheck"
//提交签批
#define MAINTAIN_Post_Auditor_DoSign_URL @"appGateway/repair/repair/mobile/auditor/doSign"
//审核详情
#define MAINTAIN_GET_Apply_GetApplyInfo_URL @"appGateway/repair/repair/mobile/apply/getApplyInfo"
//撤单
#define MAINTAIN_GET_Apply_CancelApply_URL @"appGateway/repair/repair/mobile/apply/cancelApply"
//操作记录
#define MAINTAIN_GET_Apply_GetApplyLog_URL @"appGateway/repair/repair/mobile/apply/getApplyLog"
//获取费用
#define MAINTAIN_GET_Apply_ObtLastQuote_URL @"appGateway/repair/repair/mobile/apply/obtLastQuote"
//维保获取评价星级
#define MAINTAIN_GET_Eval_FindStarContent_URL @"appGateway/repair/repair/mobile/eval/findStarContent"
//维保获取评价星级对应内容
#define MAINTAIN_GET_Eval_GetApplyEvaluation_URL @"appGateway/repair/repair/mobile/eval/getApplyEvaluation"
//提交评价内容
#define MAINTAIN_GET_Eval_DoEvaluation_URL @"appGateway/repair/repair/mobile/eval/doEvaluation"
//验收
#define MAINTAIN_Post_Accept_DoAccept_URL @"appGateway/repair/repair/mobile/accept/doAccept"
//获取验收订单列表
#define MAINTAIN_Post_Accept_ObtAcceptList_URL @"appGateway/repair/repair/mobile/accept/obtAcceptList"
//验收详情
#define MAINTAIN_Post_Accept_ObtAcceptDetail_URL @"appGateway/repair/repair/mobile/accept/obtAcceptDetail"
//维保订单列表
#define MAINTAIN_GET_Apply_PageApply_URL @"appGateway/repair/repair/mobile/apply/pageApply"
//维保通过车辆id获取车辆信息
#define MAINTAIN_GET_Apply_ObtCarInfo_URL @"appGateway/repair/repair/mobile/apply/obtCarInfo"
//维保申请提交
#define MAINTAIN_POST_Apply_DoAddApply_URL @"appGateway/repair/repair/mobile/apply/doAddApply"
//维保补单申请提交
#define MAINTAIN_POST_ReApply_DoAddApply_URL @"appGateway/repair/repair/mobile/apply/doAddHistoryApply"
//维保修改订单提交
#define MAINTAIN_POST_Apply_DoUpdateApply_URL @"appGateway/repair/repair/mobile/apply/doUpdateApply"
//维保竞价列表
#define MAINTAIN_GET_Bid_ObtBidApplyList_URL @"appGateway/repair/repair/mobile/bid/obtBidApplyList"
//维保竞价获取报价单位列表
#define MAINTAIN_GET_Bid_ObtJoinBidList_URL @"appGateway/repair/repair/mobile/bid/obtJoinBidList"
//维保竞价报价
#define MAINTAIN_POST_Bid_DoBid_URL @"appGateway/repair/repair/mobile/bid/doBid"
//维保获取当前人员的待处理任务
#define MAINTAIN_GET_Permission_ObtTaskCount_URL @"appGateway/repair/repair/mobile/permission/obtTaskCount"
//获取知道维修厂
#define MAINTAIN_GET_Organ_ObtAppointOrganByAreaId_URL @"appGateway/repair/repair/mobile/organ/obtAppointOrganByAreaId"
//审核员修改订单提交
#define MAINTAIN_GET_Apply_UpdateRepairAndMaintainAndOrganName_URL @"appGateway/repair/repair/mobile/apply/updateRepairAndMaintainAndOrganName"

#endif /* MaintainInterfaceHeader_h */
