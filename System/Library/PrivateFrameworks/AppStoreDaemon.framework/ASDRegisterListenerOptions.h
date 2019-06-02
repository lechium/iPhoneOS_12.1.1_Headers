/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSXPCConnection;

@interface ASDRegisterListenerOptions : NSObject <NSSecureCoding> {

	NSString* _clientID;
	NSXPCConnection* _endpoint;

}

@property (nonatomic,copy) NSString * clientID;                       //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,retain) NSXPCConnection * endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)clientID;
-(void)setEndpoint:(NSXPCConnection *)arg1 ;
-(void)setClientID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSXPCConnection *)endpoint;
@end

