//
//  ShowViewController.h
//  PresentationCreator
//
//  Created by songyang on 15/9/29.
//  Copyright © 2015年 songyang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ShowViewController : UIViewController
@property (nonatomic, strong) NSString *showSummaryNameStr;//接收上一页传过来的summaryname就是title显示的名字
@property (nonatomic, strong) NSString *showTemplateIdStr;//接收上一页传过来的templateid
@property (nonatomic, strong) NSString *showSummaryIdStr;
@end
