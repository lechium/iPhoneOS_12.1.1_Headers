/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPRequestedFields : PBCodable <NSCopying> {

	NSMutableArray* _fields;

}

@property (nonatomic,retain) NSMutableArray * fields;              //@synthesize fields=_fields - In the implementation block
+(Class)fieldsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setFields:(NSMutableArray *)arg1 ;
-(NSMutableArray *)fields;
-(void)addFields:(id)arg1 ;
-(unsigned long long)fieldsCount;
-(void)clearFields;
-(id)fieldsAtIndex:(unsigned long long)arg1 ;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

