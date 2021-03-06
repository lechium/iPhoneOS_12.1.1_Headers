/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSInvestigationFeeder.h>

@class NSArray;

@interface CLSTestInvestigationFeeder : CLSInvestigationFeeder {

	NSArray* _items;

}
-(id)approximateLocation;
-(void)enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)allItems;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(id)startDateComponents;
-(id)endDateComponents;
-(void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithItems:(id)arg1 ;
-(unsigned long long)numberOfItems;
@end

