/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedTransformationSort.h>

@interface FCFeedTransformationSortBlock : FCFeedTransformationSort {

	/*^block*/id _sortBlock;

}

@property (nonatomic,copy) id sortBlock;              //@synthesize sortBlock=_sortBlock - In the implementation block
+(id)transformationWithSortBlock:(/*^block*/id)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
-(void)setSortBlock:(id)arg1 ;
-(id)sortBlock;
@end

