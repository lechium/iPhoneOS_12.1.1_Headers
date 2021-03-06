/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, SSSQLiteDatabase;

@interface SSPurchasableItem : NSObject {

	NSDictionary* _propertyValues;
	NSString* _tableName;
	SSSQLiteDatabase* _database;

}
+(id)sortByDatePurchasedKey;
+(id)allPropertyKeys;
+(id)databaseTable;
-(long long)accountUniqueIdentifier;
-(id)initWithPropertyValues:(id)arg1 ;
-(id)datePurchased;
-(long long)storeID;
-(id)propertyValues;
-(long long)pid;
-(void)dealloc;
-(id)description;
-(BOOL)isHidden;
@end

