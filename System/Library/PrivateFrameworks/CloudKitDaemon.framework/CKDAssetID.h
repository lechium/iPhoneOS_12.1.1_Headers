/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPRecordIdentifier, NSData, NSNumber;

@interface CKDAssetID : NSObject <NSCopying> {

	CKDPRecordIdentifier* _recordID;
	NSData* _fileSignature;
	NSData* _referenceSignature;
	NSNumber* _size;

}

@property (nonatomic,readonly) CKDPRecordIdentifier * recordID;              //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) NSData * fileSignature;                       //@synthesize fileSignature=_fileSignature - In the implementation block
@property (nonatomic,readonly) NSData * referenceSignature;                  //@synthesize referenceSignature=_referenceSignature - In the implementation block
@property (nonatomic,readonly) NSNumber * size;                              //@synthesize size=_size - In the implementation block
-(id)CKPropertiesDescription;
-(NSData *)fileSignature;
-(NSData *)referenceSignature;
-(id)initWithRecordID:(id)arg1 fileSignature:(id)arg2 referenceSignature:(id)arg3 size:(id)arg4 ;
-(NSNumber *)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKDPRecordIdentifier *)recordID;
@end

