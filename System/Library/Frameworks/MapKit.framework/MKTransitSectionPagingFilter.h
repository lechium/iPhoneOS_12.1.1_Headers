/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MKTransitSectionPagingFilter : NSObject {

	BOOL _limitNumLines;
	unsigned long long _numLinesFallbackThreshold;
	unsigned long long _numLinesFallbackValue;

}

@property (assign,nonatomic) BOOL limitNumLines;                                        //@synthesize limitNumLines=_limitNumLines - In the implementation block
@property (assign,nonatomic) unsigned long long numLinesFallbackThreshold;              //@synthesize numLinesFallbackThreshold=_numLinesFallbackThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long numLinesFallbackValue;                  //@synthesize numLinesFallbackValue=_numLinesFallbackValue - In the implementation block
+(id)defaultFilterForDepartures;
+(id)defaultFilterForInactiveLines;
-(BOOL)limitNumLines;
-(void)setLimitNumLines:(BOOL)arg1 ;
-(unsigned long long)numLinesFallbackThreshold;
-(void)setNumLinesFallbackThreshold:(unsigned long long)arg1 ;
-(unsigned long long)numLinesFallbackValue;
-(void)setNumLinesFallbackValue:(unsigned long long)arg1 ;
@end

