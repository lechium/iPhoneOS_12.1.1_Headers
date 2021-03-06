/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HFItem;


@protocol HUCellProtocol <NSObject>
@property (nonatomic,retain) HFItem * item; 
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@optional
-(id<HUResizableCellDelegate>)resizingDelegate;
-(void)setResizingDelegate:(id)arg1;

@required
-(void)updateUIWithAnimation:(BOOL)arg1;
-(void)setItem:(id)arg1;
-(HFItem *)item;

@end

