/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNNavigationServiceReconnectorDelegate;
@class MNRoutePlanningDetails;

@interface MNNavigationServiceReconnector : NSObject {

	id<MNNavigationServiceReconnectorDelegate> _delegate;
	MNRoutePlanningDetails* _routePlanningDetails;

}

@property (assign,nonatomic,__weak) id<MNNavigationServiceReconnectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)reconnect;
-(BOOL)_isValidRoutePlanningDetails:(id)arg1 ;
-(id)initWithRoutePlanningDetails:(id)arg1 ;
-(BOOL)isReconnecting;
-(void)finishReconnecting;
-(void)setDelegate:(id<MNNavigationServiceReconnectorDelegate>)arg1 ;
-(id<MNNavigationServiceReconnectorDelegate>)delegate;
@end

