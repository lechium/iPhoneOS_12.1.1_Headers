/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface BCSParsingServiceConnection : NSObject {

	NSXPCConnection* _parsingServiceConnection;

}

@property (nonatomic,retain) NSXPCConnection * parsingServiceConnection;              //@synthesize parsingServiceConnection=_parsingServiceConnection - In the implementation block
-(NSXPCConnection *)parsingServiceConnection;
-(void)parseQRCodeString:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)parseQRCodeMetadata:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)parseQRCodeFeature:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)setParsingServiceConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
@end

