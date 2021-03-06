/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AMPCoreUI.framework/AMPCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSString;

@interface AMPOnboardingFeature : NSObject {

	UIImage* _image;
	NSString* _titleText;
	NSString* _descriptionText;

}

@property (nonatomic,readonly) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) NSString * titleText;                    //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,readonly) NSString * descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
-(NSString *)titleText;
-(NSString *)descriptionText;
-(id)initWithImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 ;
-(UIImage *)image;
@end

