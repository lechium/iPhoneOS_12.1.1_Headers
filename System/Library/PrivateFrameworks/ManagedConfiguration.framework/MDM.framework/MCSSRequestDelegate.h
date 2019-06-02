/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSRequestDelegate.h>

@class SSRequest, NSTimer, NSString;

@interface MCSSRequestDelegate : NSObject <SSRequestDelegate> {

	SSRequest* _request;
	/*^block*/id _completionBlock;
	NSTimer* _timeoutTimer;

}

@property (nonatomic,retain,readonly) SSRequest * request;              //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(void)_timerDidFire:(id)arg1 ;
-(void)_startTimeout:(double)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)cancel;
-(SSRequest *)request;
-(id)initWithRequest:(id)arg1 ;
@end
