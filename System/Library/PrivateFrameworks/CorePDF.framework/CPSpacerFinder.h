/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class CPZone, NSMutableArray;

@interface CPSpacerFinder : NSObject <CPDisposable> {

	CPZone* contentZone;
	CGRect zoneBounds;
	CGRect textBounds;
	SCD_Struct_CP33* spacerSequence;
	NSMutableArray* spacers;
	unsigned segmentationCount;
	SCD_Struct_CP34* segmentations;
	SCD_Struct_CP35* qualityEntries;

}
-(id)spacers;
-(id)initWithContentZone:(id)arg1 ;
-(void)findSpacers;
-(void)splitTextLines;
-(void)initializeSegmentations;
-(void)initializeJunctions;
-(void)assessQuality;
-(void)determineValidity;
-(void)dispose;
-(void)finalize;
-(void)dealloc;
@end

