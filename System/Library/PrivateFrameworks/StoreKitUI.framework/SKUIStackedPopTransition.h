/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class SKUIStackedBar, NSString;

@interface SKUIStackedPopTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	double _split;
	SKUIStackedBar* _fromBar;
	SKUIStackedBar* _toBar;

}

@property (nonatomic,retain) SKUIStackedBar * fromBar;              //@synthesize fromBar=_fromBar - In the implementation block
@property (nonatomic,retain) SKUIStackedBar * toBar;                //@synthesize toBar=_toBar - In the implementation block
@property (assign,nonatomic) double split;                          //@synthesize split=_split - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)split;
-(void)setSplit:(double)arg1 ;
-(SKUIStackedBar *)fromBar;
-(void)setFromBar:(SKUIStackedBar *)arg1 ;
-(SKUIStackedBar *)toBar;
-(void)setToBar:(SKUIStackedBar *)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
@end

