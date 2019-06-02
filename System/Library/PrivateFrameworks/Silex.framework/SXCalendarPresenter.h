/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EKEventEditViewDelegate.h>
#import <libobjc.A.dylib/SXCalendarPresenter.h>

@protocol SXCalendarPresenter <NSObject>
@required
-(void)presentCalendarEvent:(id)arg1;

@end


@protocol SXViewControllerPresenting;
@class EKEventStore, NSString;

@interface SXCalendarPresenter : NSObject <EKEventEditViewDelegate, SXCalendarPresenter> {

	id<SXViewControllerPresenting> _viewControllerPresenting;
	EKEventStore* _eventStore;

}

@property (nonatomic,readonly) id<SXViewControllerPresenting> viewControllerPresenting;              //@synthesize viewControllerPresenting=_viewControllerPresenting - In the implementation block
@property (nonatomic,readonly) EKEventStore * eventStore;                                            //@synthesize eventStore=_eventStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EKEventStore *)eventStore;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(id<SXViewControllerPresenting>)viewControllerPresenting;
-(void)presentCalendarEvent:(id)arg1 ;
-(id)initWithViewControllerPresenting:(id)arg1 eventStore:(id)arg2 ;
@end

