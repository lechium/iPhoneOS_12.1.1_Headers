/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CoreFoundation/NSOutputStream.h>

@class NSData;

@interface BRCChecksummingOutputStream : NSOutputStream {

	CC_SHA1state_st _ctx;
	unsigned char _sig[21];
	BOOL _isOpen;

}

@property (nonatomic,readonly) NSData * signature; 
+(id)checksummingOutputStreamWithTag:(unsigned char)arg1 ;
-(id)initWithTag:(unsigned char)arg1 ;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(NSData *)signature;
-(unsigned long long)streamStatus;
-(BOOL)hasSpaceAvailable;
-(void)open;
-(void)close;
@end

