/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOSearchAttributionSource : PBCodable <NSCopying> {

	SCD_Struct_GE2* _attributionRequirements;
	NSMutableArray* _attributionApps;
	NSMutableArray* _localizedAttributions;
	NSString* _sourceIdentifier;
	unsigned _sourceVersion;
	NSMutableArray* _supportedComponentActions;
	NSString* _webBaseActionURL;
	BOOL _enforceAppStore;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,retain) NSString * sourceIdentifier;                                    //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (assign,nonatomic) unsigned sourceVersion;                                         //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedAttributions;                         //@synthesize localizedAttributions=_localizedAttributions - In the implementation block
@property (nonatomic,readonly) unsigned long long attributionRequirementsCount; 
@property (nonatomic,readonly) int* attributionRequirements; 
@property (nonatomic,retain) NSMutableArray * attributionApps;                               //@synthesize attributionApps=_attributionApps - In the implementation block
@property (nonatomic,readonly) BOOL hasWebBaseActionURL; 
@property (nonatomic,retain) NSString * webBaseActionURL;                                    //@synthesize webBaseActionURL=_webBaseActionURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * supportedComponentActions;                     //@synthesize supportedComponentActions=_supportedComponentActions - In the implementation block
@property (assign,nonatomic) BOOL hasEnforceAppStore; 
@property (assign,nonatomic) BOOL enforceAppStore;                                           //@synthesize enforceAppStore=_enforceAppStore - In the implementation block
+(Class)localizedAttributionType;
+(Class)attributionAppsType;
+(Class)supportedComponentActionsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSourceVersion:(unsigned)arg1 ;
-(unsigned)sourceVersion;
-(NSMutableArray *)attributionApps;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSString *)sourceIdentifier;
-(void)addLocalizedAttribution:(id)arg1 ;
-(void)addAttributionApps:(id)arg1 ;
-(void)addSupportedComponentActions:(id)arg1 ;
-(unsigned long long)localizedAttributionsCount;
-(void)clearLocalizedAttributions;
-(id)localizedAttributionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)attributionRequirementsCount;
-(void)clearAttributionRequirements;
-(int)attributionRequirementsAtIndex:(unsigned long long)arg1 ;
-(void)addAttributionRequirements:(int)arg1 ;
-(unsigned long long)attributionAppsCount;
-(void)clearAttributionApps;
-(id)attributionAppsAtIndex:(unsigned long long)arg1 ;
-(void)setWebBaseActionURL:(NSString *)arg1 ;
-(unsigned long long)supportedComponentActionsCount;
-(void)clearSupportedComponentActions;
-(id)supportedComponentActionsAtIndex:(unsigned long long)arg1 ;
-(int*)attributionRequirements;
-(void)setAttributionRequirements:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)attributionRequirementsAsString:(int)arg1 ;
-(int)StringAsAttributionRequirements:(id)arg1 ;
-(BOOL)hasWebBaseActionURL;
-(void)setEnforceAppStore:(BOOL)arg1 ;
-(void)setHasEnforceAppStore:(BOOL)arg1 ;
-(BOOL)hasEnforceAppStore;
-(NSMutableArray *)localizedAttributions;
-(void)setLocalizedAttributions:(NSMutableArray *)arg1 ;
-(void)setAttributionApps:(NSMutableArray *)arg1 ;
-(NSString *)webBaseActionURL;
-(NSMutableArray *)supportedComponentActions;
-(void)setSupportedComponentActions:(NSMutableArray *)arg1 ;
-(BOOL)enforceAppStore;
-(id)bestLocalizedAttribution;
-(BOOL)supportsAction:(int)arg1 forComponent:(int)arg2 ;
-(BOOL)canLocallyHandleAction:(int)arg1 forComponent:(int)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

