/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class _MPSectionedIdentifierListProxyEntry, MPSectionedIdentifierList, NSMutableArray;

@interface MPSectionedIdentifierListReverseEnumerator : NSEnumerator {

	_MPSectionedIdentifierListProxyEntry* _startEntryProxy;
	MPSectionedIdentifierList* _sectionedIdentifierList;
	unsigned long long _options;
	NSMutableArray* _contexts;
	NSMutableArray* _entriesToEmit;
	NSMutableArray* _nextEmittableEnumerationResults;

}

@property (assign,nonatomic) unsigned long long options;                                         //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSMutableArray * contexts;                                          //@synthesize contexts=_contexts - In the implementation block
@property (nonatomic,retain) NSMutableArray * entriesToEmit;                                     //@synthesize entriesToEmit=_entriesToEmit - In the implementation block
@property (nonatomic,retain) NSMutableArray * nextEmittableEnumerationResults;                   //@synthesize nextEmittableEnumerationResults=_nextEmittableEnumerationResults - In the implementation block
@property (nonatomic,readonly) MPSectionedIdentifierList * sectionedIdentifierList;              //@synthesize sectionedIdentifierList=_sectionedIdentifierList - In the implementation block
-(id)_initWithSectionedIdentifierList:(id)arg1 options:(unsigned long long)arg2 startingEntry:(id)arg3 ;
-(MPSectionedIdentifierList *)sectionedIdentifierList;
-(id)initWithSectionedIdentifierList:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithSectionedIdentifierList:(id)arg1 options:(unsigned long long)arg2 startingAtItem:(id)arg3 inSection:(id)arg4 ;
-(NSMutableArray *)contexts;
-(void)setContexts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)nextEmittableEnumerationResults;
-(void)setNextEmittableEnumerationResults:(NSMutableArray *)arg1 ;
-(id)_startEntryProxy;
-(NSMutableArray *)entriesToEmit;
-(void)setEntriesToEmit:(NSMutableArray *)arg1 ;
-(id)nextObject;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
@end

