/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreRequest.h>

@class NSSet;

@interface NSSaveChangesRequest : NSPersistentStoreRequest {

	NSSet* _insertedObjects;
	NSSet* _updatedObjects;
	NSSet* _deletedObjects;
	NSSet* _optimisticallyLockedObjects;
	unsigned long long _flags;
	void* _reserved1;

}

@property (readonly) NSSet * insertedObjects; 
@property (readonly) NSSet * updatedObjects; 
@property (readonly) NSSet * deletedObjects; 
@property (readonly) NSSet * lockedObjects; 
+(void)initialize;
-(BOOL)_secureOperation;
-(void)_setSecureOperation:(BOOL)arg1 ;
-(NSSet *)lockedObjects;
-(id)initWithInsertedObjects:(id)arg1 updatedObjects:(id)arg2 deletedObjects:(id)arg3 lockedObjects:(id)arg4 ;
-(char)_retryHandlerCount;
-(void)_setRetryHandlerCount:(char)arg1 ;
-(void)setDeletedObjects:(NSSet *)arg1 ;
-(unsigned long long)requestType;
-(NSSet *)updatedObjects;
-(NSSet *)deletedObjects;
-(NSSet *)insertedObjects;
-(BOOL)hasChanges;
-(id)init;
-(void)dealloc;
-(id)description;
@end

