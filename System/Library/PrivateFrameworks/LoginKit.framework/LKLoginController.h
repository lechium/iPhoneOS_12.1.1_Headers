/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LKLoginControllerProtocol.h>

@class NSXPCConnection;

@interface LKLoginController : NSObject <LKLoginControllerProtocol> {

	NSXPCConnection* _connection;
	/*^block*/id _completionHandler;

}

@property (retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(id)sharedController;
-(void)chooseUserWithIdentifier:(id)arg1 inClassWithID:(id)arg2 password:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)loginAppleID:(id)arg1 password:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)saveClassConfiguration:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)recentUsers;
-(id)init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)proxy;
@end

