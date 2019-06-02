/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UINamedLayerImage.h>

@class UIImage, NSString;

@interface _UIStackedImageSingleNamedLayerImage : NSObject <UINamedLayerImage> {

	UIImage* _imageObj;

}

@property (nonatomic,retain) UIImage * imageObj;                    //@synthesize imageObj=_imageObj - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) int blendMode; 
@property (assign,nonatomic) BOOL fixedFrame; 
-(NSString *)name;
-(CGRect)frame;
-(double)opacity;
-(UIImage *)imageObj;
-(int)blendMode;
-(void)setImageObj:(UIImage *)arg1 ;
@end
