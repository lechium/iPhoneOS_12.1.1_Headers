/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class XBApplicationLaunchCompatibilityInfo, XBLaunchStateRequest, NSString;

@interface XBApplicationSnapshotGenerationContext : NSObject <BSDescriptionProviding> {

	XBApplicationLaunchCompatibilityInfo* _applicationCompatibilityInfo;
	XBLaunchStateRequest* _launchRequest;
	double _timeout;

}

@property (nonatomic,readonly) XBApplicationLaunchCompatibilityInfo * applicationCompatibilityInfo;              //@synthesize applicationCompatibilityInfo=_applicationCompatibilityInfo - In the implementation block
@property (nonatomic,copy,readonly) XBLaunchStateRequest * launchRequest;                                        //@synthesize launchRequest=_launchRequest - In the implementation block
@property (nonatomic,readonly) double timeout;                                                                   //@synthesize timeout=_timeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timeout;
-(XBLaunchStateRequest *)launchRequest;
-(XBApplicationLaunchCompatibilityInfo *)applicationCompatibilityInfo;
-(id)initWithApplicationCompatibilityInfo:(id)arg1 launchRequest:(id)arg2 timeout:(double)arg3 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(NSString *)description;
@end

