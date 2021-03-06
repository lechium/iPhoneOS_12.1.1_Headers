/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HMDAudioStreamPacketTime : NSObject <NSCopying> {

	unsigned char _packetTime;

}

@property (assign,nonatomic) unsigned char packetTime;              //@synthesize packetTime=_packetTime - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setPacketTime:(unsigned char)arg1 ;
-(unsigned char)packetTime;
-(id)initWithPacketTime:(unsigned char)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

