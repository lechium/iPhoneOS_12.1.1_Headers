/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3Collection.h>

@interface ML3Album : ML3Collection
+(id)propertyForMPMediaEntityProperty:(id)arg1 ;
+(BOOL)propertyIsCountProperty:(id)arg1 ;
+(id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3 ;
+(id)predisambiguatedProperties;
+(id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2 ;
+(id)propertiesForGroupingKey;
+(id)propertiesForGroupingUniqueCollections;
+(id)protocolItemWithProperties:(id)arg1 inLibrary:(id)arg2 ;
+(id)_albumArtistProtocolItemWithTrackProperties:(id)arg1 inLibrary:(id)arg2 ;
+(id)trackForeignPersistentID;
+(long long)revisionTrackingCode;
+(id)defaultOrderingTerms;
+(id)databaseTable;
+(id)joinClausesForProperty:(id)arg1 ;
+(id)allProperties;
+(void)initialize;
-(void)updateTrackValues:(id)arg1 ;
-(id)protocolItem;
-(id)multiverseIdentifier;
@end

