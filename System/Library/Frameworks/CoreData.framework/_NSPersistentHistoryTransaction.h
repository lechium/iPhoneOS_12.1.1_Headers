/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentHistoryTransaction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSData, NSSQLCore, NSManagedObjectID;

@interface _NSPersistentHistoryTransaction : NSPersistentHistoryTransaction <NSSecureCoding> {

	long long _rowIdentifier;
	double _timestamp;
	NSArray* _changes;
	NSString* _storeID;
	NSString* _bundleID;
	NSString* _processID;
	NSString* _contextName;
	NSString* _author;
	NSData* _queryGeneration;
	NSSQLCore* _store;
	NSManagedObjectID* _backingObjectID;

}
+(BOOL)supportsSecureCoding;
-(id)initialQueryGenerationToken;
-(id)postQueryGenerationToken;
-(id)objectIDNotification;
-(id)_userInfoFromChanges;
-(id)initWithDictionary:(id)arg1 andObjectID:(id)arg2 ;
-(void)_setChanges:(id)arg1 ;
-(id)_backingObjectID;
-(id)author;
-(id)storeID;
-(long long)transactionNumber;
-(id)processID;
-(id)contextName;
-(id)changes;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)timestamp;
-(id)bundleID;
-(id)token;
@end
