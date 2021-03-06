/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol WBSCyclerTestTarget;
@class NSXPCListener, WBSCyclerServiceProxy, NSString;

@interface WBSCyclerConnectionManager : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _xpcListener;
	WBSCyclerServiceProxy* _cyclerProxy;
	id<WBSCyclerTestTarget> _testTarget;

}

@property (nonatomic,readonly) id<WBSCyclerTestTarget> testTarget;              //@synthesize testTarget=_testTarget - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isCyclerEnabled;
-(id<WBSCyclerTestTarget>)testTarget;
-(id)initWithTestTarget:(id)arg1 ;
-(id)init;
-(void)connect;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

