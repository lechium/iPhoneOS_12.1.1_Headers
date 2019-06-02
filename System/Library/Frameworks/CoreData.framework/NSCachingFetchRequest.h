/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSFetchRequest.h>

@class NSDictionary;

@interface NSCachingFetchRequest : NSFetchRequest {

	NSDictionary* _substitutionVariables;
	id _cachedInfo;
	id _identifier;
	int _lock;

}

@property (nonatomic,readonly) id _identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDictionary * substitutionVariables; 
+(id)_generateIdentifier;
-(NSDictionary *)substitutionVariables;
-(void)setSubstitutionVariables:(NSDictionary *)arg1 ;
-(BOOL)_isCachingFetchRequest;
-(id)_copyForDirtyContext;
-(void)_disableSQLStatementCaching;
-(id)_cachedInfoForRequestor:(id)arg1 ;
-(void)_cacheInfo:(id)arg1 forRequestor:(id)arg2 ;
-(void)_sanityCheckVariables:(id)arg1 ;
-(id)_identifier;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

