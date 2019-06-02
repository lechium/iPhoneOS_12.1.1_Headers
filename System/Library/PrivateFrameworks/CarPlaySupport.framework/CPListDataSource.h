/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol CPListDataSource <NSObject>
@property (nonatomic,readonly) long long numberOfSections; 
@property (nonatomic,readonly) NSArray * items; 
@required
-(id)itemAtIndexPath:(id)arg1;
-(NSArray *)items;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1;

@end

