/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSData;

@interface NPKPassSyncStateItem : NSObject <NSSecureCoding> {

	NSString* _passTypeIdentifier;
	NSString* _serialNumber;
	NSNumber* _sequenceCounter;
	NSData* _manifestHash;

}

@property (nonatomic,retain) NSString * passTypeIdentifier;              //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,retain) NSString * serialNumber;                    //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,retain) NSNumber * sequenceCounter;                 //@synthesize sequenceCounter=_sequenceCounter - In the implementation block
@property (nonatomic,retain) NSData * manifestHash;                      //@synthesize manifestHash=_manifestHash - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)uniqueID;
-(void)setManifestHash:(NSData *)arg1 ;
-(NSNumber *)sequenceCounter;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(void)setSequenceCounter:(NSNumber *)arg1 ;
-(id)initWithPass:(id)arg1 ;
-(NSString *)passTypeIdentifier;
-(NSData *)manifestHash;
-(NSString *)serialNumber;
-(void)setSerialNumber:(NSString *)arg1 ;
-(id)initWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 sequenceCounter:(id)arg3 manifestHash:(id)arg4 ;
-(id)initWithProtoSyncStateItem:(id)arg1 ;
-(id)protoSyncStateItem;
-(BOOL)isEqualToPassSyncStateItem:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

