/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CXCallSource.h>

@class NSString, NSURL, NSXPCConnection, NSSet;

@interface CXXPCCallSource : CXCallSource {

	BOOL _hasVoIPBackgroundMode;
	NSString* _bundleIdentifier;
	NSURL* _bundleURL;
	NSXPCConnection* _connection;
	NSString* _applicationIdentifier;
	NSSet* _capabilities;

}

@property (nonatomic,retain) NSXPCConnection * connection;                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * bundleURL;                           //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,copy) NSSet * capabilities;                          //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) BOOL hasVoIPBackgroundMode;                  //@synthesize hasVoIPBackgroundMode=_hasVoIPBackgroundMode - In the implementation block
-(BOOL)isConnected;
-(void)setBundleURL:(NSURL *)arg1 ;
-(id)vendorProtocolDelegate;
-(BOOL)isPermittedToUsePublicAPI;
-(BOOL)isPermittedToUsePrivateAPI;
-(BOOL)hasVoIPBackgroundMode;
-(void)setHasVoIPBackgroundMode:(BOOL)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(NSSet *)capabilities;
-(void)setCapabilities:(NSSet *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)identifier;
-(NSString *)bundleIdentifier;
-(NSString *)applicationIdentifier;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSURL *)bundleURL;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(int)processIdentifier;
@end

