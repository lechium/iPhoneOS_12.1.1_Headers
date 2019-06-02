/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIImage;

@interface REImage : NSObject <NSCopying, NSCoding>

@property (nonatomic,readonly) UIImage * image; 
+(id)imageWithImage:(id)arg1 ;
+(id)imageWithCGImage:(CGImageRef)arg1 scale:(double)arg2 ;
+(id)imageWithContentsOfFileAtPath:(id)arg1 scale:(double)arg2 ;
+(id)imageWithData:(id)arg1 scale:(double)arg2 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
-(UIImage *)image;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
