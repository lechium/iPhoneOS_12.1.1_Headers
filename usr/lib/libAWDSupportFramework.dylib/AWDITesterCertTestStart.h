/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDITesterCertTestStart : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _accessoryName;
	NSString* _accessoryType;
	NSString* _testName;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasTestName; 
@property (nonatomic,retain) NSString * testName;                       //@synthesize testName=_testName - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessoryName; 
@property (nonatomic,retain) NSString * accessoryName;                  //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessoryType; 
@property (nonatomic,retain) NSString * accessoryType;                  //@synthesize accessoryType=_accessoryType - In the implementation block
-(BOOL)hasTestName;
-(BOOL)hasAccessoryName;
-(BOOL)hasAccessoryType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setTestName:(NSString *)arg1 ;
-(NSString *)testName;
-(NSString *)accessoryName;
-(void)setAccessoryName:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(NSString *)accessoryType;
-(void)setAccessoryType:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

