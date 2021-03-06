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

@interface PBBProtoSendLanguageAndLocale : PBCodable <NSCopying> {

	NSMutableArray* _appleLanguages;
	NSString* _appleLocale;
	NSData* _archivedPreferences;

}

@property (nonatomic,retain) NSMutableArray * appleLanguages;              //@synthesize appleLanguages=_appleLanguages - In the implementation block
@property (nonatomic,readonly) BOOL hasAppleLocale; 
@property (nonatomic,retain) NSString * appleLocale;                       //@synthesize appleLocale=_appleLocale - In the implementation block
@property (nonatomic,readonly) BOOL hasArchivedPreferences; 
@property (nonatomic,retain) NSData * archivedPreferences;                 //@synthesize archivedPreferences=_archivedPreferences - In the implementation block
+(Class)appleLanguagesType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addAppleLanguages:(id)arg1 ;
-(unsigned long long)appleLanguagesCount;
-(void)clearAppleLanguages;
-(id)appleLanguagesAtIndex:(unsigned long long)arg1 ;
-(void)setAppleLocale:(NSString *)arg1 ;
-(void)setArchivedPreferences:(NSData *)arg1 ;
-(BOOL)hasAppleLocale;
-(BOOL)hasArchivedPreferences;
-(NSMutableArray *)appleLanguages;
-(void)setAppleLanguages:(NSMutableArray *)arg1 ;
-(NSString *)appleLocale;
-(NSData *)archivedPreferences;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

