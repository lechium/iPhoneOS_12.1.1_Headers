/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _UIStatusBarRegion, NSArray, UIView;


@protocol _UIStatusBarRegionLayout <NSObject>
@property (assign,nonatomic,__weak) _UIStatusBarRegion * region; 
@property (nonatomic,copy) NSArray * displayItems; 
@property (nonatomic,readonly) BOOL fitsAllItems; 
@property (nonatomic,readonly) UIView * containerView; 
@optional
-(UIView *)containerView;
-(BOOL)mayFitDisplayItems:(id)arg1;

@required
-(void)invalidate;
-(void)setRegion:(id)arg1;
-(_UIStatusBarRegion *)region;
-(NSArray *)displayItems;
-(void)setDisplayItems:(id)arg1;
-(BOOL)fitsAllItems;

@end
