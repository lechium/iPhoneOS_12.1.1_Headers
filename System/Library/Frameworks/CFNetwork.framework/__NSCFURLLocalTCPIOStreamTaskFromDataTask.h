/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSCFTCPIOStreamTask.h>
#import <libobjc.A.dylib/SessionConnectionDelegate.h>

@class NSString;

@interface __NSCFURLLocalTCPIOStreamTaskFromDataTask : __NSCFTCPIOStreamTask <SessionConnectionDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTask:(id)arg1 Connection:(shared_ptr<TCPIOConnection>*)arg2 disavow:(/*^block*/id)arg3 ;
@end

