//
//  GuidePage.h
//  BOBSchoolPayment
//
//  Created by fan hong on 2020/12/17.
//  Copyright © 2020 BYJK. All rights reserved.
//

#import <UIKit/UIKit.h>

#define BOOLFORKEY @"dhGuidePage"

/// <#Description#>
@interface GuidePage : UIView

//
@property (nonatomic, assign) BOOL isSlideInto;

/// 初始化图片引导页面
/// @param frame frame
/// @param imageNameArray 图片数组
/// @param pageControlIsHidden 是否隐藏pagecontrol
/// @param isHidden 是否隐藏跳过按钮
- (instancetype)initWithFrame:(CGRect)frame imageNameArray:(NSArray<NSString *> *)imageNameArray pageControlIsHidden:(BOOL)pageControlIsHidden buttonIsHidden:(BOOL)isHidden;


/// 初始化视频引导页面
/// @param frame frame
/// @param videoURL 视频地址
- (instancetype)initWithFrame:(CGRect)frame videoURL:(NSURL *)videoURL;
@end
