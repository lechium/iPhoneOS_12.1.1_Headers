/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface TSDExteriorTextWrap : NSObject <NSCopying, NSMutableCopying> {

	BOOL _isHTMLWrap;
	int _type;
	int _direction;
	int _fitType;
	double _margin;
	double _alphaThreshold;

}

@property (nonatomic,readonly) BOOL isHTMLWrap;                    //@synthesize isHTMLWrap=_isHTMLWrap - In the implementation block
@property (nonatomic,readonly) int type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int direction;                      //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) int fitType;                        //@synthesize fitType=_fitType - In the implementation block
@property (nonatomic,readonly) double margin;                      //@synthesize margin=_margin - In the implementation block
@property (nonatomic,readonly) double alphaThreshold;              //@synthesize alphaThreshold=_alphaThreshold - In the implementation block
+(id)exteriorTextWrap;
+(id)exteriorTextWrapWithIsHTMLWrap:(BOOL)arg1 type:(int)arg2 direction:(int)arg3 fitType:(int)arg4 margin:(double)arg5 alphaThreshold:(double)arg6 ;
-(id)initWithIsHTMLWrap:(BOOL)arg1 type:(int)arg2 direction:(int)arg3 fitType:(int)arg4 margin:(double)arg5 alphaThreshold:(double)arg6 ;
-(BOOL)isHTMLWrap;
-(double)alphaThreshold;
-(int)fitType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)margin;
-(int)type;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(int)direction;
@end
