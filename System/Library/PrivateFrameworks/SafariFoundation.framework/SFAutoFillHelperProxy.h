/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFAutoFillHelperProtocol.h>

@class NSXPCConnection, NSString;

@interface SFAutoFillHelperProxy : NSObject <SFAutoFillHelperProtocol> {

	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getAutomaticStrongPasswordForAppWithPasswordRules:(id)arg1 confirmPasswordRules:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
@end

