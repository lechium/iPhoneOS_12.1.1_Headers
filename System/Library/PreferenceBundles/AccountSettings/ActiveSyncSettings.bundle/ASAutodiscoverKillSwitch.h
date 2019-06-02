/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ActiveSyncSettings.bundle/ActiveSyncSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSURLSession, NSString;

@interface ASAutodiscoverKillSwitch : NSObject <NSURLSessionDelegate> {

	NSURLSession* _autoDV2RedirectSession;

}

@property (nonatomic,retain) NSURLSession * autoDV2RedirectSession;              //@synthesize autoDV2RedirectSession=_autoDV2RedirectSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setAutoDV2RedirectSession:(NSURLSession *)arg1 ;
-(NSURLSession *)autoDV2RedirectSession;
-(void)sendRequestForRedirectWithCompletionHandler:(/*^block*/id)arg1 ;
@end

