/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKInactiveTransitLine.h>

@protocol GEOTransitLine;
@class NSString, NSDate, NSTimeZone;

@interface _MKTransitInactiveLine : NSObject <MKInactiveTransitLine> {

	id<GEOTransitLine> _line;
	BOOL _blocked;
	NSDate* _serviceResumesDate;
	NSTimeZone* _timeZone;
	NSDate* _referenceDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<GEOTransitLine> line; 
@property (nonatomic,readonly) NSString * serviceResumesDescription; 
-(NSString *)serviceResumesDescription;
-(id)initWithTransitLine:(id)arg1 blocked:(BOOL)arg2 serviceResumesDate:(id)arg3 timeZone:(id)arg4 referenceDate:(id)arg5 ;
-(id<GEOTransitLine>)line;
@end

