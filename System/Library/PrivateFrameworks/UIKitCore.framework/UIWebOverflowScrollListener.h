/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIScrollViewDelegate.h>

@class UIWebOverflowScrollView, NSString;

@interface UIWebOverflowScrollListener : NSObject <UIScrollViewDelegate> {

	UIWebOverflowScrollView* _scrollView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(id)initWithScrollView:(id)arg1 ;
-(void)_didCompleteScrolling;
@end

