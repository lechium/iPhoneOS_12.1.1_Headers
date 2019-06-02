/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CUDashboardClient : NSObject {

	SCD_Union_CU20 _destAddr;
	unsigned _destLen;
	unsigned char _key[32];
	char _model[32];
	char _osBuild[32];
	int _sock;
	unsigned char _udid[20];
	NSString* _server;

}

@property (nonatomic,copy) NSString * server;              //@synthesize server=_server - In the implementation block
-(NSString *)server;
-(int)logf:(const char*)arg1 ;
-(int)_logCStr:(const char*)arg1 length:(unsigned long long)arg2 ;
-(int)_setupSocket;
-(int)logv:(const char*)arg1 args:(char*)arg2 ;
-(int)logJSON:(id)arg1 ;
-(void)setServer:(NSString *)arg1 ;
-(int)_activate;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(int)activate;
@end

