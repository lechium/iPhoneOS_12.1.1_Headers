/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
@class NSMutableArray;

@interface DDResultTracker : NSObject {

	unsigned countRemainingByCategory[6];
	unsigned totalCountRemaining;
	BOOL sortByProximity;
	unsigned long long referenceResultLocation;
	unsigned long long maximumDistanceForEmails;
	unsigned long long maximumDistance;
	_DDResult* existingAddressResult;
	NSMutableArray* resultsBefore;
	NSMutableArray* resultsAfter;
	_DDResult* referenceResult;

}

@property (readonly) unsigned totalCountRemaining; 
@property (assign) unsigned long long maximumDistanceForEmails; 
@property (assign) unsigned long long maximumDistance; 
-(unsigned long long)maximumDistance;
-(void)setMaximumDistance:(unsigned long long)arg1 ;
-(id)initWithReferenceResult:(_DDResult*)arg1 ;
-(BOOL)addResultIfAppropriate:(_DDResult*)arg1 ;
-(unsigned)totalCountRemaining;
-(unsigned long long)maximumDistanceForEmails;
-(void)setMaximumDistanceForEmails:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)results;
@end
