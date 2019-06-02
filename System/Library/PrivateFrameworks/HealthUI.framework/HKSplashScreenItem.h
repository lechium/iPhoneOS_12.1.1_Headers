/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface HKSplashScreenItem : NSObject {

	NSString* _title;
	NSString* _fullDescription;
	UIImage* _icon;

}

@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * fullDescription;              //@synthesize fullDescription=_fullDescription - In the implementation block
@property (nonatomic,retain) UIImage * icon;                          //@synthesize icon=_icon - In the implementation block
+(id)splashScreenItemWithTitle:(id)arg1 icon:(id)arg2 fullDescription:(id)arg3 ;
+(id)splashScreenItemWithDictionary:(id)arg1 ;
-(NSString *)fullDescription;
-(void)setFullDescription:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
@end

