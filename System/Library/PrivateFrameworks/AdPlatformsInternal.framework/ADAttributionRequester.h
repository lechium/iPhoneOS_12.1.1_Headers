/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsInternal.framework/AdPlatformsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ADAttribution_XPC.h>

@class NSXPCConnection, NSNumber, NSString;

@interface ADAttributionRequester : NSObject <ADAttribution_XPC> {

	NSXPCConnection* _connection;
	NSNumber* _transactionToken;
	NSString* _bundleID;

}

@property (nonatomic,retain) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSNumber * transactionToken;               //@synthesize transactionToken=_transactionToken - In the implementation block
-(NSNumber *)transactionToken;
-(void)setTransactionToken:(NSNumber *)arg1 ;
-(void)requestAttributionDetailsWithBlock:(/*^block*/id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(id)initWithConnection:(id)arg1 bundleID:(id)arg2 transactionID:(id)arg3 ;
-(int)appRunState;
-(void)overrideAttributionData:(id)arg1 ;
-(BOOL)productionClient;
-(void)makeAttributionRequestWithObject:(id)arg1 andHandler:(/*^block*/id)arg2 ;
-(void)attachSearchMetadataTo:(id)arg1 forAdamID:(id)arg2 ;
-(void)attachDownloadDataTo:(id)arg1 forAdamID:(id)arg2 ;
-(void)requestAttributionDetails:(/*^block*/id)arg1 ;
-(void)beginAttributionRequest:(id)arg1 xpcToken:(unsigned)arg2 reason:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setStocksAdEnabled:(BOOL)arg1 ;
-(NSString *)bundleID;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

