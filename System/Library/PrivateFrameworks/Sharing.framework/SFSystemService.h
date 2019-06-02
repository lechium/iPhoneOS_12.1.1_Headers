/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SFService, NSObject;

@interface SFSystemService : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	SFService* _sfService;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
-(void)_handleSessionStarted:(id)arg1 ;
-(void)_sfServiceStart;
-(void)_handleSessionEnded:(id)arg1 ;
-(void)_handleGetSystemInfoRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleProfilesGetForSession:(id)arg1 request:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_handleProfileInstallForSession:(id)arg1 request:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_handleProfileRemoveForSession:(id)arg1 request:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(id)description;
-(void)invalidate;
-(void)activate;
@end
