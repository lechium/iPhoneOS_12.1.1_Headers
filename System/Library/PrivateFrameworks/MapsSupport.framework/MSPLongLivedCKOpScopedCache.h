/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MSPLongLivedCKOpCache;

@interface MSPLongLivedCKOpScopedCache : NSObject {

	NSString* _typeName;
	MSPLongLivedCKOpCache* _cache;

}

@property (nonatomic,retain) MSPLongLivedCKOpCache * cache;              //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) NSString * typeName;                      //@synthesize typeName=_typeName - In the implementation block
-(void)removeOperation:(id)arg1 ;
-(void)pruneOperationsToIDs:(id)arg1 ;
-(BOOL)isAwareOfOperationID:(id)arg1 ;
-(BOOL)isCurrentOperationID:(id)arg1 ;
-(id)initWithType:(id)arg1 cache:(id)arg2 ;
-(BOOL)hasOperationID:(id)arg1 ;
-(NSString *)typeName;
-(id)initWithType:(id)arg1 ;
-(void)addOperation:(id)arg1 ;
-(void)setCache:(MSPLongLivedCKOpCache *)arg1 ;
-(MSPLongLivedCKOpCache *)cache;
@end

