/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitAttribution.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, PBUnknownFields, NSMutableArray, NSString;

@interface MSPTransitStorageAttribution : PBCodable <GEOTransitAttribution, NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _providerNames;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_providerNames,nonatomic,readonly) NSArray * providerNames; 
@property (nonatomic,retain) NSMutableArray * providerNames;                               //@synthesize providerNames=_providerNames - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)providerNamesType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)providerNamesCount;
-(void)clearProviderNames;
-(NSArray *)providerNames;
-(void)setProviderNames:(NSArray *)arg1 ;
-(id)_providerNames;
-(id)initWithAttribution:(id)arg1 ;
-(void)addProviderNames:(id)arg1 ;
-(id)providerNamesAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

