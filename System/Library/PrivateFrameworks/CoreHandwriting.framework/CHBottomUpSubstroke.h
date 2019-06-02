/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CHStrokeIdentifier;
#import <CoreHandwriting/CoreHandwriting-Structs.h>
@interface CHBottomUpSubstroke : NSObject {

	id<CHStrokeIdentifier> _strokeIdentifier;
	double _startTimestamp;
	double _endTimestamp;
	double _curvature;
	long long _originalWritingDirectionIndex;
	CGVector _writingOrientation;
	CGVector _strokeDeviation;
	CGPoint _coalescedCenter;
	vector<CGPoint, std::__1::allocator<CGPoint> >* _convexHull;
	CGRect _bounds;

}

@property (nonatomic,retain,readonly) id<CHStrokeIdentifier> strokeIdentifier;              //@synthesize strokeIdentifier=_strokeIdentifier - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                                               //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) double startTimestamp;                                       //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (nonatomic,readonly) double endTimestamp;                                         //@synthesize endTimestamp=_endTimestamp - In the implementation block
@property (nonatomic,readonly) vector<CGPoint* convexHull;                                  //@synthesize convexHull=_convexHull - In the implementation block
@property (nonatomic,readonly) double curvature;                                            //@synthesize curvature=_curvature - In the implementation block
@property (assign,nonatomic) CGVector writingOrientation;                                   //@synthesize writingOrientation=_writingOrientation - In the implementation block
@property (assign,nonatomic) CGVector strokeDeviation;                                      //@synthesize strokeDeviation=_strokeDeviation - In the implementation block
@property (assign,nonatomic) long long originalWritingDirectionIndex;                       //@synthesize originalWritingDirectionIndex=_originalWritingDirectionIndex - In the implementation block
@property (assign,nonatomic) CGPoint coalescedCenter;                                       //@synthesize coalescedCenter=_coalescedCenter - In the implementation block
-(double)endTimestamp;
-(vector<CGPoint*)convexHull;
-(id)initWithStrokeIdentifier:(id)arg1 bounds:(CGRect)arg2 startTimestamp:(double)arg3 endTimestamp:(double)arg4 convexHull:(vector<CGPoint, std::__1::allocator<CGPoint> >*)arg5 curvature:(double)arg6 ;
-(double)curvature;
-(CGVector)writingOrientation;
-(void)setWritingOrientation:(CGVector)arg1 ;
-(CGVector)strokeDeviation;
-(void)setStrokeDeviation:(CGVector)arg1 ;
-(long long)originalWritingDirectionIndex;
-(void)setOriginalWritingDirectionIndex:(long long)arg1 ;
-(CGPoint)coalescedCenter;
-(void)setCoalescedCenter:(CGPoint)arg1 ;
-(id<CHStrokeIdentifier>)strokeIdentifier;
-(void)dealloc;
-(CGRect)bounds;
-(double)startTimestamp;
@end

