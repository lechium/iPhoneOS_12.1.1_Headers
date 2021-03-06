/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEODaemon;

@interface GEOServer : NSObject {

	GEODaemon* _daemon;

}

@property (assign,nonatomic,__weak) GEODaemon * daemon;              //@synthesize daemon=_daemon - In the implementation block
+(BOOL)canHandleIncomingMessage:(id)arg1 ;
+(BOOL)shouldStartImmediately;
+(Class)peerClass;
+(BOOL)usesModernRequestReply;
+(Class)requestClassForMethod:(id)arg1 ;
+(id)identifier;
-(void)peerDidConnect:(id)arg1 ;
-(void)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2 ;
-(void)peerDidDisconnect:(id)arg1 ;
-(void)setDaemon:(GEODaemon *)arg1 ;
-(GEODaemon *)daemon;
-(id)description;
-(void)handleRequest:(id)arg1 ;
@end

