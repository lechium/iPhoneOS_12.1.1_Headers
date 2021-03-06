/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor, UIImage;

@interface STSegmentItem : NSObject {

	NSString* _titleText;
	NSString* _detailText;
	UIColor* _titleColor;
	UIImage* _detailImage;

}

@property (nonatomic,copy,readonly) NSString * titleText;               //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * detailText;              //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,readonly) UIColor * titleColor;                    //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,readonly) UIImage * detailImage;                   //@synthesize detailImage=_detailImage - In the implementation block
-(NSString *)titleText;
-(UIImage *)detailImage;
-(id)initWithTitleText:(id)arg1 detailText:(id)arg2 titleColor:(id)arg3 detailImage:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(UIColor *)titleColor;
-(NSString *)detailText;
@end

