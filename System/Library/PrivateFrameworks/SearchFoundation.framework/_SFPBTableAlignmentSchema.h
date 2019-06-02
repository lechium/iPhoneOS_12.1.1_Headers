/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBTableAlignmentSchema.h>
@class NSArray, _SFPBStringDictionary, NSData;


@protocol _SFPBTableAlignmentSchema <NSObject>
@property (nonatomic,copy) NSArray * tableColumnAlignments; 
@property (nonatomic,retain) _SFPBStringDictionary * metadata; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setMetadata:(id)arg1;
-(void)setTableColumnAlignments:(id)arg1;
-(NSArray *)tableColumnAlignments;
-(void)addTableColumnAlignment:(id)arg1;
-(void)clearTableColumnAlignment;
-(unsigned long long)tableColumnAlignmentCount;
-(id)tableColumnAlignmentAtIndex:(unsigned long long)arg1;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1;
-(_SFPBStringDictionary *)metadata;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, _SFPBStringDictionary, NSData, NSString;

@interface _SFPBTableAlignmentSchema : PBCodable <_SFPBTableAlignmentSchema, NSSecureCoding> {

	NSArray* _tableColumnAlignments;
	_SFPBStringDictionary* _metadata;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * tableColumnAlignments;                 //@synthesize tableColumnAlignments=_tableColumnAlignments - In the implementation block
@property (nonatomic,retain) _SFPBStringDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMetadata:(_SFPBStringDictionary *)arg1 ;
-(void)setTableColumnAlignments:(NSArray *)arg1 ;
-(NSArray *)tableColumnAlignments;
-(void)addTableColumnAlignment:(id)arg1 ;
-(void)clearTableColumnAlignment;
-(unsigned long long)tableColumnAlignmentCount;
-(id)tableColumnAlignmentAtIndex:(unsigned long long)arg1 ;
-(void)setTableColumnAlignment:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(_SFPBStringDictionary *)metadata;
-(id)dictionaryRepresentation;
@end

