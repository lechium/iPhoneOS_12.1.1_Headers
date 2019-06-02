/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSArray;

@interface _WGConcreteDataSource : NSObject {

	NSMutableArray* _observers;
	NSMutableDictionary* _identifiersToData;

}

@property (nonatomic,readonly) NSArray * dataIdentifiers; 
@property (nonatomic,readonly) NSArray * data; 
-(void)addObserver:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeObserver:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dataSource:(id)arg1 replaceWithDatum:(id)arg2 observerUpdateBlock:(/*^block*/id)arg3 ;
-(void)dataSource:(id)arg1 removeDatumWithIdentifier:(id)arg2 observerUpdateBlock:(/*^block*/id)arg3 ;
-(NSArray *)dataIdentifiers;
-(id)datumWithIdentifier:(id)arg1 ;
-(id)init;
-(NSArray *)data;
@end

