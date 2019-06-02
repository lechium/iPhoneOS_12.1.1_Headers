/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFAtomTextViewAtomLayout <NSObject>
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) long long selectionStyle; 
@property (nonatomic,readonly) CGRect selectionBounds; 
@property (nonatomic,readonly) long long baseWritingDirection; 
@optional
-(long long)baseWritingDirection;

@required
-(void)setEnabled:(BOOL)arg1;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
-(long long)selectionStyle;
-(void)setSelectionStyle:(long long)arg1;
-(void)setSelectionStyle:(long long)arg1 animated:(BOOL)arg2;
-(CGRect)selectionBounds;

@end

