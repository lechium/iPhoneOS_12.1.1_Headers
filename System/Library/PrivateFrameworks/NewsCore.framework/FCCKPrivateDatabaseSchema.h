/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface FCCKPrivateDatabaseSchema : NSObject {

	NSDictionary* _zoneSchemasByClientName;
	NSDictionary* _zoneSchemasByServerName;
	NSArray* _defaultZoneSchemas;

}
+(id)databaseSchemaWithZones:(id)arg1 ;
-(void)enumerateZoneSchemasWithBlock:(/*^block*/id)arg1 ;
-(id)schemaForZoneWithClientName:(id)arg1 ;
-(id)schemaForZoneContainingClientRecordID:(id)arg1 ;
-(id)schemaForZoneWithServerName:(id)arg1 ;
-(id)schemaForZoneContainingServerRecordID:(id)arg1 ;
-(void)enumerateDefaultZoneSchemasWithBlock:(/*^block*/id)arg1 ;
-(id)initWithZoneSchemas:(id)arg1 ;
-(id)initWithSchemaDictionary:(id)arg1 ;
-(id)init;
@end

