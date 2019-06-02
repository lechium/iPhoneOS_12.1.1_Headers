/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol UIScrollViewDelegate;
@class NSObject, NSMutableArray, UIScrollView, NSString;

@interface SUScrollViewScroller : NSObject <UIScrollViewDelegate> {

	NSObject*<UIScrollViewDelegate> _originalDelegate;
	NSMutableArray* _scrollRequests;
	UIScrollView* _scrollView;

}

@property (nonatomic,readonly) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)attachToScrollView:(id)arg1 ;
-(void)detachFromScrollView;
-(void)scrollFrameToVisible:(CGRect)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_addScrollRequest:(id)arg1 ;
-(void)_finishActiveScrollRequest;
-(void)_performNextScrollRequest;
-(void)_performContentOffsetRequest:(id)arg1 ;
-(void)_performScrollRectRequest:(id)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)forwardInvocation:(id)arg1 ;
@end
