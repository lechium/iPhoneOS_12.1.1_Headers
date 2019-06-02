/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/_Geometry.h>

@class NSNumber;

@interface _Flower : _Geometry {

	float _width;
	float _height;
	NSNumber* _tex;

}

@property (nonatomic,retain) NSNumber * tex;              //@synthesize tex=_tex - In the implementation block
@property (assign,nonatomic) float width;                 //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) float height;                //@synthesize height=_height - In the implementation block
-(NSNumber *)tex;
-(void)setTex:(NSNumber *)arg1 ;
-(float)width;
-(void)setWidth:(float)arg1 ;
-(void)setHeight:(float)arg1 ;
-(float)height;
@end
