/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXResource.h>

@class NSString;

@interface SXImageResource : SXResource

@property (nonatomic,readonly) CGSize dimensions; 
@property (nonatomic,readonly) NSString * imageIdentifier; 
+(id)typeString;
-(NSString *)imageIdentifier;
-(CGSize)dimensions;
-(double)heightForImageWidth:(double)arg1 ;
-(double)widthForImageHeight:(double)arg1 ;
-(CGSize)sizeThatFills:(CGSize)arg1 ;
-(id)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
