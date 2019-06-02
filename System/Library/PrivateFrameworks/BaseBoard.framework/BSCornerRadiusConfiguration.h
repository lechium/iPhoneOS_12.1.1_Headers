/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BSCornerRadiusConfiguration : NSObject <BSXPCCoding, NSCopying> {

	double _topLeft;
	double _bottomLeft;
	double _bottomRight;
	double _topRight;

}

@property (nonatomic,readonly) BOOL isCongruent; 
@property (nonatomic,readonly) double topLeft;                      //@synthesize topLeft=_topLeft - In the implementation block
@property (nonatomic,readonly) double bottomLeft;                   //@synthesize bottomLeft=_bottomLeft - In the implementation block
@property (nonatomic,readonly) double bottomRight;                  //@synthesize bottomRight=_bottomRight - In the implementation block
@property (nonatomic,readonly) double topRight;                     //@synthesize topRight=_topRight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqualToCornerRadiusConfiguration:(id)arg1 ;
-(id)initWithCornerRadius:(double)arg1 ;
-(BOOL)isCongruent;
-(id)initWithTopLeft:(double)arg1 bottomLeft:(double)arg2 bottomRight:(double)arg3 topRight:(double)arg4 ;
-(double)topLeft;
-(double)topRight;
-(double)bottomLeft;
-(double)bottomRight;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end

