/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKNoiseSource.h>

@interface GKConstantNoiseSource : GKNoiseSource {

	double _value;

}

@property (assign,nonatomic) double value;              //@synthesize value=_value - In the implementation block
+(id)constantNoiseWithValue:(double)arg1 ;
-(id)cloneModule;
-(double)valueAt:;
-(id)init;
-(double)value;
-(void)setValue:(double)arg1 ;
-(id)initWithValue:(double)arg1 ;
@end

