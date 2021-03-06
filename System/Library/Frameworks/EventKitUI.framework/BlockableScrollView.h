/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIScrollView.h>

@protocol BlockableScrollViewDelegate;
@class NSObject;

@interface BlockableScrollView : UIScrollView {

	BOOL _isResizing;
	NSObject*<BlockableScrollViewDelegate> _blockableDelegate;

}

@property (assign,nonatomic,__weak) NSObject*<BlockableScrollViewDelegate> blockableDelegate;              //@synthesize blockableDelegate=_blockableDelegate - In the implementation block
@property (assign,nonatomic) BOOL isResizing;                                                              //@synthesize isResizing=_isResizing - In the implementation block
-(void)setIsResizing:(BOOL)arg1 ;
-(NSObject*<BlockableScrollViewDelegate>)blockableDelegate;
-(void)setBlockableDelegate:(NSObject*<BlockableScrollViewDelegate>)arg1 ;
-(BOOL)isResizing;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
@end

