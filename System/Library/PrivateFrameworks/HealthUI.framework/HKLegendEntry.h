/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor, UIImage;

@interface HKLegendEntry : NSObject {

	NSString* _title;
	UIColor* _dotColor;
	UIColor* _innerDotColor;
	UIColor* _labelColor;
	UIImage* _icon;

}

@property (nonatomic,copy) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIColor * dotColor;                   //@synthesize dotColor=_dotColor - In the implementation block
@property (nonatomic,retain) UIColor * innerDotColor;              //@synthesize innerDotColor=_innerDotColor - In the implementation block
@property (nonatomic,retain) UIColor * labelColor;                 //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,retain) UIImage * icon;                       //@synthesize icon=_icon - In the implementation block
+(id)legendEntryWithTitle:(id)arg1 dotColor:(id)arg2 innerDotColor:(id)arg3 ;
+(id)legendEntryWithTitle:(id)arg1 labelColor:(id)arg2 ;
+(id)legendEntryWithTitle:(id)arg1 icon:(id)arg2 ;
-(void)setLabelColor:(UIColor *)arg1 ;
-(void)setDotColor:(UIColor *)arg1 ;
-(id)initWithTitle:(id)arg1 dotColor:(id)arg2 innerDotColor:(id)arg3 labelColor:(id)arg4 icon:(id)arg5 ;
-(UIColor *)dotColor;
-(void)setInnerDotColor:(UIColor *)arg1 ;
-(UIColor *)innerDotColor;
-(UIColor *)labelColor;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
@end

