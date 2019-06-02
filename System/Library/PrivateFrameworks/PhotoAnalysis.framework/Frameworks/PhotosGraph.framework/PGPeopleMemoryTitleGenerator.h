/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGTitleGenerator.h>

@class NSSet;

@interface PGPeopleMemoryTitleGenerator : PGTitleGenerator {

	unsigned long long _type;
	NSSet* _personNodes;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSSet * personNodes;                  //@synthesize personNodes=_personNodes - In the implementation block
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(NSSet *)personNodes;
-(id)initWithMomentNodes:(id)arg1 personNodes:(id)arg2 type:(unsigned long long)arg3 ;
-(id)_titleForPeople;
-(id)_timeTitleForPeople;
-(id)_titleForSocialGroup;
-(id)_titleForEarlyMoments;
-(id)_timeTitleForEarlyMoments;
-(BOOL)_person:(id)arg1 isPresentInAnyMomentOfMoments:(id)arg2 ;
-(id)_birthdayTitleForPeople;
-(BOOL)_useSplitTimeTitlesIfNeeded;
-(unsigned long long)type;
@end

