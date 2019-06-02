/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIKBScreenTraits;

@interface UIKeyboardKeyplaneTransformationContext : NSObject {

	BOOL _usesScriptSwitch;
	NSString* _currentKeyplaneName;
	UIKBScreenTraits* _screenTraits;

}

@property (nonatomic,retain) NSString * currentKeyplaneName;               //@synthesize currentKeyplaneName=_currentKeyplaneName - In the implementation block
@property (nonatomic,retain) UIKBScreenTraits * screenTraits;              //@synthesize screenTraits=_screenTraits - In the implementation block
@property (assign,nonatomic) BOOL usesScriptSwitch;                        //@synthesize usesScriptSwitch=_usesScriptSwitch - In the implementation block
-(void)setScreenTraits:(UIKBScreenTraits *)arg1 ;
-(void)setCurrentKeyplaneName:(NSString *)arg1 ;
-(void)setUsesScriptSwitch:(BOOL)arg1 ;
-(NSString *)currentKeyplaneName;
-(UIKBScreenTraits *)screenTraits;
-(BOOL)usesScriptSwitch;
@end

