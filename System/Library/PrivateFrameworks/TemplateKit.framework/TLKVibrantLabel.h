/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UILabel.h>

@interface TLKVibrantLabel : UILabel {

	BOOL _enableVibrancy;
	unsigned long long _style;

}

@property (assign) BOOL enableVibrancy;                             //@synthesize enableVibrancy=_enableVibrancy - In the implementation block
@property (assign,nonatomic) unsigned long long style;              //@synthesize style=_style - In the implementation block
+(id)vibrantTextColorForStyle:(unsigned long long)arg1 ;
+(id)textColorForStyle:(unsigned long long)arg1 ;
-(void)updateWithFormattedText:(id)arg1 ;
-(void)setEnableVibrancy:(BOOL)arg1 ;
-(BOOL)enableVibrancy;
-(id)attributedStringForRichText:(id)arg1 ;
-(id)stringForFormattedText:(id)arg1 ;
-(BOOL)isVibrancyEnabled;
-(void)updateWithRichText:(id)arg1 ;
-(void)setVibrancyEnabled:(BOOL)arg1 ;
-(id)init;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(void)willMoveToSuperview:(id)arg1 ;
@end

