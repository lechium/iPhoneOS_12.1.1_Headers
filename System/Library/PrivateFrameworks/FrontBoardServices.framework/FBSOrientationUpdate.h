/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBSOrientationUpdate : NSObject {

	long long _orientation;
	double _duration;
	long long _rotationDirection;

}

@property (assign,nonatomic) long long orientation;                    //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double duration;                          //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long rotationDirection;              //@synthesize rotationDirection=_rotationDirection - In the implementation block
-(id)initWithOrientation:(long long)arg1 duration:(double)arg2 rotationDirection:(long long)arg3 ;
-(void)setRotationDirection:(long long)arg1 ;
-(long long)rotationDirection;
-(id)init;
-(id)description;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
@end

