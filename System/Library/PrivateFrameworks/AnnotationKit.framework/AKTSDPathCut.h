/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AKTSDPathCut : NSObject {

	long long mSegment;
	double mT;
	double mSkew;

}

@property (nonatomic,readonly) long long segment; 
@property (nonatomic,readonly) double t; 
@property (nonatomic,readonly) double skew; 
-(id)initWithSegment:(long long)arg1 atT:(double)arg2 withSkew:(double)arg3 ;
-(double)t;
-(double)skew;
-(id)description;
-(long long)segment;
@end
