/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CKLTrafficLogMessageFragment : NSObject {

	unsigned long long _type;
	NSString* _uuid;
	long long _seqNum;
	NSString* _dataString;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) long long seqNum;                     //@synthesize seqNum=_seqNum - In the implementation block
@property (nonatomic,readonly) NSString * dataString;                //@synthesize dataString=_dataString - In the implementation block
-(id)initWithMessage:(id)arg1 ;
-(long long)seqNum;
-(NSString *)dataString;
-(id)description;
-(NSString *)uuid;
-(unsigned long long)type;
@end
