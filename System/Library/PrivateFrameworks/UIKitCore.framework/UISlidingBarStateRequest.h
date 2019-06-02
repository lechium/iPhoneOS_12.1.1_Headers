/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UISlidingBarStateRequest : NSObject <NSCopying> {

	BOOL _userInitiated;
	double _leadingWidth;
	double _trailingWidth;

}

@property (assign,nonatomic) double leadingWidth;               //@synthesize leadingWidth=_leadingWidth - In the implementation block
@property (assign,nonatomic) double trailingWidth;              //@synthesize trailingWidth=_trailingWidth - In the implementation block
@property (assign,nonatomic) BOOL userInitiated;                //@synthesize userInitiated=_userInitiated - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)leadingWidth;
-(void)setLeadingWidth:(double)arg1 ;
-(void)setUserInitiated:(BOOL)arg1 ;
-(double)trailingWidth;
-(void)setTrailingWidth:(double)arg1 ;
-(BOOL)userInitiated;
-(id)_closestEqualOrLargerState:(id)arg1 ;
-(id)_matchingState:(id)arg1 ;
-(id)_closestState:(id)arg1 returningDistance:(double*)arg2 ;
-(id)_closestEqualOrLargerState:(id)arg1 returningDistance:(double*)arg2 ;
-(id)_closestState:(id)arg1 ;
@end

