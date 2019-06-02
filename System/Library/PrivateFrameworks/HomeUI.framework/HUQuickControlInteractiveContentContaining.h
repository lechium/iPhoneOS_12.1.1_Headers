/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HUQuickControlInteractiveContentContaining <NSObject>
@property (assign,nonatomic,__weak) id<HUQuickControlContentHosting> quickControlHost; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (nonatomic,retain) id<HULayoutAnchorProviding> preferredFrameLayoutGuide; 
@optional
-(BOOL)shouldShowContentForReachabilityState:(BOOL)arg1;

@required
-(id<HULayoutAnchorProviding>)preferredFrameLayoutGuide;
-(void)setPreferredFrameLayoutGuide:(id)arg1;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
-(void)setQuickControlHost:(id)arg1;
-(id<HUQuickControlContentHosting>)quickControlHost;
-(void)setUserInteractionEnabled:(BOOL)arg1;
-(BOOL)isUserInteractionEnabled;

@end

