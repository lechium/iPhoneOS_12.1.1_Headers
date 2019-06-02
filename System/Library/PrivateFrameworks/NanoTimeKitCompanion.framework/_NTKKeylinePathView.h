/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKColoringView.h>
#import <libobjc.A.dylib/NTKKeylineView.h>

@class NTKKeylineTouchable, UIBezierPath, NSString, UIColor;

@interface _NTKKeylinePathView : NTKColoringView <NTKKeylineView> {

	UIBezierPath* _path;
	NTKKeylineTouchable* touchable;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) BOOL usesLegibility; 
@property (nonatomic,retain) UIColor * overrideColor; 
@property (nonatomic,readonly) UIColor * contentColor; 
@property (nonatomic,retain) NTKKeylineTouchable * touchable; 
-(void)setTouchable:(NTKKeylineTouchable *)arg1 ;
-(NTKKeylineTouchable *)touchable;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithPath:(id)arg1 ;
@end
