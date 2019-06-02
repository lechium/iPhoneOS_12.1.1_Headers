/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFInvalidating.h>

@protocol AFClockItemStorageDelegate;
@class NSDate, NSMutableDictionary, NSString, NSDictionary;

@interface AFClockItemStorage : NSObject <AFInvalidating> {

	id<AFClockItemStorageDelegate> _delegate;
	long long _groupingDepth;
	unsigned long long _workingGeneration;
	NSDate* _workingDate;
	NSMutableDictionary* _workingItemsByID;
	NSString* _identifier;
	unsigned long long _generation;
	NSDate* _date;
	NSDictionary* _itemsByID;

}

@property (nonatomic,copy,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long generation;              //@synthesize generation=_generation - In the implementation block
@property (nonatomic,copy) NSDate * date;                                //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSDictionary * itemsByID;                     //@synthesize itemsByID=_itemsByID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setItemsByID:(NSDictionary *)arg1 ;
-(id)itemWithID:(id)arg1 ;
-(void)insertOrUpdateItems:(id)arg1 ;
-(void)deleteItemsWithIDs:(id)arg1 ;
-(void)deleteAllItems;
-(NSDictionary *)itemsByID;
-(void)setGeneration:(unsigned long long)arg1 ;
-(unsigned long long)generation;
-(id)initWithIdentifier:(id)arg1 delegate:(id)arg2 ;
-(void)beginGrouping;
-(void)endGrouping;
-(NSString *)identifier;
-(NSDate *)date;
-(void)invalidate;
-(void)setDate:(NSDate *)arg1 ;
@end

