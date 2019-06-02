/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@interface NSPersistentCacheRow : NSObject {

	int _cd_rc;
	int _externalReferenceCount;
	struct {
		unsigned _invalidToOnes : 1;
		unsigned _hasTemporaryID : 1;
		unsigned _backgroundDealloc : 1;
		unsigned _reservedFlags : 1;
		unsigned _virtualfk_count : 14;
		unsigned _ordkey_count : 14;
	}  _externalRefFlags;
	id* _toManyMap;
	double _birth;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(const id*)knownKeyValuesPointer;
-(void)updateMissingRelationshipCachesFromOriginal:(id)arg1 ;
-(void)incrementRefCount;
-(int)externalReferenceCount;
-(id)initWithOptions:(unsigned)arg1 andTimestamp:(double)arg2 ;
-(int)decrementRefCount;
-(void)_initializeRelationshipCaches;
-(unsigned long long)toManyOffsetForProperty:(id)arg1 ;
-(void)incrementExternalReferenceCount:(int)arg1 ;
-(void)copyRelationshipCachesFrom:(id)arg1 ;
-(void)releaseRelationshipCaches;
-(id)relatedObjectIDsForProperty:(id)arg1 ;
-(double)timestampForProperty:(id)arg1 ;
-(void)setRelatedObjectIDs:(id)arg1 forProperty:(id)arg2 options:(unsigned)arg3 andTimestamp:(double)arg4 ;
-(id)ancillaryOrderKeysForProperty:(id)arg1 ;
-(void)setAncillaryOrderKeys:(id)arg1 forProperty:(id)arg2 options:(unsigned)arg3 andTimestamp:(double)arg4 ;
-(id)objectID;
-(void)dealloc;
-(oneway void)release;
-(id)retain;
-(unsigned long long)retainCount;
-(double)timestamp;
-(unsigned long long)version;
-(unsigned)options;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(void)setTimestamp:(double)arg1 ;
@end

