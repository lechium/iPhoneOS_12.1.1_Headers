/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSData;

@interface PBBProtoOfflineTerms : PBCodable <NSCopying> {

	NSMutableArray* _appleLanguages;
	NSString* _countryCode;
	NSString* _languageCode;
	NSData* _license;
	NSData* _multiterms;
	NSData* _warranty;

}

@property (nonatomic,readonly) BOOL hasLicense; 
@property (nonatomic,retain) NSData * license;                             //@synthesize license=_license - In the implementation block
@property (nonatomic,readonly) BOOL hasMultiterms; 
@property (nonatomic,retain) NSData * multiterms;                          //@synthesize multiterms=_multiterms - In the implementation block
@property (nonatomic,readonly) BOOL hasWarranty; 
@property (nonatomic,retain) NSData * warranty;                            //@synthesize warranty=_warranty - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;                      //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                       //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * appleLanguages;              //@synthesize appleLanguages=_appleLanguages - In the implementation block
+(Class)appleLanguagesType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLanguageCode;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(BOOL)hasCountryCode;
-(NSData *)license;
-(void)addAppleLanguages:(id)arg1 ;
-(unsigned long long)appleLanguagesCount;
-(void)clearAppleLanguages;
-(id)appleLanguagesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)appleLanguages;
-(void)setAppleLanguages:(NSMutableArray *)arg1 ;
-(void)setLicense:(NSData *)arg1 ;
-(void)setMultiterms:(NSData *)arg1 ;
-(void)setWarranty:(NSData *)arg1 ;
-(BOOL)hasLicense;
-(BOOL)hasMultiterms;
-(BOOL)hasWarranty;
-(NSData *)multiterms;
-(NSData *)warranty;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
@end

