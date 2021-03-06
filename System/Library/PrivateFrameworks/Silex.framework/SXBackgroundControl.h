/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSMutableDictionary;

@interface SXBackgroundControl : UIControl {

	NSMutableDictionary* _backgroundColors;

}

@property (nonatomic,retain) NSMutableDictionary * backgroundColors;              //@synthesize backgroundColors=_backgroundColors - In the implementation block
-(NSMutableDictionary *)backgroundColors;
-(id)seperatedControlStatesForControlState:(unsigned long long)arg1 ;
-(void)setBackgroundColors:(NSMutableDictionary *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)updateBackgroundColor;
@end

