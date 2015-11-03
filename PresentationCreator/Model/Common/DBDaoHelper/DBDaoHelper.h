//
//  DBDaoHelper.h
//  PresentationCreator
//
//  Created by songyang on 15/10/11.
//  Copyright © 2015年 songyang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DBHelper.h"
#import "ProjectModel.h"
#import "DetailsModel.h"

@interface DBDaoHelper : NSObject
//创建数据库表
+(BOOL)createAllTable;
+(NSString *)selectTable;
//插入html代码
+(BOOL )insetIntoTemplateHtml:(NSString *)templateHtml;
//向summary表中插入我的名字，返回最大的主键值
+(NSString *)insertSummaryWithName:(NSString *)name;
//查询table数组内容
+(NSMutableArray *)selectTableArray;
//查询创作页面数组内容
+(NSString *)selectCreationPageString:(NSString *)templateId;
//插入TABLE_TEMPLATE的html代码
+(BOOL)insertHtmlToDetailsSummaryIdWith:(NSString *)summaryid TemplateId:(NSString *)templateid HtmlCode:(NSString *)htmlcode PageNumber:(NSString *)pagenumber;
// 根据summary id 查询 PPT_PRODUCT_DETAILS 表中对应的结果集
+(NSMutableArray *)selectDetailsDataBySummaryId:(NSString *)summaryId;

// 点预览时生成html代码，更新到对应的PPT_PRODUCT_SUMMARY表中的记录
+(BOOL)updateSummaryContentById:(NSString *)htmlCode :(NSString *)summaryId;
//向details表中插入我的summaryid和templateid，返回最大的主键值
+(NSString *)insertDetailsWithSummaryId:(NSString *)summaryid templateId:(NSString *)templateid;
//根据传过来的details表的detailsid修改html_code
+(BOOL)updateDetailsIdWith:(NSString *)detailsid htmlCode:(NSString *)htmlcode;
// 根据summary id 查询 summary表中html code
+(NSString *)queryHtmlCodeFromSummary:(NSString *)summaryId;
//删除
+(void)deleteDetailsWithsql:(NSString *)detailsId;
// 根据 summary id 查询最大的 page number
+(NSString *)getMaxPageNumber:(NSString *)summaryId;
// 根据summary id 修改最后一页的page number 为最大的page number
+(BOOL)updatePageNumberToMaxNumber:(NSString *)summaryId pageNumber:(NSString *)pagenumber;
// 根据summary id 删除 summary 表的记录
+(BOOL)deleteSummaryById:(NSString *)summaryId;
@end
