//
//  ImageOperation.h
//  BOBSchoolPayment
//
//  Created by fan hong on 2020/12/17.
//  Copyright © 2020 BYJK. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ImageOperation : UIView

/// 获取图片扩展名(严谨)
/// @param data 图片Data
+ (NSString *)contentTypeForImageData:(NSData *)data;

/// 获取图片的扩展名(不严谨)
/// @param url 图片URL
+ (NSString *)contentTypeForImageURL:(NSString *)url;

/// 自定义播放Gif图片(Path)
/// @param frame frame
/// @param gifImagePath Gif图片路径
- (id)initWithFrame:(CGRect)frame gifImagePath:(NSString *)gifImagePath;

/// 自定义播放Gif图片(Data)(本地+网络)
/// @param frame frame
/// @param gifImageData Gif图片Data
- (id)initWithFrame:(CGRect)frame gifImageData:(NSData *)gifImageData;

/// 自定义播放Gif图片(Name)
/// @param frame frame
/// @param gifImageName Gif图片Name
- (id)initWithFrame:(CGRect)frame gifImageName:(NSString *)gifImageName;
@end
